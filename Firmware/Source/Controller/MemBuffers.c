// Header
#include "MemBuffers.h"

// Includes


// Variables
//
Int16U MEMBUF_EP_Vd[VALUES_x_SIZE] = {0};
Int16U MEMBUF_EP_Id[VALUES_x_SIZE] = {0};

volatile uint16_t MEMBUF_Vd[MEMBUF_DMA_SIZE] = {0};
volatile uint16_t MEMBUF_Id[MEMBUF_DMA_SIZE] = {0};
volatile uint32_t MEMBUF_DMA[MEMBUF_DMA_SIZE] = {0};
