#include <globaldefs.h>
#include "System/ProcessorContext.h"

extern "C" unsigned long long GetCurrentTimestamp(void);
extern "C" void func_ov031_02200ccc(int a);
extern "C" int func_ov031_02200160(int a);

struct GlobalStruct0224c980_02203bcc {
	unsigned char field0;
	unsigned char field1;
	char pad18[0x18 - 2];
	void (*field18)(void);
	char pad48[0x48 - 0x1c];
	int (*field48)(void);
	char pad50[0x50 - 0x4c];
	int field50;
};

extern "C" GlobalStruct0224c980_02203bcc _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02203bcc
extern "C" ARM int func_ov031_02203bcc(void) {
	_ZZ18GetGlobal_02201364vE1s.field18();
	int f50 = _ZZ18GetGlobal_02201364vE1s.field50;
	if (f50 == 0) {
		return f50;
	}
	func_ov031_02200ccc(_ZZ18GetGlobal_02201364vE1s.field50);
	SleepCurrentContext(0x64);
	func_ov031_02200ccc(_ZZ18GetGlobal_02201364vE1s.field50);
	unsigned int t0 = (unsigned int)(GetCurrentTimestamp() >> 16);
	goto checkExit;
retry:
	if (_ZZ18GetGlobal_02201364vE1s.field1 != 0) {
		return func_ov031_02200160(4);
	}
	SleepCurrentContext(0x64);
checkExit:
	{
		int r = _ZZ18GetGlobal_02201364vE1s.field48();
		if (r == 0) {
			return r;
		}
	}
	{
		unsigned int diff = (unsigned int)(GetCurrentTimestamp() >> 16) - t0;
		if ((int)diff < 0x17) {
			goto retry;
		}
		return diff;
	}
}
