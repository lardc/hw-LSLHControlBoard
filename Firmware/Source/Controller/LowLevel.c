// Header
#include "LowLevel.h"

// Include
#include "Board.h"
#include "Delay.h"

// Functions
//
void LL_ToggleBoardLED()
{
	GPIO_Toggle(GPIO_LED);
}
//------------------------------------

void LL_IdLowRange(bool State)
{

}
//------------------------------------

bool LL_IsIdLowRange()
{
	return 0;
}
//------------------------------------

void LL_SyncPowerCell(bool State)
{
	GPIO_SetState(GPIO_SYNC_POWER_CELL, State);
}
//------------------------------------

void LL_SyncScope(bool State)
{
	GPIO_SetState(GPIO_SYNC_SCOPE, State);
}
//------------------------------------

void LL_PulseIg(bool State)
{
	GPIO_SetState(GPIO_IG_PULSE, !State);
}
//------------------------------------
