#define __main_c
#include "includeAll.h"

//===============================main主函数====================================
void main() {

  SysInit();				//芯片系统初始化
  VarsInit();
  F_turnOnWDT();    //使能看门狗

  while (1) {
		
		
    F_clearWDT();	  //喂狗
		F_ledcom_Off();
    //实现任务
    //TimeProcess();
    //TaskSetting();
  }
}



//===========================定义时间处理函数==================================
//控制时钟
void TimeProcess() {

static uint8_t timer5ms = 0;

  if (b1ms) {
    // 1ms 执行一次
    b1ms = 0;
    timer5ms++;
  }
  if (timer5ms >= 5) {
		P1MODL = 0xa8;
    	GetKeys();
  }
}


//=============================定义任务建立函数==================================
//===================任务：实现单端口复用进行按键控制led亮灭==================//
void TaskSetting() {
	
	if (ledcom_State){
		//LED状态转换
		if(D_keyValue1 == keyValue){
			ledcom_State = ~ledcom_State;		
		}
		P1MODL = 0xaa;
	}
	else {
			if(D_keyValue1 == keyValue){
				ledcom_State = ~ledcom_State;	
			}
	}
}


//=================================延时函数====================================
void Delay(uint16_t time) {
     uint16_t i, j;
     for (i = 0; i < time; i++) {
           for (j = 0; j < 1000; j++) {
              /* code */
             // F_turnOnWDT();
           }
     }
}
//=============================================================================