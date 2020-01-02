#ifndef __display_h
#define __display_h
// Hal: exp: #define P_ledcom P10 -----------------
#define P_ledcom P1_0
// Const: exp: #define D_data 1 ----------------
#define D_ledcom_On 1  //高电位亮
#define D_ledcom_Off 0 //低点位灭
// Globle Var -----------------------------------------
#ifdef __display_c

#else

#endif

// Action Macro: exp: #define F_getData() ------
#define F_ledcom_On() P_ledcom = D_ledcom_On         
#define F_ledcom_Off() P_ledcom = D_ledcom_Off      //ledcom初始值
#define F_ledcom_Neg() P_ledcom = ~P_ledcom
// Function ------------------------------------

#endif