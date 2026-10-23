#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
#define REGION_FIELD_0 0x4ec
#define REGION_FIELD_1 0x95c
#else
#define REGION_FIELD_0 0x6fc
#define REGION_FIELD_1 0xb7c
#endif


extern "C" ARM void func_ov017_021a8670(char* arg0);
extern "C" ARM void func_ov017_021a932c(void* arg0, int arg1);
struct Struct_0201bdac;
struct Struct_0201bdac_2;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

// USA: func_ov017_021a8614
extern "C" ARM void func_ov017_021a8614(void* arg0, int arg1, unsigned char arg2, unsigned char arg3, int arg4, int arg5) {
	char* var0 = (char*)(int)GetGameResources() + 0x3000;
	struct Struct_0201bdac_2* var1 = *(struct Struct_0201bdac_2**)(var0 + REGION_FIELD_0);
	char* var2 = *(char**)(var0 + REGION_FIELD_1);
	func_ov017_021a8670(var2);
	func_ov017_021a932c(var2, arg1);
	var2[0x18] = arg2;
	var2[0x19] = arg3;
	var2[0x1a] = arg4;
	var2[0x1b] = arg5;
	func_020469b4(var1, (struct Struct_0201bdac*)var2);
}
