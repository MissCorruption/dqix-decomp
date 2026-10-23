#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_ov031_02203120(void*);
extern "C" int func_ov031_02201f10(int, int, int);
unsigned long long GetCurrentTimestamp(void);

struct Struct_ov031_0224c980_7 {
	char unknown_0_[0x50];
	int unknown_50_;
};
extern Struct_ov031_0224c980_7 data_ov031_0224c980;

struct Struct_ov031_022032a4 {
	char unknown_0_[0x4];
	int unknown_4_;
	char unknown_8_[0x8 - 0x4 - 0x4];
	unsigned char unknown1_8_;
	char unknown_9_[0x10 - 0x8 - 0x1];
	unsigned int unknown_10_;
	char unknown_14_[0x28 - 0x10 - 0x4];
	int unknown_28_;
};

// USA: func_ov031_022032a4
extern "C" ARM int func_ov031_022032a4(Struct_ov031_022032a4* arg0) {
	unsigned int var0;
	int var1 = func_ov031_02203120(arg0);
	int var2 = 2;
	var0 = 0;
	do {
		arg0->unknown_28_ = var1;
		arg0->unknown1_8_ = (unsigned char)var2;
		arg0->unknown_10_ = (unsigned int)(GetCurrentTimestamp() >> 16);
		func_ov031_02201f10((int)arg0, var2, 0x18);

		int var3 = DisableIRQInterrupts();
		if (arg0->unknown1_8_ == 2 && data_ov031_0224c980.unknown_50_ != 0) {
			arg0->unknown_4_ = 1;
			BlockCurrentContext(NULL);
		}
		SetIRQInterruptState(var3);

		if (arg0->unknown1_8_ == 4) {
			return 0;
		}
		if (data_ov031_0224c980.unknown_50_ == 0) break;
		var0 = var0 + 1;
	} while (var0 < 3);
	return 1;
}
