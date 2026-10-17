#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/ProcessorContext.h"

struct GlobalStruct0224c980_02200af8 {
	char pad0[0x28];
	unsigned int field28;
	char pad1[0x30 - 0x28 - 4];
	volatile unsigned int field30;
	char pad2[0x54 - 0x30 - 4];
	unsigned int field54;
	char pad3[0x58 - 0x54 - 4];
	unsigned char* field58;
	char pad4[0x5c - 0x58 - 4];
	unsigned int field5c;
};

extern "C" GlobalStruct0224c980_02200af8 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02200af8  (semantic: DequeueOrBlockUntilAvailable_02200af8)  (semantic: DequeueOrBlockUntilAvailable_02200af8)
extern "C" ARM void* func_ov031_02200af8(unsigned int* outLen) {
	int oldIRQ = DisableIRQInterrupts();
	if (_ZZ18GetGlobal_02201364vE1s.field30 == _ZZ18GetGlobal_02201364vE1s.field28) {
		do {
			_ZZ18GetGlobal_02201364vE1s.field54 = (unsigned int)data_02111304.activeContext;
			BlockCurrentContext(NULL);
			_ZZ18GetGlobal_02201364vE1s.field54 = 0;
		} while (_ZZ18GetGlobal_02201364vE1s.field30 == _ZZ18GetGlobal_02201364vE1s.field28);
	}
	SetIRQInterruptState(oldIRQ);

	unsigned char* base = _ZZ18GetGlobal_02201364vE1s.field58;
	unsigned int value;
	do {
		if (_ZZ18GetGlobal_02201364vE1s.field5c - _ZZ18GetGlobal_02201364vE1s.field30 < 2) {
			_ZZ18GetGlobal_02201364vE1s.field30 = 0;
		}
		value = *(unsigned short*)(base + _ZZ18GetGlobal_02201364vE1s.field30);
		if (value == 0) {
			_ZZ18GetGlobal_02201364vE1s.field30 = 0;
		}
	} while (value == 0);

	*outLen = value - 2;
	return _ZZ18GetGlobal_02201364vE1s.field58 + _ZZ18GetGlobal_02201364vE1s.field30 + 2;
}
