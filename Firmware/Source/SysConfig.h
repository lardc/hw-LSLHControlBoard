#ifndef __SYSCONFIG_H
#define __SYSCONFIG_H

#include "stdinc.h"

// Flash loader options
#define BOOT_LOADER_VARIABLE			(*((volatile uint32_t *)0x20000000))
#define BOOT_LOADER_REQUEST				0x12345678
#define BOOT_LOADER_MAIN_PR_ADDR		0x08008000
//-----------------------------------------------

// System clock
#define SYSCLK							70000000	// Тактовая частота системной шины процессора
#define QUARTZ_FREQUENCY				20000000	// Частота кварца
// ----------------------------------------------

// USART
#define USART_BAUDRATE					115200		// Скорость USART
#define USART_FIFOlen					32			// Длина FIFO USART
// ----------------------------------------------

// Timers
#define TIMER2_uS                		0.5f		// Таймер тактирования АЦП 1,2
#define TIMER1_uS                		5			// Таймер тактирования АЦП 3,4
#define TIMER3_uS                  		1000		// Таймер общего назначения
// ----------------------------------------------

// CAN
#define CAN_BAUDRATE					1000000		// Битрейт CAN
// ----------------------------------------------

// DMA
#define DMA_ADC							DMA1_Channel1	// Канал DMA для АЦП
// ----------------------------------------------

// ADC
#define ADC1_ID_CHANNEL					4			// АЦП1_4 номер канала измерения Id
#define ADC1_VD_CHANNEL					3			// АЦП1_3 номер канала измерения Vd
// ----------------------------------------------

#endif // __SYSCONFIG_H
