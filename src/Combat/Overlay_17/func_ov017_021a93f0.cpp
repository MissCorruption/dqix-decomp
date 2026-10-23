#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
#define REGION_FIELD_0 0x4ec
#define REGION_FIELD_1 0x960
#else
#define REGION_FIELD_0 0x6fc
#define REGION_FIELD_1 0xb80
#endif


struct Struct021a942c;
extern "C" void func_ov017_021a942c(Struct021a942c* p);
struct TailList020469b4;
struct TailNode020469b4;
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);

// USA: func_ov017_021a93f0
extern "C" ARM void func_ov017_021a93f0(void* unused, int val0xc, int val0x10) {
	char* base = (char*)GetGameResources() + 0x3000;
	TailList020469b4* list = *(TailList020469b4**)(base + REGION_FIELD_0);
	Struct021a942c* node = *(Struct021a942c**)(base + REGION_FIELD_1);
	func_ov017_021a942c(node);
	*(int*)((char*)node + 0xc) = val0xc;
	*(int*)((char*)node + 0x10) = val0x10;
	func_020469b4(list, (TailNode020469b4*)node);
}
