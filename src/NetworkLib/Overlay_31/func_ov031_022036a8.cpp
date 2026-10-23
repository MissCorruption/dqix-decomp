#include <globaldefs.h>

struct Struct_ov031_0224c980_9 { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_ov031_022036a8 {
	unsigned char unknown_0_[0x8];
	unsigned char unknown_8_;
	unsigned char unknown_9_[0x2c - 0x9];
	unsigned short unknown_2c_;
	unsigned short unknown_2e_;
	unsigned char unknown_30_[0x34 - 0x30];
	unsigned int unknown_34_;
};

extern Struct_ov031_0224c980_9 data_ov031_0224c980;

extern "C" void func_ov031_02201550(unsigned char* arg0, unsigned int arg1, Struct_ov031_022036a8* arg2, int arg3, int arg4);
void CycleCurrentPriorityContexts();

// USA: func_ov031_022036a8
extern "C" ARM int func_ov031_022036a8(unsigned char* arg0, unsigned int arg1, Struct_ov031_022036a8* arg2, int arg3) {
	unsigned int var0;
	unsigned int var1;
	unsigned int var2 = arg2->unknown_34_;
	int var3;
	if (arg3 != 0) {
		var1 = 1;
	} else {
		var1 = arg2->unknown_2c_;
	}
	var3 = var2 * 2 + 4;
	while (arg1 != 0 && arg2->unknown_8_ == 4) {
		unsigned int var4;
		var0 = arg2->unknown_2e_;
		if (var0 >= var1) var0 = var1;
		if (data_ov031_0224c980.unknown_2_ < var0) var0 = data_ov031_0224c980.unknown_2_;
		if (arg3 == 0) var0 &= ~1;
		if (arg1 < var0) var0 = arg1;
		var4 = arg2->unknown_34_;
		var3 += var4 - var2;
		var2 = var4;
		if (var3-- == 0) var0 = 0;
		if (var0 == 0) break;
		var1 -= var0;
		func_ov031_02201550(arg0, var0, arg2, 0x18, 0);
		CycleCurrentPriorityContexts();
		arg0 += var0;
		arg1 -= var0;
	}
	return var0;
}
