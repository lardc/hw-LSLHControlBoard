#ifndef __DEV_OBJ_DIC_H
#define __DEV_OBJ_DIC_H

//�������
//
#define ACT_ENABLE_POWER                        1                               //������� � ��������� ��������
#define ACT_DISABLE_POWER                       2                               //������� ������ LSLPC �� ����� ������� �������������
#define ACT_FAULT_CLEAR                         3                               //������� fault
#define ACT_WARNING_CLEAR                       4                               //������� warning
#define ACT_RESET_DEVICE                        5                               //���������� ����������
//-----------


#define ACT_ENABLE_POWER						1		// �������� ������� �����
#define ACT_DISABLE_POWER						2		// ��������� ������� �����
#define ACT_CLR_FAULT							3		// ������� ������
#define ACT_CLR_WARNING							4		// ������� ��������������#define ACT_START_PULSE							100		// ������ �������� ���������


#define ACT_DBG_PULSE_IG_FEEDBACK				10		// ������ ����������������� ���� �� 1���.
#define ACT_DBG_PULSE_ID_LOW_RANGE				11		// ������������ �� 1���.
#define ACT_DBG_PULSE_SYNC_SCPC					12		// ��������� ���� ������� �� 1���.
#define ACT_DBG_PULSE_IG						13		// ������ ������� �� �������� ���������� �� 1���.
#define ACT_DBG_PULSE_SYNC_SCOPE				14		// ��������� ��������� �������� ��������� �� 1���.


#define ACT_START_PULSE							100		// ������ �������� ���������
#define ACT_STOP_TEST							101		// ������� �������� ���������



#define ACT_LSLPC_GET_INFO                      102                             //�������� ���������� � ���������� ����� LSLPC
#define ACT_LSLPC_FIND                          103                             //������� �� ����� ������ LSLPC
//
#define ACT_LSLPC_REG_WRITE                105                             //������� ��� ������ � ������� ����� LSLPC
#define ACT_LSLPC_CALL                          106                             //������� ��� ������ ������������ ������� � ����� LSLPC
#define ACT_LSLPC_REG_READ                      107                             //������� ��� ������ �������� LSLPC
//
#define ACT_LSLPC_SYNC_TEST                     110
#define ACT_OSC_SYNC_TEST                       111
#define ACT_DUT_TEST                            112


#define ACT_SAVE_TO_ROM							200		// ���������� ���������������� ������ �� FLASH ����������
#define ACT_RESTORE_FROM_ROM					201		// �������������� ������ �� FLASH
#define ACT_RESET_TO_DEFAULT					202		// ����� DataTable � ��������� �� ���������

#define ACT_BOOT_LOADER_REQUEST					320		// ���������� ���������� � ����� ��������������������

#define ACT_RESET_FOR_PROGRAMMING               320                             //���������� ���������� � ����� ��������������������


//��������

#define REG_V_BAT1_OFFSET						2		// �������� ������������� ���������� ������� 1 (� �����)
#define REG_V_BAT1_K							3		// ����������� ��������� ���������� ��� (� ��) � ���������� ������� 1 (� �) �1000
#define REG_V_BAT2_OFFSET						4		// �������� ������������� ���������� ������� 2 (� �����)
#define REG_V_BAT2_K							5		// ����������� ��������� ���������� ��� (� ��) � ���������� ������� 1 (� �) �1000
#define REG_VBAT_THRESHOLD						6		// ����� ������ �������������� ������� (� �)
//
#define REG_V_DUT_OFFSET						7		// �������� ������������� ���������� DUT (� �����)
#define REG_V_DUT_K								8		// ����������� ��������� ���������� ��� (� ��) � ���������� DUT (� �) �1000
#define REG_V_DUT_P0							9		// ������� ������ ������������� ���������� DUT P0 (� �������)
#define REG_V_DUT_P1							10		// ������� ������ ������������� ���������� DUT P1 x1000
#define REG_V_DUT_P2							11		// ������� ������ ������������� ���������� DUT P2 x1e6

//
#define REG_VOLT_GAIN                             0                               //���������������� ����������� �� ����������
#define REG_CURR_GAIN								1
// 2 - 3
#define REG_R_SHUNT                             4                              //������������� ����� � ����
#define REG_CURR_GAIN_R0                        5                              //����������� �������� ShuntAmplifier, �������� 0
#define REG_CURR_GAIN_R1                        6                              //����������� �������� ShuntAmplifier, �������� 1
#define REG_CURR_GAIN_R2                        7                              //����������� �������� ShuntAmplifier, �������� 2
#define REG_CURRENT_I_LIM_R0					8
#define REG_CURRENT_I_LIM_R1					9
// 10
#define REG_P2_ISET                      		11                               //��������� 2 �������������� ��������� �������� ������� ����
#define REG_P1_ISET                       		12                               //��������� �������������� ��������� �������� ������� ����
#define REG_P0_ISET                       		13                               //�������� �������������� ��������� �������� ������� ����
//
#define REG_P2_UCAL                            14                              //��������� 2 �������������� ��������� ��������� ����������
#define REG_P1_UCAL                             15                              //��������� �������������� ��������� ��������� ����������
#define REG_P0_UCAL                             16                               //�������� �������������� ��������� ��������� ����������
//
#define REG_P2_ICAL_R0                           17                               //��������� 2 �������������� ��������� ��������� ����, �������� 1
#define REG_P1_ICAL_R0                            18                               //��������� 2 �������������� ��������� ��������� ����, �������� 1
#define REG_P0_ICAL_R0                            19                              //�������� �������������� ��������� ��������� ����, �������� 1
//
#define REG_P2_ICAL_R1                           20                               //��������� 2 �������������� ��������� ��������� ����, �������� 1
#define REG_P1_ICAL_R1                            21                              //��������� �������������� ��������� ��������� ����, �������� 2
#define REG_P0_ICAL_R1                            22                              //�������� �������������� ��������� ��������� ����, �������� 2
//
#define REG_P2_ICAL_R2                           23                               //��������� 2 �������������� ��������� ��������� ����, �������� 1
#define REG_P1_ICAL_R2                            24                              //��������� �������������� ��������� ��������� ����, �������� 3
#define REG_P0_ICAL_R2                            25                              //�������� �������������� ��������� ��������� ����, �������� 3


#define REG_CURRENT_VALUE                       140                             //�������� ����, �
//
#define REG_LSLPC_DATA_REG                      171                             //������� ������, ������� ���� �������� � ������� ������������� ����� LSLPC
#define REG_LSLPC_ADDR_REG                      172                             //������� ������� �������� ����� LSLPC, � ������� ���� �������� ������
#define REG_LSLPC_CALL                          173                             //������� �������, ������� ���� ������� � ����� LSLPC
#define REG_LSLPC_NID                           174                             //������� NID ����� LSLPC
#define REG_NID_LSLPC_CONFIG                    175                             //Nid �����, ������� ����� ���������������� �������� �� ���������
#define REG_NID_LSLPC_INFO                      176                             //Nid ����� SCPC, ���������� � ������� ���������� ��������
//
#define REG_K_SHUNT_AMP                         177                             //���������� �������� �������� SCShuntAmplifier


#define REG_DEV_STATE                           192                             //������� ��������� ��������� SCTU
#define REG_FAULT_REASON                        193                             //������� Fault
#define REG_FAULT_DESABLE                       194                             //������� Desable
#define REG_WARNING                             195                             //������� Warning
#define REG_PROBLEM                             196                             //������� Problem
#define REG_TEST_FINISHED						197
//
#define REG_DUT_U                               198                              //���������� �������� ������� ����������, ��
// 199 - 205
#define REG_DUT_I                               206                              //���������� �������� �������� ����, � (������� �����)
#define REG_TOTAL_LSLPC                         207                             //���������� ������ SCPC � ���������
// 208 - 222
#define REG_FAILED_LSLPC						223								// ����� ���������� ������
#define REG_FAILED_OPERATION					224								// ����� ���������� ��������
#define REG_CURRENT_MAX                         225                             //������������ ��������� �������� �������� ���� ��� ������� ������������ (������� �����)
// 226
#define LSLPC_REG_PULSE_VALUE              227                             //�������� �������� ����, ������������� �����
#define REG_INFO_LSLPC_BAT_VOLTAGE              228                             //���������� �������, ������������� �����
#define LSLPC_REG_DEV_STATE                229                             //���������, ������������� �����
#define REG_INFO_LSLPC_DEV_FAULT                230                             //�������� Fault, ������������� �����
#define REG_INFO_LSLPC_DEV_DISABLE              231                             //�������� Disable, ������������� �����
#define REG_INFO_LSLPC_DEV_WARNING              232                             //�������� Warning, ������������� �����
#define REG_INFO_LSLPC_DEV_PROBLEM              233                             //�������� Problem, ������������� �����



#define LSLPC_ACT_POWER_ENABLE					1
#define LSLPC_ACT_POWER_DISABLE					2

#define LSLPC_ACT_PULSE_CONFIG					100
//
//
#define REG_QUADRATIC_CORR			254	// Use quadratic correction for block

// ENDPOINTS
//
#define EP16_Data_I                		1	                        // ������������ ������ �������� ����
#define EP16_Data_U                		2	                        // ������������ ������ ������� ����������
#define EP16_Dummy3                		3
#define EP16_Dummy4                		4
#define EP16_Dummy5                		5
#define EP16_Sorted_I					6
#define EP16_Sorted_U					7


//Fault
//
#define FAULT_NONE									0
#define FAULT_PROTOCOL								0
#define FAULT_PC_UNEXPECTED_STATE					0
#define FAULT_PC_CHARGE_TIMEOUT						0

#define DF_LSLPC_OPERATION_FAILED                  1                               //���� SCPC �� ��������
#define DF_SECURITY                            2                               //������� ������ ������������
#define DF_DUT_NOT_OPENED                     3                               //������ �� ��������
#define DF_LSLPC_NO_PULSE                         4                               //���� �� ������ �� ����������� ������� �������� ����
//

// Cell fault
#define CF_NONE									0
#define CF_CELL_CALL								1
#define CF_CELL_READ_REGS								2
#define CF_CELL_WRITE_REGS								3
#define CF_CELL_CONFIG								4
#define CF_CELL_POST_PULSE								5


//Warning
//
// WARNING CODES
//
#define WARNING_NONE							0								// No warning
#define WARNING_I_OUT_OF_RANGE                  1                             	//���������� �������� ���� ��� ���������
#define WARNING_U_OUT_OF_RANGE                  2                             	//���������� �������� ���������� ��� ���������
#define WARNING_LSLPC_NO_CELLS                  3                             	//���� ��� ��������� ������ �� ������������ ��� �������
#define WARNING_NID_NOT_FOUND                   4                             	//�������� Nid �� ������ � ������
#define WARNING_CURRENT_TOO_HIGH                  5                             	//�������� Nid �� ������ � ������
//

//User Errors
//
#define ERR_NONE                                0 				// ������ ���
#define ERR_CONFIGURATION_LOCKED                1 				// ���������� �������� �� ������
#define ERR_OPERATION_BLOCKED                   2 				// �������� �� ����� ���� ��������� � ������� ��������� ����������
#define ERR_DEVICE_NOT_READY                    3 				// ���������� �� ������ ��� ����� ���������
#define ERR_WRONG_PWD                           4 				// ������������ ����
//

#endif // __DEV_OBJ_DIC_H
