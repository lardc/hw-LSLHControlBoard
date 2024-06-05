// Header
#include "LowLevel.h"

// Include
#include "Board.h"
#include "Delay.h"
#include "DataTable.h"

// Definitions
#define DAC_CHANNEL_B		BIT15

// Variables
static bool IdLowRange = false;

// Forward functions
void LL_WriteDACx(uint16_t Data);
void LL_WriteToShuntAmpl(uint8_t Data);

// Functions
//
void LL_ToggleBoardLED()
{
	GPIO_Toggle((DataTable[REG_CFG_SCHEAD_PCB] == 0) ? GPIO_LED : GPIO_SCH_LED);
}
//------------------------------------

void LL_IdLowRange(bool State)
{
	if(DataTable[REG_CFG_SCHEAD_PCB] == 0)
		GPIO_SetState(GPIO_ID_LOW_RANGE, !State);
	else
	{
		IdLowRange = State;
		LL_WriteToShuntAmpl(State ? 0x4 : 0x0);
	}
}
//------------------------------------

bool LL_IsIdLowRange()
{
	if(DataTable[REG_CFG_SCHEAD_PCB] == 0)
		return !GPIO_GetState(GPIO_ID_LOW_RANGE);
	else
		return IdLowRange;
}
//------------------------------------

void LL_SyncPowerCell(bool State)
{
	if(DataTable[REG_CFG_SCHEAD_PCB] == 0)
		GPIO_SetState(GPIO_SYNC_POWER_CELL, State);
	else
		GPIO_SetState(GPIO_SCH_SYNC_POW_CELL, !State);
}
//------------------------------------

void LL_SyncScope(bool State)
{
	GPIO_SetState((DataTable[REG_CFG_SCHEAD_PCB] == 0) ? GPIO_SYNC_SCOPE : GPIO_SCH_SYNC_SCOPE, State);
}
//------------------------------------

bool LL_SyncScopeGetState()
{
	return GPIO_GetState((DataTable[REG_CFG_SCHEAD_PCB] == 0) ? GPIO_SYNC_SCOPE : GPIO_SCH_SYNC_SCOPE);
}
//------------------------------------

void LL_WriteToShuntAmpl(uint8_t Data)
{
	SPI_WriteByte(SPI1, Data);
	DELAY_US(1);
	GPIO_SetState(GPIO_SCH_AMP_CS, true);
	DELAY_US(1);
	GPIO_SetState(GPIO_SCH_AMP_CS, false);
	DELAY_US(1);
}
//------------------------------------

void LL_WriteDACx(uint16_t Data)
{
	GPIO_SetState(GPIO_DAC_CS, false);
	SPI_WriteByte(SPI1, Data);
	GPIO_SetState(GPIO_DAC_CS, true);
	DELAY_US(1);

	GPIO_SetState(GPIO_DAC_LDAC, false);
	DELAY_US(1);
	GPIO_SetState(GPIO_DAC_LDAC, true);
	DELAY_US(1);
}
//-----------------------------

void LL_WriteDAC_ChA(uint16_t Data)
{
	LL_WriteDACx(Data & (~DAC_CHANNEL_B));
}
//-----------------------------

void LL_WriteDAC_ChB(uint16_t Data)
{
	LL_WriteDACx(Data | DAC_CHANNEL_B);
}
//-----------------------------
