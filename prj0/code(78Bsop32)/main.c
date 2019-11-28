#define __main_c
#include "includeAll.h"
//=============================================================================
void main() {
  SysInit();

  while (1) {
    F_ledOn();
    Delay(1000);
	  F_ledOff();
	  Delay(1000);
  }
}
//=============================================================================
void Delay(uint16_t time) {
  uint16_t i, j;
  for (i = 0; i < time; i++) {
    for (j = 0; j < 1000; j++) {
      /* code */
      // F_turnOnWDT();
    }
  }
}
