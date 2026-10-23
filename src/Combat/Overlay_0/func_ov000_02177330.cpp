#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x28
#define REGION_OFFSET_1 0x800
#else
#define REGION_OFFSET_0 0x5c
#define REGION_OFFSET_1 0x960
#endif

#include "std_library_functions.h"

extern "C" int func_020421a0();
extern "C" void func_ov000_0217737c(void* arg0, void* arg1);

struct Struct_0205d5d0;
// USA: func_ov000_02177330
extern "C" ARM int func_ov000_02177330(void* arg0) {
	void* var0 = *(void**)(func_020421a0() + REGION_OFFSET_0);
	memset(var0, 0, REGION_OFFSET_1);
	func_ov000_0217737c(arg0, var0);
#if defined(jpn)
	return func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0x188), 1, (int)var0, 1);
#else
	return func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0x188), 1, (int)var0, 1, 0);
#endif
}
