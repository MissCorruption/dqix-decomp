#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02213054 { unsigned char unknown_0_[0x17]; unsigned char unknown_17_; unsigned char unknown_18_[10]; };
struct Struct_ov031_0224e5c4_4 { unsigned char unknown_0_[0xc]; Struct_ov031_02213054* unknown_c_; };
extern Struct_ov031_0224e5c4_4 data_ov031_0224e5c4;
extern "C" int func_ov031_022134b0(void);

// USA: func_ov031_02213054
extern "C" ARM int func_ov031_02213054(void* arg0) {
	int var0 = 0;
	unsigned int var1 = func_ov031_022134b0();
	if (var1 >= 0xa && var1 <= 0x10) {
		Struct_ov031_02213054* var2 = data_ov031_0224e5c4.unknown_c_;
		if (var2->unknown_17_ == 4 || var2->unknown_17_ == 8) {
			VectorizedInvertedMemcpy(var2->unknown_18_, arg0, 0xa);
			var0 = 1;
		}
	}
	return var0;
}
