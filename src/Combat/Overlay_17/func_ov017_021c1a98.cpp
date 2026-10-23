#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define REGION_FIELD_0 0x958
#define REGION_FIELD_1 0x4ec
#else
#define REGION_FIELD_0 0xb78
#define REGION_FIELD_1 0x6fc
#endif


extern "C" void func_ov017_021c1acc(unsigned char* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

// USA: func_ov017_021c1a98
extern "C" ARM void func_ov017_021c1a98(void* arg0, int arg1) {
	char* var0 = (char*)GetGameResources() + 0x3000;
	Struct_0201bdac_2* var1 = *(Struct_0201bdac_2**)(var0 + REGION_FIELD_1);
	unsigned char* var2 = *(unsigned char**)(var0 + REGION_FIELD_0);
	func_ov017_021c1acc(var2);
	*(int*)(var2 + 0xc) = arg1;
	func_020469b4(var1, (Struct_0201bdac*)var2);
}
