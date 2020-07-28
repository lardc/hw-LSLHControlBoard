// -----------------------------------------
// Global definitions
// ----------------------------------------

#ifndef __GLOBAL_H
#define __GLOBAL_H

// Include
#include "stdinc.h"
#include "SysConfig.h"
#include "Logic.h"

// Definitions
// 
// Global miscellaneous parameters
#define	SCCI_TIMEOUT_TICKS				1000						// (� ��)
// Password to unlock non-volatile area for write
#define ENABLE_LOCKING					FALSE
// -----------------------------------------------
#define EP_WRITE_COUNT					0							// ���������� �������� ��� ������
#define EP_COUNT						7							// ���������� �������� ��� ������
#define VALUES_x_SIZE					1000						// ������ �������� ��������
#define ENABLE_LOCKING					FALSE
// -----------------------------------------------



#define PC_ANS_TIMEOUT                       5                              //����������� ����� �������� ������� ������ �� LSLPC, ��
#define PC_START_ADDR                              150                             //����� ������� ����� LSLPC
#define PC_MAX_CELLS                        2                               //����������� �������� ����� ������ LSLPC

#define PC_POWER_ENABLE_PAUSE				200
#define PC_CONFIG_PAUSE						20
#define PC_CHARGE_TIMEOUT				60000
#define PC_MAX_CURRENT                       6500                           //������������ �������� ���� ��� ����� LSLPC


// ��������� ���������
#define TIME_LED_BLINK					500							// ������ �������� ���������� �� ����� (� ��)
#define	TIME_Prepair1					10							// ����� ��������������� ���������� � ��������� ���������� (� ��)
#define TIME_Prepair2					200
#define TIME_SET_LSLPC_TIME				500

// -----------------------------------------------

// ��������� ������������ ��������� ��������
#define PI_VALUE						3.1416f						// �������� ����� ��
#define DAC_MAIN_PULSE_STOP				20.0f						// ����� ����� ��������� �������� ��� ��������� 0 �� ������� (� ���)
#define DAC_TIME_STEP					TIMER6_uS					// �������� ������� ��� (� ���)
#define MEASURE_AVG						10							// ���������� ������� ��� ���������� �����������
#define LOAD_R_STDEV					1							// ������������������ ���������� ������������� ��� ���������
#define ANALOG_OPTO_UNLOCK				500							// �������� ���������� ��������, ����������� �� �� (� ���)
//
#define LSL_CURRENT_MIN                         150                             //����������� �������� ����, A
#define LSL_CURRENT_MAX                         3000                           //������������ �������� ����, �
#define LSLPC_CURRENT_MAX                       6500                           //������������ �������� ���� ��� ����� LSLPC
// -----------------------------------------------

// ��������� ������ �������
#define	BAT_CHARGE_TIMEOUT				60000						// ����� �������� ������ ����� ������ ������� (� ��)
#define	BAT_CHARGE_SHORT_TIMEOUT		5000						// ����� �������� ������ ����� ���������� (� ��)
#define BAT1_ADC1_CH					3							// ����� ������ ��� ������� 1
#define BAT2_ADC1_CH					4							// ����� ������ ��� ������� 2
#define BAT_VOLTAGE_DELTA				5.0f						// ���������� ����������� ���������� (� �)
// -----------------------------------------------

// ��������� ���������
#define ADC_REF_VOLTAGE					3300.0f			// ������� ���������� (� ��)
#define ADC_RESOLUTION					4095

// ��������� ���
#define DAC_REF_VOLTAGE					5000.0f			// ������� ���������� (� ��)
#define DAC_RESOLUTION					4095
// -----------------------------------------------

#endif //  __GLOBAL_H
