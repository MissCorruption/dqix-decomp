#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
#define STATE_OFFSET 0x3d30
#define RESOURCE_OFFSET 0x34f8
#else
#define STATE_OFFSET 0x3db8
#define RESOURCE_OFFSET 0x3708
#endif

#if defined(jpn)
#define func_ov005_0215a37c func_ov005_0215b8d0
#endif

extern "C" int func_ov017_021a193c(int* arg0);
extern "C" int func_ov023_021e3258(void* arg0, int arg1, int arg2, int arg3, short arg4);

// USA: func_ov005_0215a37c
extern "C" ARM void func_ov005_0215a37c(char* arg0) {
	if (*(unsigned char*)(arg0 + STATE_OFFSET) != 3) return;
	char* var0 = (char*)GetGameResources();
	int* var1 = *(int**)(var0 + RESOURCE_OFFSET);
	int var2 = func_ov017_021a193c(var1);
	func_ov023_021e3258((void*)var2, 0xbd, 0x10, 0xbd, 0x2f);
}
