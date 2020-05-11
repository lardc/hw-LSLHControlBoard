#include "Interrupts.h"
#include "InitConfig.h"
#include "SysConfig.h"

// Functions
//
void CONTROL_Idle();

int main()
{
	__disable_irq();
	SCB->VTOR = (uint32_t)BOOT_LOADER_MAIN_PR_ADDR;
	__enable_irq();

	// ��������� ��������� ������� ������������
	SysClk_Config();

	// ��������� ������
	IO_Config();

	// ��������� CAN
	CAN_Config();

	// ��������� UART
	UART_Config();

	// ��������� SPI
	SPI_Config();

	// ��������� ����
	DAC_Config();

	// ��������� Timer3 ������ ����������
	Timer3_Config();

	// ��������� Timer6 ������������ ��� � ���
	Timer6_Config();

	// ��������� Timer2 ����������, ���������������
	Timer2_Config();

	// ��������� ��������� ���
	ADC_Config();

	// ��������� DMA ��� ��� � ���
	DMA_Config();

	// ��������� ����������� �������
	WatchDog_Config();

	// ������������� ������ �����������
	InitializeController(false);

	// ������� ����
	while (TRUE)
		CONTROL_Idle();

	return 0;
}
