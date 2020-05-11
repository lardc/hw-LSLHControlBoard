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
#define TIMER6_uS                		0.5f		// ������ ������������ ��� � ���
#define TIMER3_uS                  		1000		// ������ ������ ����������
// ----------------------------------------------

// CAN
#define CAN_BAUDRATE					1000000		// ������� CAN
// ----------------------------------------------

// DMA
#define DMA_ADC_Igt_CHANNEL				DMA1_Channel1	// ����� DMA ��� ��� Igt
#define DMA_ADC_Ugt_CHANNEL				DMA2_Channel1	// ����� DMA ��� ��� Ugt
#define DMA_ADC_Itm_CHANNEL				DMA2_Channel5	// ����� DMA ��� ��� Itm
#define DMA_ADC_Utm_CHANNEL				DMA2_Channel4	// ����� DMA ��� ��� Utm
// ----------------------------------------------

// ADC
#define ADC1_VOLTAGE_CHANNEL			1			// ���1 ����� ������ ����������
#define ADC2_CURRENT_CHANNEL			4			// ���2 ����� ������ ����
// ----------------------------------------------

#endif // __SYSCONFIG_H
