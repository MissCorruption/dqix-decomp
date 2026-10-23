#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

union Struct_02070b6c {
    struct Header {
        unsigned short unknown_0_0_ : 15;
        unsigned short unknown_1_7_ : 1;
    } unknown_0_;
    unsigned int unknown1_0_[33];
};

struct Struct_02070b6c_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    Struct_02070b6c* unknown_4_;
    void* unknown_8_;
};

struct Struct_02070a30;
struct Struct_02070b0c;
struct Struct_02070b0c_2;
struct Struct_02070b6c_3;
struct Struct_02070b6c_4;
struct Struct_02070b6c_5;
struct Struct_020709c8;
extern "C" int func_02070af4(Struct_02070a30*);
extern "C" int func_02070b0c(Struct_02070b0c*, void (*)(Struct_02070b0c*, Struct_02070b0c_2*));
extern "C" Struct_02070b6c_4* func_02070e60(Struct_02070b6c_3*, int, int (*)(Struct_02070b6c_4*));
extern "C" Struct_02070b6c_5* func_02070ee0(Struct_02070b6c_5*, Struct_02070b6c_5*);
extern "C" int func_020709c8(Struct_020709c8*);

// USA: func_02070b6c
extern "C" ARM void func_02070b6c(Struct_02070b6c_2* arg0, SafeAllocator* arg1, Struct_02070b6c_2* arg2, unsigned int arg3, short* arg4, short arg5) {
    if (!arg1 || !arg2 || !arg3 || !arg4) return;
    if (arg5 <= 0) return;
    memset(arg0, 0, sizeof(*arg0));
    Struct_02070b6c_2 var0;
    memset(&var0, 0, sizeof(var0));
    if (arg2) {
        memcpy(&var0, arg2, 4);
        var0.unknown_4_ = (Struct_02070b6c*)((char*)arg2 + 4);
        var0.unknown_8_ = (char*)arg2 + (func_02070af4((Struct_02070a30*)&var0) + 4);
        if (!var0.unknown_3_7_) {
            func_02070b0c((Struct_02070b0c*)&var0, 0);
            var0.unknown_3_7_ = 1;
            arg2->unknown_3_7_ = 1;
        }
    }
    short* var1 = arg4;
    int var2 = 0;
    for (int var3 = arg5, var4 = 0; var4 < var3; var4++, var1++) {
        if (func_02070e60((Struct_02070b6c_3*)&var0, *var1, (int (*)(Struct_02070b6c_4*))func_020709c8)) var2++;
    }
    arg0->unknown_4_ = (Struct_02070b6c*)arg1->Allocate(var2 * sizeof(Struct_02070b6c));
    if (arg0->unknown_4_) {
        arg0->unknown_0_0_ = var2;
        Struct_02070b6c* var5;
        var1 = arg4;
        var5 = arg0->unknown_4_;
        for (int var6 = 0; var6 < arg5; var6++, var1++) {
            Struct_02070b6c* var7 = (Struct_02070b6c*)func_02070e60((Struct_02070b6c_3*)&var0, *var1, (int (*)(Struct_02070b6c_4*))func_020709c8);
            if (var7) {
                memcpy(var5, var7, sizeof(*var5));
                var5++;
            }
        }
    }
    if (var2 < 2) return;
    if (!arg0) return;
    int var8 = arg0->unknown_0_0_;
    if (!arg0->unknown_4_ || !var8) return;
    int var9 = var8 - 1;
    Struct_02070b6c* var10;
    int var11;
    int var12;
    int var13 = 0;
    Struct_02070b6c var14;
    Struct_02070b6c var15;
    do {
        int var16 = var13;
        var12 = -1;
        Struct_02070b6c* var17 = &arg0->unknown_4_[var13];
        for (; var16 < var9; var17++, var16++) {
            if (var17->unknown_0_.unknown_0_0_ > var17[1].unknown_0_.unknown_0_0_) {
                var12 = var16;
                var15 = *var17;
                func_02070ee0((Struct_02070b6c_5*)var17, (Struct_02070b6c_5*)(var17 + 1));
                func_02070ee0((Struct_02070b6c_5*)(var17 + 1), (Struct_02070b6c_5*)&var15);
            }
        }
        if (var12 == -1) break;
        Struct_02070b6c* var18 = &arg0->unknown_4_[var12];
        var9 = var12;
        var11 = -1;
        for (; var12 > var13; var12--) {
            var10 = var18 - 1;
            if (var10->unknown_0_.unknown_0_0_ > var18->unknown_0_.unknown_0_0_) {
                var11 = var12;
                var14 = *var18;
                func_02070ee0((Struct_02070b6c_5*)var18, (Struct_02070b6c_5*)var10);
                func_02070ee0((Struct_02070b6c_5*)var10, (Struct_02070b6c_5*)&var14);
            }
            var18 = var10;
        }
        if (var11 != -1) var13 = var11;
        else break;
    } while (1);
}
