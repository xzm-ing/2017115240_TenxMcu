#define __display_c
#include "includeAll.h"

/**************************************************
P_led1��P_led2�ֱ���Ϊ1��0��������ӦLED�Ƶ�������
led1��led2��IOģʽ��ʼ��Ϊ
P1_2(LED2):P1MODL = 0xa8;
P1_4(LED1):P1MODH = 0xaa;
**************************************************/
//ͬʱ��LED1��LED2
void LED1_and_LED2() {
		//��ʼ��Led��,��P1_0��Ϊ0
		F_ledcom_On();
	
		P_led1=1;
		P_led2=1;
}

//��LED1
void LED1_ON() {
		//��ʼ��Led��,��P1_0��Ϊ0
		F_ledcom_On();
	
		P_led1=1;
		P_led2=0;
}

//��LED2
void LED2_ON() {
		//��ʼ��Led��,��P1_0��Ϊ0
		F_ledcom_On();
	
		P_led1=0;
		P_led2=1;
}