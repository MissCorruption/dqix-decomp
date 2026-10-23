#include <globaldefs.h>

struct Struct_ov003_0215ee44 {
	char unknown_0_[0x1e];
	unsigned char unknown_1e_;
	unsigned char unknown_1f_;
	unsigned char unknown_20_;
};

// USA: func_ov003_0215ee44
extern "C" ARM int func_ov003_0215ee44(Struct_ov003_0215ee44* arg0) {
	arg0->unknown_1e_ = (arg0->unknown_1e_ == 2) ? 1 : 2;
	arg0->unknown_20_ = 0;
	return 4;
}
