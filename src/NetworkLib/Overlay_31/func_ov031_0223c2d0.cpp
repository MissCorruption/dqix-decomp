#include <globaldefs.h>

struct Struct_ov031_0223c278 {
	unsigned char unknown_0_[4];
	short unknown_4_;
	unsigned short unknown_6_;
	unsigned char unknown_8_;
	unsigned char unknown_9_;
};

extern "C" void func_ov031_0223e2c0(int, void*);

// USA: func_ov031_0223c2d0
extern "C" ARM void func_ov031_0223c2d0(void* arg0, Struct_ov031_0223c278* arg1) {
	arg1->unknown_4_ = arg1->unknown_4_ + 1;
	if (arg1->unknown_4_ < arg1->unknown_6_) {
		return;
	}
	arg1->unknown_9_ = 0;
	func_ov031_0223e2c0(1, arg0);
}
