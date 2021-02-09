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
	LL_PulseIg(false);
	DELAY_MS(5);
	LL_PulseIg(true);
}
//------------------------------------
