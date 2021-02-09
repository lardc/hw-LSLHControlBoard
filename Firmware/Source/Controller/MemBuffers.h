#ifndef __MEM_BUFFERS_H
#define __MEM_BUFFERS_H

#include "stdinc.h"
#include "Global.h"

// Variables
//
extern Int16U MEMBUF_EP_Vd[VALUES_x_SIZE];
extern Int16U MEMBUF_EP_Id[VALUES_x_SIZE];

extern volatile uint16_t MEMBUF_Vd[MEMBUF_DMA_SIZE];
extern volatile uint16_t MEMBUF_Id[MEMBUF_DMA_SIZE];
extern volatile uint32_t MEMBUF_DMA[MEMBUF_DMA_SIZE];

#endif // __MEM_BUFFERS_H
