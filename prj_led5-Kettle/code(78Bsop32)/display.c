#define __display_c
#include "includeAll.h"
#include "display.h"

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


/**********************************
SMG_COM1�����������
SMG_COM2�����������
�����ܽŷֱ������Ӧλ��led������
**********************************/
//����ܳ�ʼ��
void smg_init() {
		//��ʼ�������ƽţ���ֵΪ0
		SMG_A=0;
		SMG_B=0;
		SMG_C=0;
		SMG_D=0;
		SMG_E=0;
		SMG_F=0;
		SMG_G=0;
		SMG_DG=0;
	
		F_ledcom_Off();
}

//�����ѡ��
void smg_choice(uint8_t smgx) { 
    //ѡ���������
		if(smgx == SMG_L)         
    {
        SMG_COM1 = 0;
        SMG_COM2 = 1;
    }
		//ѡ���������
    if(smgx == SMG_R)
    {
        SMG_COM1 = 1;
        SMG_COM2 = 0;
    }
}

//ѡ������ܲ���ʾ����0-9
void smg_display_num(uint8_t smgx,int num) {
		//ѡ���������
		if(smgx == SMG_L)         
    {
				smg_choice(1);
    }
		//ѡ���������
    if(smgx == SMG_R)
    {
				smg_choice(2);
    }
		
		switch(num)
		{
			case 0:SMG_A = 1;
						 SMG_B = 1;
						 SMG_C = 1;
						 SMG_D = 1;
						 SMG_E = 1;
						 SMG_F = 1;
						 SMG_G = 0;
						 SMG_DG = 1;
						 break;
			
			case 1:SMG_A = 0;
						 SMG_B = 1;
						 SMG_C = 1;
						 SMG_D = 0;
						 SMG_E = 0;
						 SMG_F = 0;
						 SMG_G = 0;
						 SMG_DG = 1;
						 break;
			
			case 2:SMG_A = 1;
						 SMG_B = 1;
						 SMG_C = 0;
						 SMG_D = 1;
						 SMG_E = 1;
						 SMG_F = 0;
						 SMG_G = 1;
						 SMG_DG = 1;
						 break;

			case 3:SMG_A = 1;
						 SMG_B = 1;
						 SMG_C = 1;
						 SMG_D = 1;
						 SMG_E = 0;
						 SMG_F = 0;
						 SMG_G = 1;
						 SMG_DG = 1;
						 break;

			case 4:SMG_A = 0;
						 SMG_B = 1;
						 SMG_C = 1;
						 SMG_D = 0;
						 SMG_E = 0;
						 SMG_F = 1;
						 SMG_G = 1;
						 SMG_DG = 1;
						 break;
			case 5:SMG_A = 1;
						 SMG_B = 0;
						 SMG_C = 1;
						 SMG_D = 1;
						 SMG_E = 0;
						 SMG_F = 1;
						 SMG_G = 1;
						 SMG_DG = 1;
						 break;

			case 6:SMG_A = 1;
						 SMG_B = 0;
						 SMG_C = 1;
						 SMG_D = 1;
						 SMG_E = 1;
						 SMG_F = 1;
						 SMG_G = 1;
						 SMG_DG = 1;
						 break;
						 
			case 7:SMG_A = 1;
						 SMG_B = 1;
						 SMG_C = 1;
						 SMG_D = 0;
						 SMG_E = 0;
						 SMG_F = 0;
						 SMG_G = 0;
						 SMG_DG = 1;
						 break;
			
			case 8:SMG_A = 1;
						 SMG_B = 1;
						 SMG_C = 1;
						 SMG_D = 1;
						 SMG_E = 1;
						 SMG_F = 1;
						 SMG_G = 1;
						 SMG_DG = 1;
						 break;
				
			case 9:SMG_A = 1;
						 SMG_B = 1;
						 SMG_C = 1;
						 SMG_D = 1;
						 SMG_E = 0;
						 SMG_F = 1;
						 SMG_G = 1;
						 SMG_DG = 1;
						 break;
		}
}


//�������ʾon(��)��of(��)
void smg_display_num(uint8_t On_or_Of) {
		if(On_or_Of == SMG_ON){
				smg_choice(1);
				SMG_A = 1;
				SMG_B = 1;
				SMG_C = 1;
				SMG_D = 1;
				SMG_E = 1;
				SMG_F = 1;
				SMG_G = 0;
				SMG_DG = 0;
	
				smg_choice(2);
				SMG_A = 1;
			  SMG_B = 1;
				SMG_C = 1;
				SMG_D = 0;
				SMG_E = 1;
				SMG_F = 1;
				SMG_G = 0;
				SMG_DG = 0;
		}
		else if(On_or_Of == SMG_OFF){
				smg_choice(1);
				SMG_A = 1;
				SMG_B = 1;
				SMG_C = 1;
				SMG_D = 1;
				SMG_E = 1;
				SMG_F = 1;
				SMG_G = 0;
				SMG_DG = 0;
	
				smg_choice(2);
				SMG_A = 1;
			  SMG_B = 0;
				SMG_C = 0;
				SMG_D = 0;
				SMG_E = 1;
				SMG_F = 1;
				SMG_G = 1;
				SMG_DG = 0;
		}
		else
		{
				smg_choice(1);
				SMG_A = 1;
			  SMG_B = 1;
				SMG_C = 1;
				SMG_D = 0;
				SMG_E = 1;
				SMG_F = 1;
				SMG_G = 0;
				SMG_DG = 0;
	
				smg_choice(2);
				SMG_A = 1;
				SMG_B = 1;
				SMG_C = 1;
				SMG_D = 1;
				SMG_E = 1;
				SMG_F = 1;
				SMG_G = 0;
				SMG_DG = 0;
		}
}
