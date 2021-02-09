// Header
#include "LowLevel.h"

// Include
#include "Board.h"
#include "Delay.h"

// Variables
//
volatile bool IdLowRange = FALSE;

// Functions
void LL_WriteToShuntAmpl(volatile uint8_t Data);
//
void LL_ToggleBoardLED()
{
	GPIO_Toggle(GPIO_LED);
}
//------------------------------------

void LL_IdLowRange(bool State)
{
	IdLowRange = State;

	if(State)
	{
		LL_WriteToShuntAmpl(2 << 1);
	}
	else
	{
		LL_WriteToShuntAmpl(0);
	}


}
//------------------------------------

bool LL_IsIdLowRange()
{
	return IdLowRange;
}
//------------------------------------

void LL_SyncPowerCell(bool State)
{
	GPIO_SetState(GPIO_SYNC_POWER_CELL, !State);
}
//------------------------------------

void LL_SyncScope(bool State)
{
	GPIO_SetState(GPIO_SYNC_SCOPE, !State);
}
//------------------------------------

void LL_PulseIg(bool State)
{
	GPIO_SetState(GPIO_IG_PULSE, !State);
}
//------------------------------------

void LL_WriteToShuntAmpl(volatile uint8_t Data)
{
	SPI_WriteByte8b(SPI1, Data);

    for (uint16_t i = 0; i < 100; ++i) asm("nop");
	GPIO_SetState(GPIO_AMP_CS, TRUE);

	for (uint16_t i = 0; i < 100; ++i) asm("nop");
	GPIO_SetState(GPIO_AMP_CS, FALSE);
}
