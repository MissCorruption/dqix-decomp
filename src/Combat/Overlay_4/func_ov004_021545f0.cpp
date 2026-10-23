#include <globaldefs.h>

struct Struct_ov004_021545f0 {
	short unknown_0_;
	short unknown_2_;
	unsigned char unknown_4_;
	unsigned char unknown_5_;
};

// USA: func_ov004_021545f0
extern "C" ARM void func_ov004_021545f0(Struct_ov004_021545f0* arg0, int arg1, short arg2, short arg3, unsigned char arg4, unsigned char arg5) {
	arg0[arg1].unknown_0_ = arg2;
	arg0[arg1].unknown_2_ = arg3;
	arg0[arg1].unknown_4_ = arg4;
	arg0[arg1].unknown_5_ = arg5;
}
