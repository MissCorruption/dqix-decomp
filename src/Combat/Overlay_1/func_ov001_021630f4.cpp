#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(int arg0);

// USA: func_ov001_021630f4
extern "C" ARM int func_ov001_021630f4(int arg0) {
#if defined(jpn)
    enum { Enum_ov001_021630f4_1844 = 0x524, Enum_ov001_021630f4_254 = 0xfa };
#else
    enum { Enum_ov001_021630f4_1844 = 0x734, Enum_ov001_021630f4_254 = 0xfe };
#endif
	char* var0 = *(char**)((char*)GetGameResources() + 0x3000 + Enum_ov001_021630f4_1844);
	*(unsigned char*)(var0 + Enum_ov001_021630f4_254) = func_ov017_021d60f4(arg0) != 0 ? 1 : 0;
	return 1;
}
