#include <globaldefs.h>

struct Struct_ov031_0223bd28 { unsigned int unknown_0_; unsigned int unknown_4_; };
struct Struct_ov031_02222f44_2 { unsigned char unknown_0_[8]; struct Struct_ov031_0223bd28* unknown_8_; };

// USA: func_ov031_0223bd28
extern "C" ARM void func_ov031_0223bd28(struct Struct_ov031_02222f44_2* arg0, int arg1, unsigned int* arg2, unsigned int* arg3) {
	struct Struct_ov031_0223bd28* var0 = arg0->unknown_8_;
	*arg2 = (var0[arg1].unknown_0_ & 0x1ff0000) >> 16;
	*arg3 = var0[arg1].unknown_0_ & 0xff;
}
