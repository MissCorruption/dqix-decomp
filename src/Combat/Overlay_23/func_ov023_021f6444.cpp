#include <globaldefs.h>

struct Struct_ov023_021f6444 {
	char unknown_0_[0x44];
	unsigned char unknown_44_;
};

// USA: func_ov023_021f6444
extern "C" ARM void func_ov023_021f6444(struct Struct_ov023_021f6444 *arg0, unsigned int arg1) {
	arg0->unknown_44_ = (arg0->unknown_44_ & ~0xf0) | ((arg1 & 0xf) << 4);
}
