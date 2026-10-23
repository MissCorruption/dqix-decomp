#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov003_02171f80_2112 = 0x860 };
#else
enum { Enum_ov003_02171f80_2112 = 0x840 };
#endif


struct Struct_0209859c;
extern "C" struct Struct_0209859c* func_0209859c(struct Struct_0209859c* arg0, void* arg1);
extern "C" void* func_02012fe4(void* arg0);

struct Struct_ov003_02170d88_13 {
	unsigned char unknown_0_[0x8];
	unsigned char unknown_8_[0x32][0x8];
	unsigned char unknown_198_[0x198 - (0x8 + 0x32 * 0x8)];
	unsigned char unknown1_198_;
};

// USA: func_ov003_02171f80
extern "C" ARM void func_ov003_02171f80(struct Struct_ov003_02170d88_13* arg0) {
	unsigned char* var0 = (unsigned char*)func_02012fe4(arg0);
	unsigned char* var1 = arg0->unknown_8_[0];
	int var2 = 0;
	while (var2 < 0x32) {
		if (func_0209859c((struct Struct_0209859c*)(var0 + Enum_ov003_02171f80_2112), var1) == NULL) {
			memset(var1, 0, 8);
			arg0->unknown1_198_ -= 1;
		}
		var2++;
		var1 += 8;
	}
}
