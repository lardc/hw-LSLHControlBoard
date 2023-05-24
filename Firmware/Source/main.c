#include "InitConfig.h"
#include "Controller.h"
#include "SysConfig.h"
#include "FirmwareLabel.h"

int main()
{
	__disable_irq();
	SCB->VTOR = (uint32_t)BOOT_LOADER_MAIN_PR_ADDR;
	__enable_irq();
	
	// Настройка аппаратной периферии
	INITCFG_ConfigSystemClock();
	FWLB_LoadBoardLabel();
	INITCFG_ConfigGPIO();
	INITCFG_ConfigCAN();
	INITCFG_ConfigUART();
	INITCFG_ConfigSPI();
	INITCFG_ConfigADC();
	INITCFG_ConfigTimer3();
	INITCFG_ConfigTimer1();
	if(FWLB_GetSelector() == SID_PCB1_2_Manuf)
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
