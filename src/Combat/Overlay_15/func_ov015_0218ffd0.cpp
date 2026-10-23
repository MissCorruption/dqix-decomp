#include <globaldefs.h>

struct Struct_ov015_0218ffd0 { char unknown_0_[0x1c]; unsigned char unknown_1c_; char unknown_1d_[0xf]; unsigned char unknown_2c_; char unknown_2d_[0x10]; unsigned char unknown_3d_; };

// USA: func_ov015_0218ffd0
extern "C" ARM void func_ov015_0218ffd0(struct Struct_ov015_0218ffd0* arg0, int arg1) {
	unsigned char var0 = arg0->unknown_1c_;
	if (var0 != 0 && var0 != 1)
		return;
	if (arg0->unknown_3d_ != arg1) {
		arg0->unknown_3d_ = arg1;
		arg0->unknown_2c_ = 1;
	}
}
