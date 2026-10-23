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
extern "C" void func_ov000_02178938(void* arg0, int arg1, int arg2, void* arg3);
struct Struct_0205d5d0;
// USA: func_ov000_021788d8
extern "C" ARM void func_ov000_021788d8(void* arg0, int arg1, int arg2) {
    if (arg1 == 0) return;
    void* var0 = *(void**)(func_020421a0() + REGION_OFFSET_0);
    memset(var0, 0, REGION_OFFSET_1);
    func_ov000_02178938(arg0, arg1, arg2, var0);
#if defined(jpn)
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x188), 0xe, (int)var0, 1);
#else
    func_0205d5d0((struct Struct_0205d5d0*)((char*)arg0 + 0x188), 0xe, (int)var0, 1, 0);
#endif
}
