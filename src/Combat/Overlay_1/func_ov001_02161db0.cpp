#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_02161db0
extern "C" ARM int func_ov001_02161db0(void *arg0) {
#if defined(jpn)
    enum { Enum_ov001_02161db0_1844 = 0x524, Enum_ov001_02161db0_208 = 0xcc };
#else
    enum { Enum_ov001_02161db0_1844 = 0x734, Enum_ov001_02161db0_208 = 0xd0 };
#endif
	char* var0 = *(char**)((char*)GetGameResources() + 0x3000 + Enum_ov001_02161db0_1844);
	int var1 = func_ov017_021d60f4(arg0);
	char* var2 = *(char**)(var0 + Enum_ov001_02161db0_208);
	while (var2 != 0) {
		if (*(unsigned char*)(var2 + 1) == var1) {
			*(unsigned char*)(var2 + 4) |= 1;
			break;
		}
		var2 = *(char**)(var2 + 0x34);
	}
	return 1;
}
