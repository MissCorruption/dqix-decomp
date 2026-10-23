#include <globaldefs.h>

extern "C" void func_ov017_0219949c(int arg0, int arg1, unsigned char arg2, unsigned char arg3, signed char arg4);
extern "C" void func_ov017_02199578(int arg0, int arg1, unsigned char arg2, unsigned char arg3, signed char arg4);

struct Struct_ov017_021d08cc {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_;
	signed char unknown_7_;
};

// USA: func_ov017_021d08cc
extern "C" ARM void func_ov017_021d08cc(int arg0, Struct_ov017_021d08cc* arg1, int arg2, int arg3) {
	if (arg1->unknown_6_ == 0) {
		func_ov017_0219949c(arg3, arg0, arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_7_);
	} else if (arg1->unknown_6_ == 1) {
		func_ov017_02199578(arg3, arg0, arg1->unknown_4_, arg1->unknown_5_, arg1->unknown_7_);
	}
}
