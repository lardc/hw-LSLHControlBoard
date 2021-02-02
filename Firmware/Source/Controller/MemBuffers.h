#ifndef __MEM_BUFFERS_H
#define __MEM_BUFFERS_H

#include "stdinc.h"
#include "Global.h"

// Variables
//
extern Int16U MEMBUF_EP_Vd[VALUES_x_SIZE];
extern Int16U MEMBUF_EP_Id[VALUES_x_SIZE];

extern volatile Int16U MEMBUF_DMA_Vd[VALUES_POWER_DMA_SIZE];
extern volatile Int16U MEMBUF_DMA_Id[VALUES_POWER_DMA_SIZE];
extern volatile Int16U MEMBUF_DMA[VALUES_POWER_DMA_SIZE];

#endif // __MEM_BUFFERS_H
