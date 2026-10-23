#include <globaldefs.h>

#include "Combat/EntryGetterTypes.h"

struct Struct_0203dce4_2 {
    char unknown_0_[0xc];
    struct Struct_0203dce4* unknown_c_[0x20];
};

extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);

extern "C" void* func_02040538(struct Struct_0203e0a0* arg0);

struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };

extern "C" extern int Vector3fix_Distance(struct Struct_02028460_3* arg0, struct Struct_02028460_3* arg1);

struct Struct_0203de84 {
    unsigned int unknown_0_[3];
};

struct Struct_020406f8 {
    char unknown_0_[4];
    struct Struct_0203de84 unknown_4_;
};

struct Struct_020406f8_2 {
    char unknown_0_[0x44];
    struct Struct_0203de84 unknown_44_;
};

struct Struct_0203de84_2 {
    char unknown_0_[0x14];
    struct Struct_020406f8* unknown_14_;
    struct Struct_020406f8_2* unknown_18_;
    struct Struct_020406f8_2* unknown_1c_;
};

extern "C" void func_020406f8(struct Struct_0203de84* arg0, struct Struct_0203de84_2* arg1);

struct Struct_0203e524 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
};

// USA: func_0203e524
extern "C" ARM int func_0203e524(struct Struct_0203dce4_2* arg0, struct Struct_02028460_3* arg1, struct Struct_0203e524* arg2) {
    int var0 = 0x400000;
    int var1 = -1;
    int var2;
    for (var2 = 0; var2 < 0x20; var2++) {
        struct Struct_0203dce4* var3 = func_0203dce4(arg0, var2);
        if (var3 == 0) continue;
        if (var3->unknown_0_ & 0x8000) continue;
        void* var4 = func_02040538((struct Struct_0203e0a0*)var3);
        if (var4 == 0) continue;
        int var5 = Vector3fix_Distance(arg1, (struct Struct_02028460_3*)((char*)var4 + 0x10));
        if (var5 >= var0) continue;
        var0 = var5;
        {
            struct Struct_0203de84 var6;
            var1 = *(unsigned char*)var4;
            func_020406f8(&var6, (struct Struct_0203de84_2*)var3);
            arg2->unknown_0_ = (short)((int)var6.unknown_0_[0] >> 4);
            arg2->unknown_2_ = (short)((int)var6.unknown_0_[1] >> 4);
            arg2->unknown_4_ = (short)((int)var6.unknown_0_[2] >> 4);
        }
    }
    return var1;
}
