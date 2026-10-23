#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_020a8e9c;
struct Struct_020a8f70;
struct Struct_020a8fd0_2;
struct Struct_020a8e80;

struct Struct_020a9304 { unsigned char unknown_0_[24]; };
struct Struct_020a9304_2 { unsigned short unknown_0_[6]; };

struct Struct_020a8fd0_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned int unknown_c_;
    struct Struct_020a9304 unknown_10_;
    unsigned int unknown_28_;
    unsigned int unknown_2c_;
    unsigned char unknown_30_;
    unsigned char unknown_31_;
    struct Struct_020a9304_2 unknown_32_;
};

typedef void (*Type_020a8f70)(void*, void*);
typedef int (*Type_020a8fd0)(void*);

extern "C" int func_020a8f60(struct Struct_020a8e9c* arg0);
extern "C" int func_020a8f70(struct Struct_020a8f70* arg0, Type_020a8f70 arg1);
extern "C" void* func_020a9288(struct Struct_020a8fd0_2* arg0, int arg1, Type_020a8fd0 arg2);
extern "C" struct Struct_020a8fd0_3* func_020a9304(struct Struct_020a8fd0_3* arg0, struct Struct_020a8fd0_3* arg1);
extern "C" unsigned short func_020a8e80(struct Struct_020a8e80* arg0);

struct Struct_020a8fd0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    struct Struct_020a8fd0_3* unknown_4_;
    void* unknown_8_;
};

static inline void inline_020a8fd0(struct Struct_020a8fd0_3* arg0, struct Struct_020a8fd0_3* arg1) {
    struct Struct_020a8fd0_3 var0 = *arg0;
    func_020a9304(arg0, arg1);
    func_020a9304(arg1, &var0);
}

// USA: func_020a8fd0
extern "C" ARM void func_020a8fd0(struct Struct_020a8fd0* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3, short* arg4, short arg5) {
    struct Struct_020a8fd0 var0;
    int var1;
    int var2;
    short* var3;
    int var4;
    int var5;
    int var6;
    struct Struct_020a8fd0_3* var7;
    int var8;
    int var9;
    struct Struct_020a8fd0_3* var10;
    struct Struct_020a8fd0_3* var11;
    int var12;
    struct Struct_020a8fd0_3* var13;
    int var14;
    int var15;
    int var16;
    if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0 || arg5 <= 0) return;
    memset(arg0, 0, sizeof(struct Struct_020a8fd0));
    memset(&var0, 0, sizeof(struct Struct_020a8fd0));
    if (arg2 != 0) {
        memcpy(&var0, arg2, 4);
        var0.unknown_4_ = (struct Struct_020a8fd0_3*)((char*)arg2 + 4);
        var0.unknown_8_ = (char*)arg2 + (func_020a8f60((struct Struct_020a8e9c*)&var0) + 4);
        if (!var0.unknown_3_7_) {
            func_020a8f70((struct Struct_020a8f70*)&var0, 0);
            var0.unknown_3_7_ = 1;
            ((struct Struct_020a8fd0*)arg2)->unknown_3_7_ = 1;
        }
    }
    var4 = 0;
    var3 = arg4;
    var6 = arg5;
    for (var5 = 0; var5 < var6; var5++, var3++) {
        if (func_020a9288((struct Struct_020a8fd0_2*)&var0, *var3, (Type_020a8fd0)func_020a8e80) != 0) {
            var4++;
        }
    }
    arg0->unknown_4_ = (struct Struct_020a8fd0_3*)arg1->Allocate(var4 * sizeof(struct Struct_020a8fd0_3));
    if (arg0->unknown_4_ != 0) {
        arg0->unknown_0_0_ = var4;
        var3 = arg4;
        var7 = arg0->unknown_4_;
        for (var8 = 0; var8 < var6; var8++, var3++) {
            void* var17 = func_020a9288((struct Struct_020a8fd0_2*)&var0, *var3, (Type_020a8fd0)func_020a8e80);
            if (var17 != 0) {
                memcpy(var7, var17, sizeof(struct Struct_020a8fd0_3));
                var7++;
            }
        }
    }
    if (var4 < 2 || arg0 == 0) return;
    var2 = arg0->unknown_0_0_;
    if (arg0->unknown_4_ == 0 || var2 == 0) return;
    var16 = 0;
    var1 = var2 - 1;
    for (;;) {
        var14 = -1;
        var11 = arg0->unknown_4_ + var16;
        for (var9 = var16; var9 < var1; var9++) {
            if (var11[0].unknown_0_ > var11[1].unknown_0_) {
                var14 = var9;
                inline_020a8fd0(&var11[0], &var11[1]);
            }
            var11++;
        }
        if (var14 == -1) break;
        var1 = var14;
        var12 = -1;
        var13 = arg0->unknown_4_ + var1;
        for (var15 = var1; var15 > var16; var15--) {
            var10 = var13 - 1;
            if (var10->unknown_0_ > var13->unknown_0_) {
                var12 = var15;
                struct Struct_020a8fd0_3 var18 = *var13;
                func_020a9304(var13, var10);
                func_020a9304(var10, &var18);
            }
            var13 = var10;
        }
        if (var12 == -1) break;
        var16 = var12;
    }
}
