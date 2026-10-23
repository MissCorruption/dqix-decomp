#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021ce29c {
	unsigned char unknown_0_;
	char unknown_1_[3];
	signed char unknown_4_[4];
	char unknown_8_[12];
};

// USA: func_ov017_021ce29c
extern "C" ARM void func_ov017_021ce29c(void) {
#if defined(jpn)
 enum {Enum_ov017_021ce29c_2864=0x910};
#else
 enum {Enum_ov017_021ce29c_2864=0xb30};
#endif
	void* var0 = func_0202ae24();
	int var1 = (int)GetGameResources();
	unsigned char* var2 = *(unsigned char**)((char*)var1 + 0x3000 + Enum_ov017_021ce29c_2864);

	struct Struct_ov017_021ce29c var3;
	var3.unknown_0_ = 0x2e;
	signed char* var4 = var3.unknown_4_;
	for (int var5 = 0; var5 < 4; var5++) {
		var4[var5] = *(unsigned char*)(var2 + var5 + 0x1b);
	}
	func_0205e330(var0, &var3, 0);
}
