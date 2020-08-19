#ifndef __DEV_OBJ_DIC_H
#define __DEV_OBJ_DIC_H

// �������
#define ACT_ENABLE_POWER				1	// ������� � ��������� ��������
#define ACT_DISABLE_POWER				2	// ���������� �����
#define ACT_FAULT_CLEAR					3	// ������� fault
#define ACT_WARNING_CLEAR				4	// ������� warning

#define ACT_DBG_IG_FEEDBACK_ON			10	// ��������� �������� ����� Ig
#define ACT_DBG_IG_FEEDBACK_OFF			11	// ���������� �������� ����� Ig
#define ACT_DBG_PULSE_ID_LOW_RANGE		12	// ������� ��������� ������� ��������� ��������� Id
#define ACT_DBG_PULSE_SYNC_SCPC			13	// ������� ������������� ����� SCPC
#define ACT_DBG_PULSE_IG				14	// ������� ��������� ������ ������� ����������
#define ACT_DBG_PULSE_SYNC_SCOPE		15	// ������� ������������� ������������
#define ACT_DBG_SET_GATE_VG				16	// ������� ���������� � ���� ����������
#define ACT_DBG_SET_GATE_IG				17	// ������� ���� � ���� ����������

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

#define REG_PC_MAX_COUNT				30	// ������������ ���������� ������������ ������� �����
#define REG_PC_MAX_CURRENT				31	// ������������ ��� � ����� ������� ������ (� �)
#define REG_PC_START_NID				32	// ��������� �������� NodeID ��� ������ ������� ������
#define REG_PC_LONG_TIMEOUT				33	// ������� ������� �� ��������� � �������� (� ��)

#define REG_CURRENT_OVERSHOOT			40	// ����������������� ��������� ���� (� %)
#define REG_ISET_P0						41	// ������� ������ ������������� ������� ������� ���� P0 (� �)
#define REG_ISET_P1						42	// ������� ������ ������������� ������� ������� ���� P1 �1000
#define REG_ISET_P2						43	// ������� ������ ������������� ������� ������� ���� P2 �1�6

// ������������ �������� ������-������
#define REG_CURRENT_SETPOINT			140	// ������� ���� (� �)

#define REG_GATE_PULSE_TIME				150	// ������������ �������� ���������� (� ���)
#define REG_VG_VALUE					151	// ���������� ���� ���������� (� ��)
#define REG_IG_VALUE					152	// ��� ���� ���������� (� ��)
#define REG_GATE_PULSE_DELAY			153	// �������� ������������ �������� (� ���)

// �������� ������ ������
#define REG_DEV_STATE					192	// ������� ���������
#define REG_FAULT_REASON				193	// ������� Fault
#define REG_DISABLE_REASON				194	// ������� Disable
#define REG_WARNING						195	// ������� Warning
#define REG_PROBLEM						196	// ������� Problem
#define REG_OP_RESULT					197	// ������� ���������� ��������

#define REG_DUT_VOLTAGE					198	// ���������� �������� ������� ���������� (� ��)
#define REG_DUT_CURRENT					206	// ���������� �������� ������� ���� (� �)

#define REG_DEV_SUB_STATE				209	// ������� ���������������� ���������
#define REG_BHL_ERROR_CODE				210	// ������ ���������� ��: ��� ������
#define REG_BHL_DEVICE					211	// ������ ���������� ��: NID ����������
#define REG_BHL_FUNCTION				212	// ������ ���������� ��: ��� �������
#define REG_BHL_EXT_DATA				213	// ������ ���������� ��: ����������� ����������

#define REG_TOTAL_LSLPC					207	// ������������ ���������� ������� �����
#define REG_CURRENT_MAX					225	// ������������ ���, ���������� � ��������� (� �)

#define REG_QUADRATIC_CORR				254	// Use quadratic correction for block
// -----------------------------

// ������� LSLPC
#define ACT_LSLPC_ENABLE_POWER			1	// ��������� �����
#define ACT_LSLPC_DISABLE_POWER			2	// ���������� �����
#define ACT_LSLPC_FAULT_CLEAR			3	// ������� fault
#define ACT_LSLPC_WARNING_CLEAR			4	// ������� warning
//
#define ACT_LSLPC_PULSE_CONFIG			100	// ������� �� ������������ �������� ����
// -----------------------------

// �������� LSLPC
#define REG_LSLPC_PULSE_VALUE			64	// �������� ��������� �������� ���� (� �)

#define REG_LSLPC_DEV_STATE				96	// ��������� �����
#define REG_LSLPC_FAULT_REASON			97
#define REG_LSLPC_DISABLE_REASON		98
#define REG_LSLPC_WARNING				99
#define REG_LSLPC_PROBLEM				100
// -----------------------------

// Endpoints
#define EP16_DATA_ID					1	// ������������ ������ Id
#define EP16_DATA_VD					2	// ������������ ������ Vd
#define EP16_DATA_IG					3	// ������������ ������ Ig
#define EP16_DATA_VG					4	// ������������ ������ Vg

// Operation results
#define OPRESULT_NONE					0	// No information or not finished
#define OPRESULT_OK						1	// Operation was successful
#define OPRESULT_FAIL					2	// Operation failed

// Fault and disable codes
#define DF_NONE							0
#define DF_INTERFACE					1
#define DF_PC_UNEXPECTED_STATE			2
#define DF_PC_STATE_TIMEOUT				3
#define DF_PC_CURRENT_CONFIG			4

// Warning
#define WARNING_NONE					0

// Problem
#define PROBLEM_NONE					0

// User Errors
#define ERR_NONE						0
#define ERR_CONFIGURATION_LOCKED		1	// ���������� �������� �� ������
#define ERR_OPERATION_BLOCKED			2	// �������� �� ����� ���� ��������� � ������� ��������� ����������
#define ERR_DEVICE_NOT_READY			3	// ���������� �� ������ ��� ����� ���������
#define ERR_WRONG_PWD					4	// �������� ���� ������������

#endif // __DEV_OBJ_DIC_H
