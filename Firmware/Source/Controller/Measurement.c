﻿// Header
#include "Measurement.h"

// Include
#include "DataTable.h"
#include "Board.h"
#include "Global.h"
#include "DataTable.h"
#include "DeviceObjectDictionary.h"
#include "stdlib.h"

// Forward functions
void MEASURE_ConvertADCtoValx(uint16_t *InputArray, uint16_t DataLength, uint16_t RegisterOffset,
		uint16_t RegisterK, uint16_t RegisterP0, uint16_t RegisterP1, uint16_t RegisterP2);
int MEASURE_SortCondition(const void *A, const void *B);

// Functions
//
void MEASURE_ConvertADCtoValx(uint16_t *InputArray, uint16_t DataLength, uint16_t RegisterOffset,
		uint16_t RegisterK, uint16_t RegisterP0, uint16_t RegisterP1, uint16_t RegisterP2)
{
	float Offset = (float)((int16_t)DataTable[RegisterOffset]);
	float K = (float)DataTable[RegisterK] / 1000;
	
	float P0 = (float)((int16_t)DataTable[RegisterP0]);
	float P1 = (float)DataTable[RegisterP1] / 1000;
	float P2 = (float)((int16_t)DataTable[RegisterP2]) / 1e6;
	
	for(uint16_t i = 0; i < DataLength; i++)
	{
		float tmp = ((float)InputArray[i] + Offset) * ADC_REF_VOLTAGE / ADC_RESOLUTION * K;
		tmp = tmp * tmp * P2 + tmp * P1 + P0;
		tmp = (tmp > 0) ? tmp : 0;

		InputArray[i] = (uint16_t)tmp;
	}
}
//------------------------------------

void MEASURE_ConvertVd(uint16_t *InputArray, uint16_t DataLength)
{
	MEASURE_ConvertADCtoValx(InputArray, DataLength, REG_VD_OFFSET, REG_VD_K, REG_VD_P0, REG_VD_P1,
			REG_VD_P2);
}
//------------------------------------

void MEASURE_ConvertId(uint16_t *InputArray, uint16_t DataLength)
{
	MEASURE_ConvertADCtoValx(InputArray, DataLength, REG_ID_OFFSET, REG_ID_K, REG_ID_P0, REG_ID_P1,
			REG_ID_P2);
}
//------------------------------------

void MEASURE_ConvertIdLow(uint16_t *InputArray, uint16_t DataLength)
{
	MEASURE_ConvertADCtoValx(InputArray, DataLength, REG_IDL_OFFSET, REG_IDL_K, REG_IDL_P0, REG_IDL_P1,
			REG_IDL_P2);
}
//------------------------------------

void MEASURE_ConvertVg(uint16_t *InputArray, uint16_t DataLength)
{
	MEASURE_ConvertADCtoValx(InputArray, DataLength, REG_VG_OFFSET, REG_VG_K, REG_VG_P0, REG_VG_P1,
			REG_VG_P2);
}
//------------------------------------

void MEASURE_ConvertIg(uint16_t *InputArray, uint16_t DataLength)
{
	MEASURE_ConvertADCtoValx(InputArray, DataLength, REG_IG_OFFSET, REG_IG_K, REG_IG_P0, REG_IG_P1,
			REG_IG_P2);
}
//------------------------------------

Int16U MEASURE_InstantVd(Int16U *InputArray)
{
	qsort(InputArray, VALUES_VD_DMA_SIZE, sizeof(*InputArray), MEASURE_SortCondition);

	return 0;
}
//------------------------------------

Int16U MEASURE_InstantId(Int16U *InputArray)
{
	qsort(InputArray, VALUES_ID_DMA_SIZE, sizeof(*InputArray), MEASURE_SortCondition);

	return 0;
}
//------------------------------------

int MEASURE_SortCondition(const void *A, const void *B)
{
	return (*(int *)A) - (*(int *)B);
}
//-----------------------------------------





void MEASURE_ArrayEMA(uint16_t *InputArray, uint16_t DataLength)
{
	for(uint16_t i = 1; i < DataLength; ++i)
		InputArray[i] = (uint16_t)(InputArray[i] * ADC_EMA_FACTOR + (1 - ADC_EMA_FACTOR) * InputArray[i - 1]);
}
//------------------------------------
