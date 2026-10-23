#include <globaldefs.h>

struct Struct_ov001_02157acc {
	unsigned char unknown_0_[0xc4];
	int unknown_c4_;
	unsigned char unknown_c8_[0x464 - 0xc8];
	int unknown_464_;
};

// USA: func_ov001_02157acc
extern "C" ARM void func_ov001_02157acc(struct Struct_ov001_02157acc* arg0) {
	if (arg0->unknown_c4_ > 0) {
		arg0->unknown_464_ = 1;
	}
}
