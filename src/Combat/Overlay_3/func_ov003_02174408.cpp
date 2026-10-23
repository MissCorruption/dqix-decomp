#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov003_02174114_4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_[0x12];
	unsigned char unknown_14_[0x24];
	unsigned short unknown_38_;
	unsigned short unknown_3a_;
	unsigned char unknown_3c_;
};

// USA: func_ov003_02174408
extern "C" ARM void func_ov003_02174408(Struct_ov003_02174114_4* arg0) {
	arg0->unknown_0_ = 0x63;
	arg0->unknown_1_ = 0;
	memset(arg0->unknown_2_, 0, sizeof(arg0->unknown_2_));
	memset(arg0->unknown_14_, -1, sizeof(arg0->unknown_14_));
	arg0->unknown_38_ = 0x64;
	arg0->unknown_3a_ = 0;
	arg0->unknown_3c_ = 0;
}
