#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_0204e3e0_2 {
    char unknown_0_[0xa4];
    int unknown_a4_;
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[4];
    short unknown_b0_;
    short unknown_b2_;
    char unknown_b4_[2];
    short unknown_b6_;
};

struct Struct_0204e3e0 {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
};

extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int func_020424e4(int arg0, int arg1);
extern "C" char* func_020424ac(char* arg0);
extern "C" Struct_0204e3e0* func_020425b4(int arg0, int arg1);
extern "C" int func_020425e4(int arg0, int arg1, int arg2);
extern "C" int func_0204fc40(void* arg0, char** arg1, char* arg2, short* arg3, int arg4);
extern const unsigned char data_020e7bd6[];
extern char data_020f0248[];
extern char data_020f024e[];
extern char data_020f0251[];
extern char data_020f0254[];
extern char data_020f0258[];
extern char data_020f025b[];
extern char data_020f025e[];
extern char data_020f0298[];
extern char data_020f02d4[];
extern char data_020f02db[];
extern char data_020f02e7[];
extern char data_020f02eb[];
extern char data_020f02f1[];

// USA: func_0204e3e0
extern "C" ARM short func_0204e3e0(Struct_0204e3e0_2* arg0, char* arg1, int arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5) {
    int var0;
    int var1, var2, var3, var4;
    short var5;
    int var6;
    bool var7;
    short var8;
    int var9;
    int var10;
    char* var11;
    char* var12;
    char* var13;
    short var14[8];
    char var15[0x100];
    unsigned char var16;
    Struct_0204e3e0* var17;

    var12 = arg1;
    if (var12 == 0) return 0;

    var3 = arg0->unknown_b0_;
    var4 = arg0->unknown_b2_;
    var7 = 0;
    var0 = 0;
    var8 = 0;
    var10 = arg0->unknown_b6_;
    var1 = arg0->unknown_b0_;
    var2 = arg0->unknown_b2_;
    var5 = 0xff;

    while (*var12 != 0) {
        char var18 = *var12;
        char var19 = var12[1];
        if ((var18 == '\\' && var19 == 'n') || (var18 == '\r' && var19 == '\n')) {
            if (var3 < var1) var3 = var1;
            var1 = arg0->unknown_b0_;
            var2 += arg0->unknown_b6_;
            var12 += 2;
            var5 = 0xff;
            continue;
        }
        if (var18 == '\n') {
            if (var3 < var1) var3 = var1;
            var1 = arg0->unknown_b0_;
            var2 += arg0->unknown_b6_;
            var12 += 1;
            var5 = 0xff;
            continue;
        }
        int var20 = func_020424e4((int)var12, arg5);
        if (*var12 == '<' && var20 < 0) {
            var13 = var12 + 1;
            var11 = func_020424ac(var12);
            if (func_0204fc40(arg0, &var13, data_020f0248, var14, 1)) {
            } else if (func_0204fc40(arg0, &var13, data_020f024e, var14, 1)) {
                if (var3 < var1) var3 = var1;
                var1 = var14[0];
                var5 = 0xff;
            } else if (func_0204fc40(arg0, &var13, data_020f0251, var14, 1)) {
                if (var4 < var2) var4 = var2;
                var2 = var14[0];
                var5 = 0xff;
            } else if (func_0204fc40(arg0, &var13, data_020f0254, var14, 2)) {
                if (var3 < var1) var3 = var1;
                if (var4 < var2) var4 = var2;
                var1 = var14[0];
                var2 = var14[1];
                var5 = 0xff;
            } else if (func_0204fc40(arg0, &var13, data_020f0258, var14, 1)) {
                var1 += var14[0];
                var5 = 0xff;
            } else if (func_0204fc40(arg0, &var13, data_020f025b, var14, 1)) {
                var2 += var14[0];
                var5 = 0xff;
            } else if (func_0204fc40(arg0, &var13, data_020f025e, var14, 2)) {
                var1 += var14[0];
                var2 += var14[1];
                var5 = 0xff;
            } else if (func_0204fc40(arg0, &var13, data_020f0298, var14, 1)) {
                var8 = var14[0];
            } else if (func_0204fc40(arg0, &var13, data_020f02d4, var14, 1)) {
                var7 = 1;
                var0 = var14[0];
            } else if (func_0204fc40(arg0, &var13, data_020f02db, var14, 0)) {
                if (var7) {
                    if (var3 < var1) var3 = var1;
                    if (var4 < var2) var4 = var2;
                    var1 = arg0->unknown_b0_;
                    var2 = var0 + arg0->unknown_b2_;
                }
            } else if (func_0204fc40(arg0, &var13, data_020f02e7, var14, 1)) {
                if (var3 < var1) var3 = var1;
                var1 = var14[0];
                var5 = 0xff;
                var9 = var1;
                __clear(var15, 0x100);
                char* var21 = var13;
                char* var22 = strstr(var21, data_020f02eb);
                if (var22 != 0) {
                    int var23 = var22 - var21;
                    if (var23 < 0x100) {
                        memcpy(var15, var21, var23);
                        var1 -= func_020420e8(var15, arg5);
                    }
                }
            } else if (func_0204fc40(arg0, &var13, data_020f02f1, var14, 0)) {
                if (var3 < var1) var3 = var1;
                var1 = var9;
                var5 = 0xff;
            }
            var12 = var11 + 1;
            continue;
        }
        var16 = data_020e7bd6[arg5] + 1;
        if (var20 >= 0) {
            var6 = var20 & 0xff;
            var17 = func_020425b4(var20, arg5);
            int var24 = func_020425e4(var5, var6, arg5);
            var5 = var6;
            var16 = var17->unknown_4_ + 1 + var24;
            var12 += var17->unknown_5_0_;
        } else {
            var12++;
        }
        var1 += var16;
    }

    if (var1 < var3) var1 = var3;
    if (var2 < var4) var2 = var4;
    var2 = var2 + var10 - (arg0->unknown_b6_ - 10);
    if (((var1 + 3) & 7) <= 3) var1 += 4;
    int var25 = ((var1 + 7) & ~7) >> 3;
    int var26 = ((var2 + 7) & ~7) >> 3;
    if (var25 > 32) var25 = 32;
    if (var26 > 32) var26 = 32;
    if (arg4) {
        if (arg0->unknown_a8_ < var25) arg0->unknown_a8_ = var25;
        if (arg0->unknown_aa_ < var26) arg0->unknown_aa_ = var26;
    }
    if (arg3) {
        var2 -= arg0->unknown_b2_;
        if ((arg0->unknown_aa_ << 3) - var2 < 7) arg0->unknown_aa_ = arg0->unknown_aa_ + 1;
        arg0->unknown_b2_ = ((arg0->unknown_aa_ << 3) - var2) >> 1;
    }
    if (var7) {
        arg0->unknown_b2_ = arg0->unknown_b2_ + var0;
        if (arg3) arg0->unknown_b2_ = arg0->unknown_b2_ - 1;
    }
    arg0->unknown_a4_ = (arg0->unknown_a8_ * arg0->unknown_aa_) << 5;
    return var8;
}
