#include <globaldefs.h>

struct Struct_ov031_02239ee0 { unsigned char unknown_0_[0x58]; int unknown_58_; };
struct Struct_ov031_02290d18_20 { unsigned char unknown_0_[4]; Struct_ov031_02239ee0* unknown_4_; };
extern Struct_ov031_02290d18_20 data_ov031_02290d18;

// USA: func_ov031_02239ee0
extern "C" ARM short func_ov031_02239ee0(unsigned short arg0) {
	short var0 = 0;
	unsigned short var1 = 0;
	short var2 = 0;
	do {
		if (arg0 & (1 << var2)) {
			var0 = var2 + 1;
			var1 = var1 + 1;
		}
		var2++;
	} while (var2 < 16);
	if (var1 <= 1) {
		return var0;
	}

	data_ov031_02290d18.unknown_4_->unknown_58_ = data_ov031_02290d18.unknown_4_->unknown_58_ * 0x10dcd + 0x3039;
	unsigned char var3 = (unsigned char)data_ov031_02290d18.unknown_4_->unknown_58_;
	unsigned short var4 = (unsigned short)((var1 * var3) >> 8);

	short var5 = 0;
	do {
		if (arg0 & 1) {
			if (var4 == 0) {
				return (short)(var5 + 1);
			}
			var4 = var4 - 1;
		}
		arg0 = arg0 >> 1;
		var5++;
	} while (var5 < 16);
	return 0;
}
