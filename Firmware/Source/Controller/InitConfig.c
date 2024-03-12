// Header
#include "InitConfig.h"

// Includes
#include "Board.h"
#include "SysConfig.h"
#include "BCCIxParams.h"
#include "MemBuffers.h"
#include "Global.h"

// Functions
//
void INITCFG_ConfigSystemClock()
{
	RCC_PLL_HSE_Config(QUARTZ_FREQUENCY, PREDIV_4, PLL_14);
	RCC_SysCfg_Clk_EN();
}
//------------------------------------

void INITCFG_ConfigGPIO()
{
	// Включение тактирования портов
	RCC_GPIO_Clk_EN(PORTA);
	RCC_GPIO_Clk_EN(PORTB);

	// Цифровые входы
	GPIO_InitInput(GPIO_CUR_ERR, NoPull);

	// Аналоговые входы
	GPIO_InitAnalog(GPIO_MEASURE_ID);
	GPIO_InitAnalog(GPIO_MEASURE_VD);

	// Выходы
	GPIO_InitPushPullOutput(GPIO_LED);
	GPIO_InitPushPullOutput(GPIO_AMP_CS);

	GPIO_InitOpenDrainOutput(GPIO_IG_PULSE, Pull_Up);
	GPIO_InitOpenDrainOutput(GPIO_SYNC_POWER_CELL, Pull_Up);
	GPIO_InitOpenDrainOutput(GPIO_SYNC_SCOPE, Pull_Up);
	GPIO_InitOpenDrainOutput(GPIO_SEL_CHANEL, Pull_Up);

	// Начальная установка состояний
	GPIO_SetState(GPIO_SEL_CHANEL, true);
	GPIO_SetState(GPIO_SYNC_POWER_CELL, true);
	GPIO_SetState(GPIO_SYNC_SCOPE, true);
	GPIO_SetState(GPIO_AMP_CS, false);
	GPIO_SetState(GPIO_IG_PULSE, true);

	// Альтернативные функции
	GPIO_InitAltFunction(GPIO_ALT_CAN_RX, AltFn_9);
	GPIO_InitAltFunction(GPIO_ALT_CAN_TX, AltFn_9);
	GPIO_InitAltFunction(GPIO_ALT_UART_RX, AltFn_7);
	GPIO_InitAltFunction(GPIO_ALT_UART_TX, AltFn_7);
	GPIO_InitAltFunction(GPIO_ALT_SPI1_CLK, AltFn_5);
	GPIO_InitAltFunction(GPIO_ALT_SPI1_MOSI, AltFn_5);
}
//------------------------------------

void INITCFG_ConfigCAN()
{
	RCC_CAN_Clk_EN(CAN_1_ClkEN);
	NCAN_Init(SYSCLK, CAN_BAUDRATE, false);
	NCAN_FIFOInterrupt(true);
	NCAN_FilterInit(0, CAN_SLAVE_FILTER_ID, CAN_SLAVE_NID_MASK);
	NCAN_FilterInit(1, CAN_MASTER_FILTER_ID, CAN_MASTER_NID_MASK);
}
//------------------------------------

void INITCFG_ConfigUART()
{
	USART_Init(USART1, SYSCLK, USART_BAUDRATE);
	USART_Recieve_Interupt(USART1, 0, true);
}
//------------------------------------

void INITCFG_ConfigSPI()
{
	SPI_Init8b(SPI1,  SPI_CR1_BR_1 >> 3, FALSE);
}
//------------------------------------

void INITCFG_ConfigADC()
{
	RCC_ADC_Clk_EN(ADC_12_ClkEN);

	ADC_Calibration(ADC1);

	ADC_ChannelSeqReset(ADC1);

	ADC_ChannelSeqLen(ADC1, 2);
	ADC_ChannelSet_Sequence(ADC1, ADC1_ID_CHANNEL, 1);
	ADC_ChannelSet_Sequence(ADC1, ADC1_VD_CHANNEL, 2);
	ADC_ChannelSet_SampleTime(ADC1, ADC1_ID_CHANNEL, ADC_SMPL_TIME_61_5);
	ADC_ChannelSet_SampleTime(ADC1, ADC1_VD_CHANNEL, ADC_SMPL_TIME_61_5);
	ADC_TrigConfig(ADC1, ADC12_TIM1_TRGO, RISE);

	ADC_DMAConfig(ADC1);
	ADC_Enable(ADC1);
	ADC_SamplingStart(ADC1);
}
//------------------------------------

void INITCFG_ConfigTimer3()
{
	TIM_Clock_En(TIM_3);
	TIM_Config(TIM3, SYSCLK, TIMER3_uS);
	TIM_Interupt(TIM3, 0, true);
	TIM_Start(TIM3);
}
//------------------------------------

void INITCFG_ConfigTimer1()
{
	TIM_Clock_En(TIM_1);
	TIM_Config(TIM1, SYSCLK, TIMER1_uS);
	TIM_DMA(TIM1, DMAEN);
	TIM_MasterMode(TIM1, MMS_UPDATE);
}
//------------------------------------

void INITCFG_ConfigDMA()
{
	DMA_Clk_Enable(DMA1_ClkEN);
	
	DMA_Reset(DMA_ADC);
	DMA_Interrupt(DMA_ADC, DMA_TRANSFER_COMPLETE, 0, true);
	DMAChannelX_DataConfig(DMA_ADC, (uint32_t)(&MEMBUF_DMA[0]), (uint32_t)(&ADC1->DR), VALUES_POWER_DMA_SIZE * 2);
	DMAChannelX_Config(DMA_ADC, DMA_MEM2MEM_DIS, DMA_LvlPriority_LOW, DMA_MSIZE_16BIT, DMA_PSIZE_16BIT,
			DMA_MINC_EN, DMA_PINC_DIS, DMA_CIRCMODE_DIS, DMA_READ_FROM_PERIPH);
}
//------------------------------------

void INITCFG_ConfigWatchDog()
{
	IWDG_Config();
	IWDG_ConfigureFastUpdate();
}
//------------------------------------
