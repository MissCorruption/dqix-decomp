#include <globaldefs.h>

extern "C" unsigned short func_0202053c(void* arg0);

struct Struct_ov024_021f70bc { void* unknown_0_; char unknown_4_[0x18]; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f70bc
extern "C" ARM int func_ov024_021f70bc(struct Struct_ov024_021f70bc* arg0) {
	int var0 = func_0202053c(arg0->unknown_0_) * 2;
	arg0->unknown_1c_ = (float)(var0 + 125);
	arg0->unknown_20_ = (float)(var0 + 125) * 0.85f;
	return 1;
}
