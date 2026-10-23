#include <globaldefs.h>

struct Struct_ov031_0223bcc8 { unsigned int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_02222ce4 { unsigned char unknown_0_[8]; Struct_ov031_0223bcc8* unknown_8_; unsigned char unknown_c_; };

// USA: func_ov031_0223bcc8
extern "C" ARM void func_ov031_0223bcc8(Struct_ov031_02222ce4* arg0, int arg1, int arg2) {
	Struct_ov031_0223bcc8* var0 = arg0->unknown_8_;
	if (arg1 >= 0) {
		var0[arg1].unknown_4_ = (var0[arg1].unknown_4_ & ~0xc00) | (arg2 << 10);
		return;
	}
	for (int var1 = 0; var1 < arg0->unknown_c_; var1++) {
		var0[var1].unknown_4_ = (var0[var1].unknown_4_ & ~0xc00) | (arg2 << 10);
	}
}
