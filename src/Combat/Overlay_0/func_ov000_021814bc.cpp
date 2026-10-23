#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021719f8(int* arg0);
extern "C" void __clear(void* arg0, int arg1);
#if defined(jpn)
extern "C" int func_ov000_02171a74(void* arg0);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
#else
extern "C" int func_ov000_02171a74(void* arg0, char* arg1);
#endif

struct Struct_0203c108_3;
extern "C" void func_0203c108(struct Struct_0203c108_3* arg0, char* arg1);

struct Struct_ov000_021814bc {
    char unknown_0_[0x28];
    int unknown_28_;
    char unknown_2c_[0x3c - 0x2c];
    int unknown_3c_;
    char unknown_40_[0x4c - 0x40];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

// USA: func_ov000_021814bc
extern "C" ARM void func_ov000_021814bc(char* arg0) {
#if !defined(jpn)
    char var0[0x80];
#endif
    struct Struct_ov000_021814bc* var1;
    int var2;
    (void)GameState::GetInstance();
    for (var2 = 0; var2 < 4; var2++) {
        var1 = (struct Struct_ov000_021814bc*)(arg0 + 0x958) + *(signed char*)(arg0 + var2 + 0x6c);
        if (var1->unknown_4c_ < 0) continue;
        var1->unknown_3c_ = var1->unknown_28_;
        if (!func_ov000_021719f8((int*)var1)) continue;
#if defined(jpn)
        int var3 = func_ov000_02171a74(var1);
        if (var3 < 0) continue;
        char* var0 = (char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), var3);
#else
        __clear(var0, 0x80);
        if (func_ov000_02171a74(var1, var0) < 0) continue;
#endif
        func_0203c108((struct Struct_0203c108_3*)((char*)var1 + 0x50), var0);
    }
}
