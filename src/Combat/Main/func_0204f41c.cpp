#include <globaldefs.h>

struct Struct_0204f41c_2 {
    char unknown_0_[0xb6];
    short unknown_b6_;
};

struct Struct_0204f41c {
    int unknown_0_;
    signed char unknown_4_;
    signed char unknown_5_0_ : 6;
};

extern "C" int func_0204fc40(Struct_0204f41c_2* arg0, const char** arg1, const char* arg2, short* arg3, int arg4);
extern "C" void func_0204df9c(Struct_0204f41c_2* arg0, Struct_0204f41c* arg1, short arg2, short arg3, unsigned char arg4, int arg5);
extern "C" Struct_0204f41c* func_0204254c(int arg0, int arg1);
extern "C" Struct_0204f41c* func_020425b4(int arg0, int arg1);

extern const unsigned char data_020e7bd8[];
extern const char data_020f0248[];
extern const char data_020f0258[];
extern const char data_020f025b[];
extern const char data_020f025e[];
extern const char data_020f024e[];
extern const char data_020f0251[];
extern const char data_020f0254[];
extern const char data_020f028c[];

// USA: func_0204f41c
extern "C" ARM void func_0204f41c(Struct_0204f41c_2* arg0, short arg1, short arg2, const char* arg3, unsigned char arg4,
                                  unsigned char arg5, short* arg6, short* arg7, int arg8) {
    int var0;
    short var1;
    short var2;
    short var3[8];
    if (arg3 == NULL) return;
    const char* var4 = arg3;
    unsigned char var5 = arg5;
    if (arg4 == 12) arg8 = 1;
    *arg7 = 0;
    *arg6 = 0;
    var1 = arg1;
    var2 = arg2;
    var0 = arg4;
    while (*var4 != 0) {
        char var6 = *var4;
        char var7 = var4[1];
        if ((var6 == '\\' && var7 == 'n') || (var6 == '\r' && var7 == '\n')) {
            arg2 += arg0->unknown_b6_;
            arg1 = var1;
            var4 += 2;
            continue;
        }
        if (var6 == '\n') {
            arg2 += arg0->unknown_b6_;
            arg1 = var1;
            var4 += 1;
            continue;
        }
        if (var6 == '<') {
            var4++;
            if (func_0204fc40(arg0, &var4, data_020f0248, var3, 1)) continue;
            if (func_0204fc40(arg0, &var4, data_020f0258, var3, 1)) {
                arg1 += var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f025b, var3, 1)) {
                arg2 += var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f025e, var3, 2)) {
                arg1 += var3[0];
                arg2 += var3[1];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f024e, var3, 1)) {
                arg1 = var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f0251, var3, 1)) {
                arg2 = var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f0254, var3, 2)) {
                arg1 = var3[0];
                arg2 = var3[1];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f028c, var3, 1)) {
                var3[0] &= 0xf;
                var5 = var3[0];
                continue;
            }
            var4--;
        }
        unsigned char var8 = data_020e7bd8[arg8] + 1;
        Struct_0204f41c* var9 = func_0204254c((int)var4, arg8);
        if (var9 != NULL) {
            func_0204df9c(arg0, var9, arg1, arg2, var5, arg8);
            var8 = var9->unknown_4_ + 1;
            short var10 = arg2 + var0;
            short var11 = arg1 + var8;
            if (*arg6 < var11) *arg6 = var11;
            if (*arg7 < var10) *arg7 = var10;
            var4 += var9->unknown_5_0_;
        } else {
            if (*var4 != ' ') {
                func_0204df9c(arg0, func_020425b4(0, arg8), arg1, arg2, var5, arg8);
            }
            var4++;
        }
        arg1 += var8;
    }
    *arg6 -= var1;
    *arg7 -= var2;
}
