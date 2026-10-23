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

struct Struct_ov000_021735d0_3;
extern "C" void* func_ov000_0217f8c0(struct Struct_ov000_021735d0_3* arg0);
extern "C" void func_ov000_021781f8(void*, void*);
extern "C" int func_020421a0();
extern "C" void func_ov000_0217831c(void*, void*);
struct Struct_0205d5d0;
// USA: func_ov000_0217819c
extern "C" ARM void func_ov000_0217819c(void* arg0) {
    void* var0 = func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0);
    func_ov000_021781f8(arg0, var0);
    void* var1 = *(void**)(func_020421a0() + REGION_OFFSET_0);
    memset(var1, 0, REGION_OFFSET_1);
    func_ov000_0217831c(arg0, var1);
#if defined(jpn)
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x188), 7, (int)var1, 1);
#else
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x188), 7, (int)var1, 1, 0);
#endif
}
