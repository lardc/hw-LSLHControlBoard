﻿// Header
#include "Constraints.h"

// Constants
const TableItemConstraint NVConstraint[DATA_TABLE_NV_SIZE] = {
		{R_SHUNT_MIN, R_SHUNT_MAX, R_SHUNT_DEF},								// 0
		{LOW_RANGE_I_LIM_MIN, LOW_RANGE_I_LIM_MAX, LOW_RANGE_I_LIM_MIN},		// 1
		{0, INT16U_MAX, IDL_OFFSET_DEF},										// 2
		{GAIN_COEFFICIENT_MIN, GAIN_COEFFICIENT_MAX, IDL_K_DEF},				// 3
		{0, INT16U_MAX, 0},														// 4
		{GAIN_COEFFICIENT_MIN, GAIN_COEFFICIENT_MAX, GAIN_COEFFICIENT_DEF},		// 5
		{0, INT16U_MAX, 0},														// 6
		{0, INT16U_MAX, ID_OFFSET_DEF},											// 7
		{GAIN_COEFFICIENT_MIN, GAIN_COEFFICIENT_MAX, ID_K_DEF},					// 8
		{0, INT16U_MAX, 0},														// 9
		{GAIN_COEFFICIENT_MIN, GAIN_COEFFICIENT_MAX, GAIN_COEFFICIENT_DEF},		// 10
		{0, INT16U_MAX, 0},														// 11
		{0, INT16U_MAX, VD_OFFSET_DEF},											// 12
		{GAIN_COEFFICIENT_MIN, GAIN_COEFFICIENT_MAX, VD_K_DEF},					// 13
		{0, INT16U_MAX, 0},														// 14
		{GAIN_COEFFICIENT_MIN, GAIN_COEFFICIENT_MAX, GAIN_COEFFICIENT_DEF},		// 15
		{0, INT16U_MAX, 0},														// 16
		{0, 0, 0},																// 17
		{0, 0, 0},																// 18
		{0, 0, 0},																// 19
		{0, 0, 0},																// 20
		{0, 0, 0},																// 21
		{0, 0, 0},																// 22
		{0, 0, 0},																// 23
		{0, 0, 0},																// 24
		{0, 0, 0},																// 25
		{0, 0, 0},																// 26
		{0, 0, 0},																// 27
		{0, 0, 0},																// 28
		{0, 0, 0},																// 29
		{0, 0, 0},																// 30
		{LSLPC_MAX_I_MIN, LSLPC_MAX_I_MAX, LSLPC_MAX_I_DEF},					// 31
		{LSLPC_START_NID_MIN, LSLPC_START_NID_MAX, LSLPC_START_NID_DEF},		// 32
		{0, INT16U_MAX, LONG_TIMEOUT_DEF},										// 33
		{0, 0, 0},																// 34
		{0, 0, 0},																// 35
		{0, 0, 0},																// 36
		{0, 0, 0},																// 37
		{0, 0, 0},																// 38
		{0, 0, 0},																// 39
		{CURRENT_OVERSHOOT_MIN, CURRENT_OVERSHOOT_MAX, CURRENT_OVERSHOOT_DEF},	// 40
		{0, INT16U_MAX, 0},														// 41
		{GAIN_COEFFICIENT_MIN, GAIN_COEFFICIENT_MAX, GAIN_COEFFICIENT_DEF},		// 42
		{0, INT16U_MAX, 0},														// 43
		{0, 0, 0},																// 44
		{0, 0, 0},																// 45
		{0, 0, 0},																// 46
		{0, 0, 0},																// 47
		{0, 0, 0},																// 48
		{0, 0, 0},																// 49
		{0, 0, 0},																// 50
		{0, 0, 0},																// 51
		{0, 0, 0},																// 52
		{0, 0, 0},																// 53
		{0, 0, 0},																// 54
		{0, 0, 0},																// 55
		{0, 0, 0},																// 56
		{0, 0, 0},																// 57
		{0, 0, 0},																// 58
		{0, 0, 0},																// 59
		{0, 0, 0},																// 60
		{0, 0, 0},																// 61
		{0, 0, 0},																// 62
		{0, 0, 0},																// 63
		{0, 0, 0},																// 64
		{0, 0, 0},																// 65
		{0, 0, 0},																// 66
		{0, 0, 0}, 																// 67
		{0, 0, 0},																// 68
		{0, 0, 0},																// 69
		{0, 0, 0},																// 70
		{0, 0, 0},																// 71
		{0, 0, 0},																// 72
		{0, 0, 0},																// 73
		{0, 0, 0},																// 74
		{0, 0, 0},																// 75
		{0, 0, 0},																// 76
		{0, 0, 0},																// 77
		{0, 0, 0},																// 78
		{0, 0, 0},																// 79
		{0, 0, 0},																// 80
		{0, 0, 0},																// 81
		{0, 0, 0},																// 82
		{0, 0, 0},																// 83
		{0, 0, 0},																// 84
		{0, 0, 0},																// 85
		{0, 0, 0},																// 86
		{0, 0, 0},																// 87
		{0, 0, 0},																// 88
		{0, 0, 0},																// 89
		{0, 0, 0},																// 90
		{0, 0, 0},																// 91
		{0, 0, 0},																// 92
		{0, 0, 0},																// 93
		{0, 0, 0},																// 94
		{0, 0, 0},																// 95
		{0, 0, 0},																// 96
		{0, 0, 0},																// 97
		{0, 0, 0},																// 98
		{0, 0, 0},																// 99
		{0, 0, 0},																// 100
		{0, 0, 0},																// 101
		{0, 0, 0},																// 102
		{0, 0, 0},																// 103
		{0, 0, 0},																// 104
		{0, 0, 0},																// 105
		{0, 0, 0},																// 106
		{0, 0, 0},																// 107
		{0, 0, 0},																// 108
		{0, 0, 0},																// 109
		{0, 0, 0},																// 110
		{0, 0, 0},																// 111
		{0, 0, 0},																// 112
		{0, 0, 0},																// 113
		{0, 0, 0},																// 114
		{0, 0, 0},																// 115
		{0, 0, 0},																// 116
		{0, 0, 0},																// 117
		{0, 0, 0},																// 118
		{0, 0, 0},																// 119
		{0, 0, 0},																// 120
		{0, 0, 0},																// 121
		{0, 0, 0},																// 122
		{0, 0, 0},																// 123
		{0, 0, 0},																// 124
		{0, 0, 0},																// 125
		{0, 0, 0},																// 126
		{0, 0, 0}																// 127
};

const TableItemConstraint VConstraint[DATA_TABLE_WP_START - DATA_TABLE_WR_START] = {
		{0, 0, 0},																// 128
		{0, 0, 0},																// 129
		{0, 0, 0},																// 130
		{0, 0, 0},																// 131
		{0, 0, 0},																// 132
		{0, 0, 0},																// 133
		{0, 0, 0},																// 134
		{0, 0, 0},																// 135
		{0, 0, 0},																// 136
		{0, 0, 0},																// 137
		{0, 0, 0},																// 138
		{0, 0, 0},																// 139
		{0, LSL_CURRENT_MAX, 0},												// 140
		{0, 0, 0},																// 141
		{0, 0, 0},																// 142
		{0, 0, 0},																// 143
		{0, 0, 0},																// 144
		{0, 0, 0},																// 145
		{0, 0, 0},																// 146
		{0, 0, 0},																// 147
		{0, 0, 0},																// 148
		{0, 0, 0},																// 149
		{GATE_PULSE_MIN, GATE_PULSE_MAX, GATE_PULSE_DEF},						// 150
		{GATE_V_MIN, GATE_V_MAX, GATE_V_DEF},									// 151
		{GATE_I_MIN, GATE_I_MAX, GATE_I_DEF},									// 152
		{GATE_PULSE_DELAY_MIN, GATE_PULSE_DELAY_MAX, GATE_PULSE_DELAY_DEF},		// 153
		{NO, YES, NO},															// 154
		{0, 0, 0},																// 155
		{0, 0, 0},																// 156
		{0, 0, 0},																// 157
		{0, 0, 0},																// 158
		{0, 0, 0},																// 159
		{0, INT16U_MAX, 0},														// 160
		{0, 0, 0},																// 161
		{0, 0, 0},																// 162
		{0, 0, 0},																// 163
		{0, 0, 0},																// 164
		{0, 0, 0},																// 165
		{0, 0, 0},																// 166
		{0, 0, 0},																// 167
		{0, 0, 0},																// 168
		{0, 0, 0},																// 169
		{0, 0, 0},																// 170
		{0, 0, 0},																// 171
		{0, 0, 0},																// 172
		{0, 0, 0},																// 173
		{0, 0, 0},																// 174
		{0, 0, 0},																// 175
		{0, 0, 0},																// 176
		{0, 0, 0},																// 177
		{0, 0, 0},																// 178
		{0, 0, 0},																// 179
		{0, 0, 0},																// 180
		{0, 0, 0},																// 181
		{0, 0, 0},																// 182
		{0, 0, 0},																// 183
		{0, 0, 0},																// 184
		{0, 0, 0},																// 185
		{0, 0, 0},																// 186
		{0, 0, 0},																// 187
		{0, 0, 0},																// 188
		{0, 0, 0},																// 189
		{0, 0, 0},																// 190
		{0, 0, 0}																// 191
};
