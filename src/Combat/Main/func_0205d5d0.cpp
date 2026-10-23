#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

struct Struct_0205d5d0_2 {
    char unknown_0_[0xc4];
    unsigned char unknown_c4_;
};

struct Struct_0205d5d0 {
    char unknown_0_[0x98];
    int unknown_98_;
    Struct_0205d5d0_2* unknown_9c_;
    char unknown_a0_[0x13];
    unsigned char unknown_b3_;
};

extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" void func_0205d904(unsigned char* arg0);
#if defined(jpn)
extern "C" void func_0204cb20(void* arg0, int arg1, int arg2);
#else
extern "C" void func_0204cb20(void* arg0, int arg1, int arg2, unsigned char arg3);
#endif

// USA: func_0205d5d0
extern "C" ARM int func_0205d5d0(struct Struct_0205d5d0* arg0, int arg1, int arg2, int arg3
#if !defined(jpn)
, unsigned char arg4
#endif
) {
    Struct_0205d5d0_2* var0;
    unsigned char var1;

    if (arg2 == 0) return 1;
    if (arg0->unknown_98_ == 0) return 1;
    if (arg0->unknown_9c_ == 0) return 1;

    for (var1 = 0; var1 < arg0->unknown_b3_; var1++) {
        var0 = (Struct_0205d5d0_2*)((char*)arg0->unknown_9c_ + var1 * 0xe0);
        if (!func_0204c7e0((unsigned char*)var0)) continue;
        if (arg1 != var0->unknown_c4_) continue;
#if defined(jpn)
        func_0204cb20(var0, arg2, arg3);
#else
        func_0204cb20(var0, arg2, arg3, arg4);
#endif
        func_0205d904((unsigned char*)arg0);
        return 0;
    }
    return 1;
}
