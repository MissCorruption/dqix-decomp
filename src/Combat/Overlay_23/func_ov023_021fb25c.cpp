#include <globaldefs.h>

struct Struct_ov004_0215de9c {
	char unknown_0_[0x30];
	unsigned short unknown_30_;
	unsigned short unknown_32_;
	unsigned short unknown_34_;
	unsigned short unknown_36_;
};

// USA: func_ov023_021fb25c
extern "C" ARM void func_ov023_021fb25c(Struct_ov004_0215de9c* arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, int arg4) {
	arg0->unknown_30_ = arg1;
	arg0->unknown_32_ = arg2;
	arg0->unknown_34_ = arg3;
	arg0->unknown_36_ = arg4;
}
