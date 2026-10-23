#include <globaldefs.h>

extern "C" unsigned int func_ov031_02211720(void *arg0);

struct Struct_ov031_02211658 {
	char unknown_0_[0x20];
	unsigned int unknown_20_;
	char unknown_24_[0x18];
	unsigned int unknown_3c_;
};

// USA: func_ov031_02211658
extern "C" ARM void func_ov031_02211658(Struct_ov031_02211658 *arg0) {
	arg0->unknown_20_ &= ~1;
	arg0->unknown_3c_ = func_ov031_02211720(arg0);
}
