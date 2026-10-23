#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_02096824_2456 = 0x868 };
#else
enum { Enum_02096824_2456 = 0x998 };
#endif

struct Struct_02012de8;

extern "C" void* func_020d6c00(void);
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" int func_020421a0();
extern "C" void func_02096c38(void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_02096824
extern "C" ARM void func_02096824(unsigned char* arg0) {
    void* var0 = func_020d6c00();
    if (func_02046708((struct Struct_02012de8*)var0, 0x4000)) return;
    if (!(g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0)) return;
    int var1 = func_020421a0();
    if (var1 != 0 && *(int*)(var1 + Enum_02096824_2456) != 0) return;
    if (!arg0[0x225]) return;
    func_02096c38(arg0, arg0[0x220], arg0[0x221], arg0[0x222], arg0[0x223]);
}
