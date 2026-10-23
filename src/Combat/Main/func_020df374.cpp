#include <globaldefs.h>

#include "Memory/SafeAllocator.h"

struct Struct_020def98 {
    void* unknown_0_;
    void* unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
    unsigned int unknown_9_1_ : 23;
    unsigned char unknown_c_[0x14];
};

struct Struct_020df374 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
    unsigned short unknown_3_7_ : 1;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    Struct_020def98* unknown_c_;
};

extern "C" void __clear(void*, unsigned int);
extern "C" int func_020df618(SafeAllocator*, void*, Struct_020def98*, void**, int, Struct_020def98*);

// USA: func_020df374
extern "C" ARM int func_020df374(SafeAllocator* arg0, Struct_020df374* arg1,
    Struct_020df374* arg2, const unsigned char* arg3, short arg4,
    const unsigned char* arg5, short arg6) {
    if (!arg0 || !arg1 || !arg2 || ((!arg3 || !arg4) && (!arg5 || !arg6))) return 0;
    Struct_020def98* var0 = arg1->unknown_c_;
    Struct_020def98* var1 = arg2->unknown_c_;
    if (!var1) return 0;
    unsigned int var2 = 0;
    unsigned int var3[2];
    __clear(var3, 8);
    if (!arg3) var2 = -1;
    else {
        const unsigned char* var4 = arg3;
        for (int var5 = 0; var5 < arg4; var5++) var2 |= 1 << *var4++;
    }
    int var6;
    arg3 = arg5;
    if (!arg3) { var3[0] = -1; var3[1] = -1; }
    else for (var6 = 0; var6 < arg6; var6++) var3[var6 >> 5] |= 1 << (*arg3++ & 31);
    int var7 = arg2->unknown_0_;
    int var8;
    if (arg0 && !var0) {
        int var9;
        int var10;
        var8 = 0;
        var10 = 0;
        for (var9 = 0; var9 < var7; var9++, var1++) {
            if ((var2 & (1 << var1->unknown_8_0_)) && ((1 << (var1->unknown_8_4_ & 31)) & var3[0])) {
                var8++;
                if (var1->unknown_0_) var10++;
            }
        }
        var1 = arg2->unknown_c_;
        var0 = (Struct_020def98*)arg0->Allocate((var8 + var10) * 32);
        arg1->unknown_0_ = var8;
        arg1->unknown_2_0_ = (unsigned short)var10;
        arg1->unknown_c_ = var0;
    }
    if (!var0) return 0;
    int var11;
    int var12;
    var8 = arg1->unknown_0_;
    arg1->unknown_4_ = var8;
    arg1->unknown_6_ = arg1->unknown_2_0_;
    void* var13 = arg0 ? var0 + var8 : NULL;
    arg1->unknown_2_0_ = 0;
    var12 = 0;
    var11 = 0;
    for (; var11 < var7; var11++, var1++) {
        if ((var2 & (1 << var1->unknown_8_0_)) && ((1 << (var1->unknown_8_4_ & 31)) & var3[0])) {
            func_020df618(arg0, arg1, var0, &var13, (int)arg2, var1);
            if (var12 >= var8) break;
            var0++;
            var12++;
        }
    }
    arg1->unknown_0_ = var12;
    arg1->unknown_3_7_ = 0;
    return 1;
}
