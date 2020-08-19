// ----------------------------------------
// Global definitions
// ----------------------------------------

#ifndef __GLOBAL_H
#define __GLOBAL_H

#include "SysConfig.h"

// ��������� �����������
#define	SCCI_TIMEOUT_TICKS			1000			// ������� ���������� SCCI (� ��)
#define	BCCIM_TIMEOUT_TICKS			50				// ������� ���������� ������ BCCI (� ��)
#define EP_WRITE_COUNT				0				// ���������� �������� ��� ������
#define EP_COUNT					4				// ���������� �������� ��� ������
#define ENABLE_LOCKING				FALSE			// ������ �������
#define VALUES_x_SIZE				500				// ������ �������� ��������

// ��������� ���������
#define TIME_LED_BLINK				500				// ������ �������� ���������� �� ����� (� ��)
#define TIME_PC_UPDATE				100				// ������ ������ ������� ����� (� ��)
#define TIME_VG_STAB				100				// ����� ������������ Vg (� ���)
#define TIME_PULSE_WIDTH			10000			// ������������ �������� (� ���)
#define TIMEOUT_PC_SHORT			1000			// �������� ������� �� ��������� � �������� �������� (� ��)

// ��������� ���������� ����������
#define ADC_REF_VOLTAGE				3300.0f			// ������� ���������� (� ��)
#define ADC_RESOLUTION				4095
#define DAC_REF_VOLTAGE				5000.0f			// ������� ���������� (� ��)
#define DAC_RESOLUTION				4095
#define ADC_EMA_FACTOR				0.5f			// ����������� ����������������� ����������� ��������

// ��������� DMA
#define VALUES_DMA_SIZE				(TIME_PULSE_WIDTH / TIMER1_uS)

#endif // __GLOBAL_H
