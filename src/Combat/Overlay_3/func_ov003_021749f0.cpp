#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#if defined(jpn)
enum { Enum_ov003_021749f0_4161 = 0xfbd };
enum { Enum_ov003_021749f0_4166 = 0xfc2 };
#else
enum { Enum_ov003_021749f0_4161 = 0x1041 };
enum { Enum_ov003_021749f0_4166 = 0x1046 };
#endif

// USA: func_ov003_021749f0
extern "C" ARM void func_ov003_021749f0(char* arg0) {
	if (!(*(unsigned short*)(arg0 + Enum_ov003_021749f0_4166) & 0x40)) {
		return;
	}
	unsigned char var0 = *(unsigned char*)(arg0 + Enum_ov003_021749f0_4161);
	if (var0 == 0) {
		Struct_0208cb08* var1 = func_02094a00();
		func_02094b34(var1, 0x1fb, 0x66, 0, 0);
		*(unsigned char*)(arg0 + Enum_ov003_021749f0_4161) = *(unsigned char*)(arg0 + Enum_ov003_021749f0_4161) + 1;
	} else if (var0 == 1) {
		if (func_02094b4c(func_02094a00()) != 0) {
			*(unsigned short*)(arg0 + Enum_ov003_021749f0_4166) &= ~0x40;
			*(unsigned char*)(arg0 + Enum_ov003_021749f0_4161) = 0;
		}
	}
}
