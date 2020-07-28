#ifndef __DEV_OBJ_DIC_H
#define __DEV_OBJ_DIC_H

// �������
#define ACT_ENABLE_POWER				1	// ������� � ��������� ��������
#define ACT_DISABLE_POWER				2	// ���������� �����
#define ACT_FAULT_CLEAR					3	// ������� fault
#define ACT_WARNING_CLEAR				4	// ������� warning

#define ACT_DBG_PULSE_IG_FEEDBACK		10	// ������� ��������� �������� ����� Ig
#define ACT_DBG_PULSE_ID_LOW_RANGE		11	// ������� ��������� ������� ��������� ��������� Id
#define ACT_DBG_PULSE_SYNC_SCPC			12	// ������� ������������� ����� SCPC
#define ACT_DBG_PULSE_IG				13	// ������� ��������� ������ ������� ����������
#define ACT_DBG_PULSE_SYNC_SCOPE		14	// ������� ������������� ������������

#define ACT_START_TEST					100	// ������ �������� ���������
#define ACT_STOP_TEST					101	// ��������� �������� ���������

#define ACT_SAVE_TO_ROM					200	// ���������� ���������������� ������ �� FLASH ����������
#define ACT_RESTORE_FROM_ROM			201	// �������������� ������ �� FLASH
#define ACT_RESET_TO_DEFAULT			202	// ����� DataTable � ��������� �� ���������

#define ACT_BOOT_LOADER_REQUEST			320	// ���������� ���������� � ����� ��������������������
// -----------------------------

// ��������
// ����������� ��������
#define REG_R_SHUNT						0	// ������������� ����� (� ����)
#define REG_I_LOW_RANGE_LIMIT			1	// ������� ������� ��������� ���� (� �)

#define REG_IDL_OFFSET					2	// �������� ������������� Id (������ ��������) (� �����)
#define REG_IDL_K						3	// ����������� ��������� ���������� ��� (� ��) � Id (������ ��������) (� �) �1000
#define REG_IDL_P0						4	// ������� ������ ������������� Id (������ ��������) P0 (� �)
#define REG_IDL_P1						5	// ������� ������ ������������� Id (������ ��������) P1 x1000
#define REG_IDL_P2						6	// ������� ������ ������������� Id (������ ��������) P2 x1e6

#define REG_ID_OFFSET					7	// �������� ������������� Id (� �����)
#define REG_ID_K						8	// ����������� ��������� ���������� ��� (� ��) � Id (� �) �1000
#define REG_ID_P0						9	// ������� ������ ������������� Id P0 (� �)
#define REG_ID_P1						10	// ������� ������ ������������� Id P1 x1000
#define REG_ID_P2						11	// ������� ������ ������������� Id P2 x1e6

#define REG_VD_OFFSET					12	// �������� ������������� Vd (� �����)
#define REG_VD_K						13	// ����������� ��������� ���������� ��� (� ��) � Vd (� ��) �1000
#define REG_VD_P0						14	// ������� ������ ������������� Vd P0 (� ��)
#define REG_VD_P1						15	// ������� ������ ������������� Vd P1 x1000
#define REG_VD_P2						16	// ������� ������ ������������� Vd P2 x1e6

#define REG_IG_OFFSET					17	// �������� ������������� Ig (� �����)
#define REG_IG_K						18	// ����������� ��������� ���������� ��� (� ��) � Ig (� ��) �1000
#define REG_IG_P0						19	// ������� ������ ������������� Ig P0 (� ��)
#define REG_IG_P1						20	// ������� ������ ������������� Ig P1 x1000
#define REG_IG_P2						21	// ������� ������ ������������� Ig P2 x1e6

#define REG_VG_OFFSET					22	// �������� ������������� Vg (� �����)
#define REG_VG_K						23	// ����������� ��������� ���������� ��� (� ��) � Vg (� ��) �1000
#define REG_VG_P0						24	// ������� ������ ������������� Vg P0 (� ��)
#define REG_VG_P1						25	// ������� ������ ������������� Vg P1 x1000
#define REG_VG_P2						26	// ������� ������ ������������� Vg P2 x1e6

// ������������ �������� ������-������
#define REG_CURRENT_SETPOINT			140	// ������� ���� (� �)

// �������� ������ ������
#define REG_DEV_STATE					192	// ������� ���������
#define REG_FAULT_REASON				193	// ������� Fault
#define REG_DISABLE_REASON				194	// ������� Disable
#define REG_WARNING						195	// ������� Warning
#define REG_PROBLEM						196	// ������� Problem
#define REG_OP_RESULT					197	// ������� ���������� ��������

#define REG_QUADRATIC_CORR				254	// Use quadratic correction for block
// -----------------------------

// Endpoints
#define EP16_DATA_ID					1	// ������������ ������ Id
#define EP16_DATA_UD					2	// ������������ ������ Vd

// Fault and disable codes
#define FAULT_NONE						0
#define FAULT_PROTOCOL					0
#define FAULT_PC_UNEXPECTED_STATE		0
#define FAULT_PC_CHARGE_TIMEOUT			0

// Warning
#define WARNING_NONE					0

// User Errors
#define ERR_NONE						0
#define ERR_CONFIGURATION_LOCKED		1	// ���������� �������� �� ������
#define ERR_OPERATION_BLOCKED			2	// �������� �� ����� ���� ��������� � ������� ��������� ����������
#define ERR_DEVICE_NOT_READY			3	// ���������� �� ������ ��� ����� ���������
#define ERR_WRONG_PWD					4	// �������� ���� ������������

#endif // __DEV_OBJ_DIC_H
