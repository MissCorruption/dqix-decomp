#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02010604_2428 = 0x71c, Enum_02010604_396 = 0x180, Enum_02010604_2432 = 0x720, Enum_02010604_2416 = 0x710, Enum_02010604_3248 = 0xa50, Enum_02010604_3252 = 0xa54, Enum_02010604_3256 = 0xa58, Enum_02010604_1833 = 0x4c9 };
#else
enum { Enum_02010604_2428 = 0x97c, Enum_02010604_396 = 0x18c, Enum_02010604_2432 = 0x980, Enum_02010604_2416 = 0x970, Enum_02010604_3248 = 0xcb0, Enum_02010604_3252 = 0xcb4, Enum_02010604_3256 = 0xcb8, Enum_02010604_1833 = 0x729 };
#endif

#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void* func_0202ae18(void);
extern "C" void* func_0205ec34(void);
extern "C" void func_ov017_021d2400(void);
extern "C" void func_02048150(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_021cedf4(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_0219bfb4(int arg0, int arg1);

extern "C" int func_0202b7d8(int* arg0);

struct Struct_02010604_3;
extern "C" int func_020482bc(struct Struct_02010604_3* arg0);

struct Struct_02010604;
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);

extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

extern int data_020f83d8;

struct Struct_02010604_2 {
    char unknown_0_[0x130];
    unsigned int* unknown_130_;
    char unknown_134_[Enum_02010604_396 - 0x134];
    unsigned int unknown_18c_;
};

// USA: func_02010604
extern "C" ARM void func_02010604(GameState* arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_0202ae18();
    int var1;

    if (arg1 != 0) {
        if (func_0202b7d8((int*)var0)) {
            func_ov017_021d2400();
        }
    }

    for (var1 = 0; var1 < *((unsigned char*)((char*)arg0 + 0x3000) + Enum_02010604_2432); var1++) {
        int var2 = *((unsigned char*)((char*)arg0 + var1 + 0x3000) + Enum_02010604_2428);
        GameObject* var3 = arg0->GetPartyMemberByIndex(var2);
        struct Struct_02010604_2* var4;
        if (var3 == NULL) continue;
        var4 = (struct Struct_02010604_2*)var3;
        if ((*var4->unknown_130_ & 1) == 0) continue;
        func_02048150(var3, 0, 1);
        func_020482bc((struct Struct_02010604_3*)var3);
        var4->unknown_18c_ &= ~1;
        func_02033b88((struct Struct_02010604*)var3, 0);
        if (func_0202b7d8((int*)var0)) {
            func_ov017_021cedf4(var2, 1, 0);
            func_ov017_021c9e00(var2, 0, 0, 1);
        }
    }

    if (arg2 != 0) {
        unsigned int* var5 = (unsigned int*)((char*)arg0 + 0x3000 + Enum_02010604_2416);
        *var5 = *var5 >> 1;
    }

    func_ov017_0219bfb4(2, arg3);

    if (*(int*)((char*)arg0 + 0x5000 + Enum_02010604_3248) == 0x10 && *(int*)((char*)arg0 + 0x5000 + Enum_02010604_3252) == 2 &&
        *(int*)((char*)arg0 + 0x5000 + Enum_02010604_3256) == 1) {
        void* var6 = func_0205ec34();
        func_0206df6c(var6, (unsigned char*)((char*)var6 + 0x8c), 0x113a, 0);
    }

    *((unsigned char*)&data_020f83d8 + Enum_02010604_1833) = 0;
}
