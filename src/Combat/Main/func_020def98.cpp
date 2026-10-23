#include <globaldefs.h>

#include "Memory/SafeAllocator.h"

struct Struct_0201099c_9 {
    void* unknown_0_;
    void* unknown_4_;
    unsigned char unknown_8_[0x18];
};

struct Struct_0208358c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    short unknown_18_;
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
};

struct Struct_020de5b0_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
    unsigned short unknown_3_7_ : 1;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    Struct_0208358c_2* unknown_c_;
};

struct Struct_020def98;
struct Struct_020def98_2;
struct Struct_02083508_2;

typedef int (*Type_020de5fc)(Struct_0201099c_9*);

extern "C" int func_020de56c(void*);
extern "C" Struct_0201099c_9* func_020de650(Struct_020de5b0_2* arg0, int arg1, Type_020de5fc arg2);
extern "C" int func_020df618(SafeAllocator*, void*, Struct_020def98*, void**, int, Struct_020def98*);
extern "C" int func_020df6cc(void*, Struct_020def98_2*, int, Struct_020def98_2*);
extern "C" void func_020836e4(Struct_0208358c_2* arg0, Struct_0208358c_2* arg1);
extern "C" void func_020de1d4(Struct_02083508_2*);

static inline void inline_020def98(Struct_0208358c_2* arg0, Struct_0208358c_2* arg1) {
    Struct_0208358c_2 var0 = *arg0;
    func_020836e4(arg0, arg1);
    func_020836e4(arg1, &var0);
}

// USA: func_020def98
extern "C" ARM int func_020def98(SafeAllocator* arg0, Struct_020de5b0_2* arg1,
    Struct_020de5b0_2* arg2, short* arg3, short arg4) {
    if (!arg1 || !arg2 || !arg3 || !arg4) return 0;
    Struct_0208358c_2* var0 = arg1->unknown_c_;
    if (!arg2->unknown_c_) return 0;
    if (arg0 && !var0) {
        int var1 = arg4;
        int var2 = 0;
        int var3 = 0;
        short* var4 = arg3;
        for (int var5 = 0; var5 < var1; var5++, var4++) {
            int var6 = *var4;
            if (var6 < 0) continue;
            Struct_0201099c_9* var7 = func_020de650(arg2, var6, (Type_020de5fc)func_020de56c);
            if (!var7) continue;
            int var8 = 0;
            short* var9 = arg3;
            for (int var10 = 0; var10 < var5; var10++, var9++) {
                if (*var9 == var6) { var8 = 1; break; }
            }
            if (var8) continue;
            var2++;
            if (var7->unknown_0_) var3++;
        }
        var0 = (Struct_0208358c_2*)arg0->Allocate((var2 + var1) * 32);
        arg1->unknown_0_ = var2;
        arg1->unknown_2_0_ = (unsigned short)var3;
        arg1->unknown_c_ = var0;
    }
    if (!var0) return 0;
    int var11;
    int var12;
    int var13 = arg4;
    arg1->unknown_4_ = var13;
    arg1->unknown_6_ = arg1->unknown_2_0_;
    void* var14 = arg0 ? var0 + var13 : NULL;
    arg1->unknown_2_0_ = 0;
    var11 = 0;
    short* var15 = arg3;
    for (var12 = 0; var12 < var13; var12++, var15++) {
        short var16 = *var15;
        Struct_0201099c_9* var17 = NULL;
        if (var16 >= 0) var17 = func_020de650(arg2, var16, (Type_020de5fc)func_020de56c);
        if (!var17) {
            if (!arg0) { var0++; var11++; }
            continue;
        }
        if (arg0) {
            int var18 = 0;
            short* var19 = arg3;
            for (int var20 = 0; var20 < var12; var20++, var19++) {
                if (*var19 == var16) { var18 = 1; break; }
            }
            if (var18) continue;
            func_020df618(arg0, arg1, (Struct_020def98*)var0, &var14, (int)arg2, (Struct_020def98*)var17);
        } else {
            func_020df6cc(arg1, (Struct_020def98_2*)var0, (int)arg2, (Struct_020def98_2*)var17);
        }
        if (var11 >= var13) break;
        var0++;
        var11++;
    }
    arg1->unknown_0_ = var11;
    arg1->unknown_3_7_ = 0;
    if (arg0 && arg1->unknown_0_ >= 2) {
        const Struct_020de5b0_2* var21 = arg1;
        if (var21 != NULL) {
            int var22 = var21->unknown_0_;
            if (var21->unknown_c_ != NULL && var22 != 0) {
                int var23;
                Struct_0208358c_2* var24;
                Struct_0208358c_2* var25;
                int var26;
                Struct_0208358c_2* var27;
                int var28;
                int var29;
                int var30;
                int var31;
                var31 = 0;
                var30 = var22 - 1;
                for (;;) {
                    var28 = -1;
                    var27 = var21->unknown_c_ + var31;
                    for (var23 = var31; var23 < var30; var23++) {
                        if (var27[0].unknown_18_ > var27[1].unknown_18_) {
                            var28 = var23;
                            inline_020def98(var27, var27 + 1);
                        }
                        var27++;
                    }
                    if (var28 == -1) break;
                    var30 = var28;
                    var26 = -1;
                    var25 = var21->unknown_c_ + var30;
                    for (var29 = var30; var29 > var31; var29--) {
                        var24 = var25 - 1;
                        if (var24->unknown_18_ > var25->unknown_18_) {
                            var26 = var29;
                            Struct_0208358c_2 var32 = *var25;
                            func_020836e4(var25, var24);
                            func_020836e4(var24, &var32);
                        }
                        var25 = var24;
                    }
                    if (var26 == -1) break;
                    var31 = var26;
                }
            }
        }
    }
    int var33 = arg1->unknown_4_;
    Struct_0208358c_2* var34 = arg1->unknown_c_ + arg1->unknown_0_;
    for (var12 = arg1->unknown_0_; var12 < var33; var12++, var34++) func_020de1d4((Struct_02083508_2*)var34);
    return 1;
}
