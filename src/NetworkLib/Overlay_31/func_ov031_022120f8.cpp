#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_022120f8 {
	int unknown_0_;
	unsigned short unknown_4_;
	char unknown_6_[0x10 - 0x6];
	int unknown_10_;
};

struct Struct_ov031_0224e5b4_7 {
	char unknown_0_[4];
	Struct_ov031_022120f8* unknown_4_;
};

extern Struct_ov031_0224e5b4_7 data_ov031_0224e5b4;
extern "C" void func_ov031_02216698(void);
extern "C" int func_ov031_02216360(void);
extern "C" void func_ov031_022166b4(void);
extern "C" int func_ov031_022130ac(void);

// USA: func_ov031_022120f8
extern "C" ARM void func_ov031_022120f8(void) {
	Struct_ov031_022120f8* var0 = data_ov031_0224e5b4.unknown_4_;
	if (var0 == NULL) return;
	if (var0->unknown_4_ == 1) {
		if (var0->unknown_10_ == 1) {
			func_ov031_02216698();
			int var1;
			do {
				var1 = func_ov031_02216360();
				var1 -= 2;
			} while ((unsigned int)var1 > 2);
			func_ov031_022166b4();
		}
		data_ov031_0224e5b4.unknown_4_ = 0;
		return;
	}
	if (func_ov031_022130ac() == 0) {
		do {
			SleepCurrentContext(0xa);
		} while (func_ov031_022130ac() == 0);
	}
	data_ov031_0224e5b4.unknown_4_ = 0;
}
