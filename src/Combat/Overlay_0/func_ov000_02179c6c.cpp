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
extern "C" void func_ov000_02179cdc(void* arg0, int arg1);
extern "C" void func_ov000_02179ed8(void* arg0, void* arg1, void* arg2);
struct Struct_0205d5d0;
// USA: func_ov000_02179c6c
extern "C" ARM void func_ov000_02179c6c(void* arg0, int arg1) {
    void* var0 = func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0);
    func_ov000_02179cdc(arg0, arg1);
    void* var1 = *(void**)(func_020421a0() + REGION_OFFSET_0);
    memset(var1, 0, REGION_OFFSET_1);
    func_ov000_02179ed8(arg0, var0, var1);
#if defined(jpn)
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x188), 0x15, (int)var1, 1);
#else
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x188), 0x15, (int)var1, 1, 0);
#endif
}
