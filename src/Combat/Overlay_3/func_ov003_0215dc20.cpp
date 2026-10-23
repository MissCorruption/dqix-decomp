#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
enum { Enum_ov003_0215dc20_1004 = 0x404 };
enum { Enum_ov003_0215dc20_1005 = 0x405 };
enum { Enum_ov003_0215dc20_1008 = 0x408 };
#else
enum { Enum_ov003_0215dc20_1004 = 0x3ec };
enum { Enum_ov003_0215dc20_1005 = 0x3ed };
enum { Enum_ov003_0215dc20_1008 = 0x3f0 };
#endif

// USA: func_ov003_0215dc20
extern "C" ARM void func_ov003_0215dc20(void* arg0) {
	unsigned char* var0 = (unsigned char*)arg0;
	unsigned char var1;
	Struct_0208cb08* var2;
	if (var0[Enum_ov003_0215dc20_1004] == 0) return;
	var1 = var0[Enum_ov003_0215dc20_1005];
	if (var1 == 0) {
		var2 = func_02094a00();
		func_02094b3c(var2, 0xa);
		if (var0[Enum_ov003_0215dc20_1008] != 0) {
			func_02094b30(var2, 0x1f5, 0);
		} else {
			func_02094b30(var2, 0x200, 1);
		}
		var0[Enum_ov003_0215dc20_1005] = var0[Enum_ov003_0215dc20_1005] + 1;
		return;
	}
	if (var1 != 1) return;
	if (func_02094b4c(func_02094a00()) != 0) {
		var0[Enum_ov003_0215dc20_1004] = 0;
		var0[Enum_ov003_0215dc20_1005] = 0;
	}
}
