#define __keys_c
#include "includeAll.h"
#include "display.h"
#include "buzz.h"

//=============================================================================
void GetKeys() {
		static uint8_t tempKeyValue1 = D_keyNull;
		static uint8_t tempKeyValue2 = D_keyNull;
		static uint8_t tempKeyValue3 = D_keyNull;
		static uint8_t tempKeyValue4 = D_keyNull;
	
		static uint8_t tempKeyx=0;
		
		Delay(5);		//������������߰����ȶ���
		
		//Key1
		if (P_key1 == 0) {
			tempKeyValue1 = D_keyValue1;
			tempKeyx=1;
		}
		else {
			keyValue1 = tempKeyValue1;
			tempKeyValue1 = D_keyNull;
			Keyx = tempKeyx;
			tempKeyx = 0;
		}
		
		//Key2
		if (P_key2 == 0) {
			tempKeyValue2 = D_keyValue1;
			tempKeyx = 2;
		}
		else {
			keyValue2 = tempKeyValue2;
			tempKeyValue2 = D_keyNull;
			Keyx = tempKeyx;
			tempKeyx = 0;
		}
		
		//Key3
		if (P_key3 == 0) {
			tempKeyValue3 = D_keyValue1;
			tempKeyx = 3;
		}
		else {
			keyValue3 = tempKeyValue3;
			tempKeyValue3 = D_keyNull;
			Keyx = tempKeyx;
			tempKeyx = 0;
		}
		
		//Key4
		if (P_key4 == 0) {
			tempKeyValue4 = D_keyValue1;
			tempKeyx = 4;
		}
		else {
			keyValue4 = tempKeyValue4;
			tempKeyValue4 = D_keyNull;
			Keyx = tempKeyx;
			tempKeyx = 0;
		}
}

//����KEY1,ͬʱ����LED1��LED2
void Key1(){
		P1MODH = 0xaa; 
		P1MODL = 0xa8; 
		LED1_and_LED2();
}

//����KEY2,����LED1
void Key2(){
		P1MODH = 0xaa; 
		LED1_ON();
}

//����KEY3,����LED2
void Key3(){
		P1MODL = 0xa8;
		LED2_ON();
}

//����KEY4���򿪷�����
void Key4(){
	while(1){	
			P1MODH = 0xaa; 
			Buzz_ON();
		}
}
