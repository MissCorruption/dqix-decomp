#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020546c8;
extern "C" void* func_020550a8(struct Struct_020546c8* arg0);

struct Struct_020557a4;
extern "C" float func_020578e8(Struct_020557a4* arg0, Struct_020557a4* arg1);

struct Struct_020559cc {
    char unknown_0_[0x24];
    unsigned char unknown_24_[3];
    unsigned char unknown_27_[3];
    unsigned char unknown_2a_[3];
};

struct Struct_020559cc_2 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x28];
    void* unknown_30_;
    char unknown_34_[0x64 - 0x34];
    float unknown_64_[3];
    float unknown_70_[3];
    float unknown_7c_[3];
    unsigned short unknown_88_[3];
    unsigned short unknown_8e_[3];
    unsigned short unknown_94_[3];
};

// USA: func_020559cc
extern "C" ARM void func_020559cc(struct Struct_020559cc_2* arg0) {
    struct Struct_020559cc* var0 = (struct Struct_020559cc*)func_020550a8((struct Struct_020546c8*)arg0->unknown_30_);

    for (int var1 = 0; var1 < 3; var1++) {
        unsigned char var2 = var0->unknown_24_[var1];
        if (var2 <= 1) continue;
        if (var2 <= arg0->unknown_88_[var1]) continue;
        SignedAllocatorHeader* var3 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x8 + var1 * 12))->GetNthElement(arg0->unknown_88_[var1]);
        if (var3 == NULL) continue;
        if ((unsigned int)(**(int**)var3) >= (unsigned int)arg0->unknown_4_) continue;
        arg0->unknown_88_[var1]++;
        if (arg0->unknown_88_[var1] >= var0->unknown_24_[var1]) {
            arg0->unknown_64_[var1] = 0;
            continue;
        }
        SignedAllocatorHeader* var4 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x8 + var1 * 12))->GetNthElement(arg0->unknown_88_[var1]);
        if (var4 == NULL) continue;
        arg0->unknown_64_[var1] = func_020578e8((Struct_020557a4*)var3, (Struct_020557a4*)var4);
    }

    for (int var5 = 0; var5 < 3; var5++) {
        unsigned char var6 = var0->unknown_27_[var5];
        if (var6 <= 1) continue;
        if (var6 <= arg0->unknown_8e_[var5]) continue;
        SignedAllocatorHeader* var7 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x2c + var5 * 12))->GetNthElement(arg0->unknown_8e_[var5]);
        if (var7 == NULL) continue;
        if ((unsigned int)(**(int**)var7) >= (unsigned int)arg0->unknown_4_) continue;
        arg0->unknown_8e_[var5]++;
        if (arg0->unknown_8e_[var5] >= var0->unknown_27_[var5]) {
            arg0->unknown_70_[var5] = 0;
            continue;
        }
        SignedAllocatorHeader* var8 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x2c + var5 * 12))->GetNthElement(arg0->unknown_8e_[var5]);
        if (var8 == NULL) continue;
        arg0->unknown_70_[var5] = func_020578e8((Struct_020557a4*)var7, (Struct_020557a4*)var8);
    }

    for (int var9 = 0; var9 < 3; var9++) {
        unsigned char var10 = var0->unknown_2a_[var9];
        if (var10 <= 1) continue;
        if (var10 <= arg0->unknown_94_[var9]) continue;
        SignedAllocatorHeader* var11 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x50 + var9 * 12))->GetNthElement(arg0->unknown_94_[var9]);
        if (var11 == NULL) continue;
        if ((unsigned int)(**(int**)var11) >= (unsigned int)arg0->unknown_4_) continue;
        arg0->unknown_94_[var9]++;
        if (arg0->unknown_94_[var9] >= var0->unknown_2a_[var9]) {
            arg0->unknown_7c_[var9] = 0;
            continue;
        }
        SignedAllocatorHeader* var12 =
            ((SignedAllocatorList*)((char*)arg0->unknown_30_ + 0x50 + var9 * 12))->GetNthElement(arg0->unknown_94_[var9]);
        if (var12 == NULL) continue;
        arg0->unknown_7c_[var9] = func_020578e8((Struct_020557a4*)var11, (Struct_020557a4*)var12);
    }
}
