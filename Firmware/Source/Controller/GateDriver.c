// Header
#include "GateDriver.h"

// Include
#include "Board.h"
#include "LowLevel.h"
#include "Delay.h"

// Functions
//
void GATE_PulseOutput(bool State)
{
	GPIO_SetState(GPIO_IG_PULSE, !State);
}
//------------------------------------

void GATE_IgPulse(uint16_t PulseWidth)
{
	LL_PulseIg(true);
	DELAY_US(PulseWidth);
	LL_PulseIg(false);
}
//------------------------------------
