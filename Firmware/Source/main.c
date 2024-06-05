#include "InitConfig.h"
#include "Controller.h"
#include "SysConfig.h"
#include "DataTable.h"
#include "FirmwareLabel.h"

int main()
{
	__disable_irq();
	SCB->VTOR = (uint32_t)BOOT_LOADER_MAIN_PR_ADDR;
	__enable_irq();
	
	// Настройка тактирования
	INITCFG_ConfigSystemClock();

	// Настройка аппаратной периферии
	FWLB_LoadBoardLabel();
	INITCFG_DataTableEEPROM();
	INITCFG_ConfigGPIO();
	INITCFG_ConfigCAN();
	INITCFG_ConfigUART();
	INITCFG_ConfigSPI();
	INITCFG_ConfigADC();
	INITCFG_ConfigTimer3();
	INITCFG_ConfigTimer1();
	if(DataTable[REG_CFG_SCHEAD_PCB] == 0)
	{
		INITCFG_ConfigTimer2();
		INITCFG_ConfigTimer6();
	}
	INITCFG_ConfigDMA();
	INITCFG_ConfigWatchDog();
	
	// Инициализация логики контроллера
	CONTROL_Init();
	
	while(true)
		CONTROL_Idle();
	
	return 0;
}
//------------------------------------
