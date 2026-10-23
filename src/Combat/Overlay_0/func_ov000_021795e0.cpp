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
struct Struct_ov000_021735d0_3;
struct Struct_ov000_021735d0_2;
extern "C" struct Struct_ov000_021735d0_2* func_ov000_0217f8c0(struct Struct_ov000_021735d0_3* arg0);
extern "C" void func_ov000_0217964c(void* arg0, void* arg1);
extern "C" void func_ov000_0217979c(void* arg0, void* arg1, void* arg2);

struct Struct_0205d5d0;
// USA: func_ov000_021795e0
extern "C" ARM int func_ov000_021795e0(void* arg0, int, int) {
	void* var0 = func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0);
	func_ov000_0217964c(arg0, var0);
	void* var1 = *(void**)(func_020421a0() + REGION_OFFSET_0);
	memset(var1, 0, REGION_OFFSET_1);
	func_ov000_0217979c(arg0, var0, var1);
#if defined(jpn)
	return func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0x188), 0x11, (int)var1, 1);
#else
	return func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0x188), 0x11, (int)var1, 1, 0);
#endif
}
