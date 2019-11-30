#define __keys_c
#include "includeAll.h"
//=============================================================================
static uint8_t tempKeyValue = D_keyNull;
void GetKeys() {
	Delay(20);
  if (P_key1 == 0) {
		tempKeyValue = D_keyValue1;
  } else {
		keyValue = 	tempKeyValue;
			tempKeyValue =D_keyNull;
  }
}