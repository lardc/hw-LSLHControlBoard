﻿// ----------------------------------------
// Parameters of BCCI interface
// ----------------------------------------

#ifndef __BCCI_PARAMS_H
#define __BCCI_PARAMS_H

#include "xCCIParams.h"


// Маска поля функции
//
#define CAN_FUNC_MASK				0x000003FF
#define CAN_NID						9				// Node ID устройства

// Конфигурация Slave
//
#define CAN_SLAVE_NID_MASK			0x0003FC00		// Маска Slave node ID
#define CAN_SLAVE_NID_MPY			10				// Смещение адреса Slave

// Конфигурация Master
//
#define CAN_MASTER_NID_MASK			0x03FC0000		// Маска Master node ID
#define CAN_MASTER_NID_MPY			18				// Смещение адреса Master


#endif // __BCCI_PARAMS_H
