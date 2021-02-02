// Include
#include "Interrupts.h"
//
#include "LowLevel.h"
#include "Board.h"
#include "Controller.h"
#include "Logic.h"
#include "Global.h"
#include "MemBuffers.h"

// Functions
//-----------------------------------------

void DMA1_Channel1_IRQHandler()
{
	if(DMA_IsTransferComplete(DMA1, DMA_ISR_TCIF1))
	{
		for (uint8_t i = 0; i < VALUES_POWER_DMA_SIZE; ++i)
		{
			if(ADC_CHANNEL_SWAP)
			{
				MEMBUF_DMA_Id[i] += MEMBUF_DMA[i] >> 16;
				MEMBUF_DMA_Vd[i] += MEMBUF_DMA[i] &  0xFFFF;
			}
			else
			{
				MEMBUF_DMA_Vd[i] += MEMBUF_DMA[i] >> 16;
				MEMBUF_DMA_Id[i] += MEMBUF_DMA[i] &  0xFFFF;
			}

			MEMBUF_DMA[i] = 0;
		}

		DMA_TransferCompleteReset(DMA1, DMA_IFCR_CTCIF1);
	}
}
//-----------------------------------------

void USART1_IRQHandler()
{
	if(ZwSCI_RecieveCheck(USART1))
	{
		ZwSCI_RegisterToFIFO(USART1);
		ZwSCI_RecieveFlagClear(USART1);
	}
}
//-----------------------------------------

void USB_LP_CAN_RX0_IRQHandler()
{
	if(NCAN_RecieveCheck())
	{
		NCAN_RecieveData();
		NCAN_RecieveFlagReset();
	}
}
//-----------------------------------------

void TIM3_IRQHandler()
{
	static uint16_t LED_BlinkTimeCounter = 0;
	
	if(TIM_StatusCheck(TIM3))
	{
		CONTROL_TimeCounter++;
		if(++LED_BlinkTimeCounter > TIME_LED_BLINK)
		{
			LL_ToggleBoardLED();
			LED_BlinkTimeCounter = 0;
		}
		
		TIM_StatusClear(TIM3);
	}
}
//-----------------------------------------
