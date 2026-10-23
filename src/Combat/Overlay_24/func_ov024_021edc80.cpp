#include <globaldefs.h>

struct Struct_ov024_021edc80 {
	char unknown_0_[0x21];
	unsigned char unknown_21_;
};

struct Struct_ov024_021eda78 {
	char unknown_0_[0x138];
	struct Struct_ov024_021edc80* unknown_138_;
};

// USA: func_ov024_021edc80
extern "C" ARM int func_ov024_021edc80(struct Struct_ov024_021eda78* arg0) {
	int var0 = arg0->unknown_138_->unknown_21_ == 4;
	return var0 != 0;
}
