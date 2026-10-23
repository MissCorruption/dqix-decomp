#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" unsigned long long GetCurrentTimestamp(void);
extern "C" void func_ov031_02200ccc(int arg0);
extern "C" int func_ov031_02200160(int arg0);

struct Struct_ov031_0224c980_11 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	char unknown_2_[0x18 - 2];
	void (*unknown_18_)(void);
	char unknown_1c_[0x48 - 0x1c];
	int (*unknown_48_)(void);
	char unknown_4c_[0x50 - 0x4c];
	int unknown_50_;
};

extern Struct_ov031_0224c980_11 data_ov031_0224c980;

// USA: func_ov031_02203bcc
extern "C" ARM int func_ov031_02203bcc(void) {
	data_ov031_0224c980.unknown_18_();
	int var0 = data_ov031_0224c980.unknown_50_;
	if (var0 == 0) {
		return var0;
	}
	func_ov031_02200ccc(data_ov031_0224c980.unknown_50_);
	SleepCurrentContext(0x64);
	func_ov031_02200ccc(data_ov031_0224c980.unknown_50_);
	unsigned int var1 = (unsigned int)(GetCurrentTimestamp() >> 16);
	goto checkExit;
retry:
	if (data_ov031_0224c980.unknown_1_ != 0) {
		return func_ov031_02200160(4);
	}
	SleepCurrentContext(0x64);
checkExit:
	{
		int var2 = data_ov031_0224c980.unknown_48_();
		if (var2 == 0) {
			return var2;
		}
	}
	{
		unsigned int var3 = (unsigned int)(GetCurrentTimestamp() >> 16) - var1;
		if ((int)var3 < 0x17) {
			goto retry;
		}
		return var3;
	}
}
