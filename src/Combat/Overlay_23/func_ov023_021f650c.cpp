#include <globaldefs.h>

struct Struct_ov023_021f650c {
	char unknown_0_[0x3a];
	unsigned char unknown_3a_;
};

// USA: func_ov023_021f650c
extern "C" ARM void func_ov023_021f650c(struct Struct_ov023_021f650c *arg0, unsigned int arg1) {
	arg0->unknown_3a_ = (arg0->unknown_3a_ & ~0xf0) | ((arg1 & 0xf) << 4);
}
