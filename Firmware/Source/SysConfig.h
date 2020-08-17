#ifndef __SYSCONFIG_H
#define __SYSCONFIG_H

#include "stdinc.h"

// Flash loader options
#define BOOT_LOADER_VARIABLE			(*((volatile uint32_t *)0x20000000))
#define BOOT_LOADER_REQUEST				0x12345678
#define BOOT_LOADER_MAIN_PR_ADDR		0x08008000
//-----------------------------------------------

// System clock
#define SYSCLK							70000000	// �������� ������� ��������� ���� ����������
#define QUARTZ_FREQUENCY				20000000	// ������� ������
// ----------------------------------------------

// USART
#define USART_BAUDRATE					115200		// �������� USART
#define USART_FIFOlen					32			// ����� FIFO USART
// ----------------------------------------------

// Timers
#define TIMER1_uS                		5			// ������ ������������ ���
#define TIMER3_uS                  		1000		// ������ ������ ����������
// ----------------------------------------------

// CAN
#define CAN_BAUDRATE					1000000		// ������� CAN
// ----------------------------------------------

// DMA
#define DMA_ADC_IG_CHANNEL				DMA1_Channel1	// ����� DMA ��� ��� Ig
#define DMA_ADC_VG_CHANNEL				DMA2_Channel1	// ����� DMA ��� ��� Vg
#define DMA_ADC_ID_CHANNEL				DMA2_Channel5	// ����� DMA ��� ��� Id
#define DMA_ADC_VD_CHANNEL				DMA2_Channel4	// ����� DMA ��� ��� Vd
// ----------------------------------------------

// ADC
#define ADC1_IG_CHANNEL					1			// ���1 ����� ������ ��������� Ig
#define ADC2_VG_CHANNEL					1			// ���2 ����� ������ ��������� Vg
#define ADC3_ID_CHANNEL					1			// ���3 ����� ������ ��������� Id
#define ADC4_VD_CHANNEL					3			// ���4 ����� ������ ��������� Vd
// ----------------------------------------------

#endif // __SYSCONFIG_H
