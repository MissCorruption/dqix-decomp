#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215fbd4(char* arg0, char* arg1, int arg2);
#if defined(jpn)
enum { Enum_ov002_0215fb54_3000 = 0xa80, Enum_ov002_0215fb54_3024 = 0xa98, Enum_ov002_0215fb54_2400 = 0x800, Enum_ov002_0215fb54_3784 = 0xe20, Enum_ov002_0215fb54_17 = 0x12 };
#define FINAL_ARG_0215fb54
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
enum { Enum_ov002_0215fb54_3000 = 0xbb8, Enum_ov002_0215fb54_3024 = 0xbd0, Enum_ov002_0215fb54_2400 = 0x960, Enum_ov002_0215fb54_3784 = 0xec8, Enum_ov002_0215fb54_17 = 0x11 };
#define FINAL_ARG_0215fb54 , 0
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov002_0215fb54 { char unknown_0_[Enum_ov002_0215fb54_3024]; void* unknown_bd0_; };
struct Struct_ov002_0215fb54_2 { char unknown_0_[Enum_ov002_0215fb54_3000]; int unknown_bb8_; };

// USA: func_ov002_0215fb54
extern "C" ARM void func_ov002_0215fb54(char* arg0) {
    func_ov002_0215be00(arg0, ((struct Struct_ov002_0215fb54_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, Enum_ov002_0215fb54_17, 1);

    memset(((struct Struct_ov002_0215fb54*)(arg0 + 0x1000))->unknown_bd0_, 0, Enum_ov002_0215fb54_2400);
    func_ov002_0215fbd4(arg0, (char*)((struct Struct_ov002_0215fb54*)(arg0 + 0x1000))->unknown_bd0_, 0);

    func_0205d304(arg0 + Enum_ov002_0215fb54_3784, ((struct Struct_ov002_0215fb54*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0 FINAL_ARG_0215fb54);
}
