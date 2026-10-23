#include <globaldefs.h>

struct Struct_ov023_021f8ca8 {
	char unknown_0_[0x45];
	unsigned char unknown_45_0_ : 1;
	unsigned char unknown_45_1_ : 7;
};

// USA: func_ov023_021f8ca8
extern "C" ARM int func_ov023_021f8ca8(struct Struct_ov023_021f8ca8 *arg0) {
	return arg0->unknown_45_0_ != 0;
}
