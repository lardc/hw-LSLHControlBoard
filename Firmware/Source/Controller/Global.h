// ----------------------------------------
// Global definitions
// ----------------------------------------

#ifndef __GLOBAL_H
#define __GLOBAL_H

// ��������� �����������
#define	SCCI_TIMEOUT_TICKS			1000			// ������� ���������� SCCI (� ��)
#define	BCCIM_TIMEOUT_TICKS			50				// ������� ���������� ������ BCCI (� ��)
#define EP_WRITE_COUNT				0				// ���������� �������� ��� ������
#define EP_COUNT					1				// ���������� �������� ��� ������
#define ENABLE_LOCKING				FALSE			// ������ �������
#define VALUES_x_SIZE				500				// ������ �������� ��������

// ��������� ���������
#define TIME_LED_BLINK				500				// ������ �������� ���������� �� ����� (� ��)

// ��������� ������� �����
#define PC_MAX_CELLS				2				// ������������ ���������� �����

// ��������� ���������� ����������
#define ADC_REF_VOLTAGE				3300.0f			// ������� ���������� (� ��)
#define ADC_RESOLUTION				4095
#define DAC_REF_VOLTAGE				5000.0f			// ������� ���������� (� ��)
#define DAC_RESOLUTION				4095

#endif // __GLOBAL_H
