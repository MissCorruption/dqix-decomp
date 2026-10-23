#include <globaldefs.h>

extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov024_021f72f8_2 { unsigned int unknown_0_; unsigned int unknown_4_0_ : 10; };
struct Struct_ov024_021f72f8 { void* unknown_0_; char unknown_4_[0x10]; float unknown_14_; float unknown_18_; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f72f8
extern "C" ARM int func_ov024_021f72f8(struct Struct_ov024_021f72f8* arg0) {
	int var0 = func_02053c6c((unsigned char*)arg0->unknown_0_);
	int var1 = ((struct Struct_ov024_021f72f8_2*)var0)->unknown_4_0_;
	arg0->unknown_1c_ = arg0->unknown_14_ / 2.0f + (float)var1;
	arg0->unknown_20_ = arg0->unknown_18_ / 2.0f + (float)var1;
	return 1;
}
