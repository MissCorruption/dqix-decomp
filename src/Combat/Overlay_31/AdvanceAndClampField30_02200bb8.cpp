#include <globaldefs.h>
#include "System/Interrupts.h"

struct GlobalStruct0224c980_02200bb8 {
	char pad[0x30];
	volatile unsigned int field30;
	char pad2[0x58 - 0x30 - 4];
	unsigned char* field58;
	char pad3[0x5c - 0x58 - 4];
	unsigned int field5c;
};

extern "C" GlobalStruct0224c980_02200bb8 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02200bb8
ARM void AdvanceAndClampField30_02200bb8(void) {
	int oldIRQ = DisableIRQInterrupts();
	_ZZ18GetGlobal_02201364vE1s.field30 = _ZZ18GetGlobal_02201364vE1s.field30 +
		*(unsigned short*)(_ZZ18GetGlobal_02201364vE1s.field58 + _ZZ18GetGlobal_02201364vE1s.field30);
	if (_ZZ18GetGlobal_02201364vE1s.field30 >= _ZZ18GetGlobal_02201364vE1s.field5c) {
		_ZZ18GetGlobal_02201364vE1s.field30 = 0;
	}
	SetIRQInterruptState(oldIRQ);
}
