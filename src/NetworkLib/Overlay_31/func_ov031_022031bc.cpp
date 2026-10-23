#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" unsigned short func_ov031_02203078(void);

struct Struct_ov031_0224c980_6 {
	char unknown_0_[0x50];
	unsigned int unknown_50_;
};

extern Struct_ov031_0224c980_6 data_ov031_0224c980;

struct Struct_ov031_022031bc {
	char unknown_0_[0xa];
	unsigned short unknown_a_;
	char unknown_c_[0x18 - 0xa - 2];
	unsigned short unknown_18_;
	unsigned short unknown_1a_;
	unsigned int unknown_1c_;
	unsigned int unknown_20_;
};

// USA: func_ov031_022031bc
extern "C" ARM void func_ov031_022031bc(int arg0, unsigned short arg1, unsigned int arg2) {
	Struct_ov031_022031bc* var0 = (Struct_ov031_022031bc*)data_02111304.activeContext->unknown_A4;
	if (var0 == NULL) {
		return;
	}
	unsigned int var1 = (arg2 == 0x7f000001) ? data_ov031_0224c980.unknown_50_ : arg2;
	var0->unknown_1a_ = arg1;
	var0->unknown_18_ = var0->unknown_1a_;
	var0->unknown_20_ = var1;
	var0->unknown_1c_ = var1;
	if (arg0 != 0) {
		var0->unknown_a_ = (unsigned short)arg0;
		return;
	}
	var0->unknown_a_ = func_ov031_02203078();
}
