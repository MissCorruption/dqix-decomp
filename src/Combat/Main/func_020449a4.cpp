#include <globaldefs.h>

struct Struct_020449a4 {
    char unknown_0_[0x1860];
    int unknown_1860_;
    int unknown_1864_;
    char unknown_1868_[0x19b1 - 0x1868];
    unsigned char unknown_19b1_;
    char unknown_19b2_[6];
    unsigned char unknown_19b8_;
    char unknown_19b9_[2];
    unsigned char unknown_19bb_;
};
extern "C" int func_020d85dc(const char* arg0, const char* arg1);
extern "C" int func_02005a94(const char* arg0);
extern "C" void func_02042b98(Struct_020449a4*, int, int, int, int);
extern char data_020f00a9[];
extern char data_020f00b0[];
extern char data_020f00b6[];
extern char data_020f00bc[];
extern char data_020f00c3[];

// USA: func_020449a4
extern "C" ARM const char* func_020449a4(Struct_020449a4* arg0, const char* arg1) {
    int var0 = 1;
    while (var0) {
        if (func_020d85dc(arg1, data_020f00a9)) {
            int var1;
            int var2;
            int var3;
            int var4;
            int var5;
            int var6;
            var3 = 6;
            var4 = var3;
            var2 = 0;
            while (arg1[var4] != '>') {
                if (!arg1[var4]) return arg1 + var4;
                var4++;
            }
            var5 = func_02005a94(arg1 + 6);
            while (arg1[var3] != ',') {
                if (arg1[var3] == '>') {
                    arg1 += var3 + 1;
                    var2 = 1;
                    break;
                }
                var3++;
            }
            if (var2) return arg1;
            var3++;
            var6 = func_02005a94(arg1 + var3);
            while (arg1[var3] != ',') {
                if (arg1[var3] == '>') {
                    arg1 += var3 + 1;
                    var2 = 1;
                    break;
                }
                var3++;
            }
            if (var2) return arg1;
            var3++;
            var1 = func_02005a94(arg1 + var3);
            while (arg1[var3] != ',') {
                if (arg1[var3] == '>') {
                    arg1 += var3 + 1;
                    var2 = 1;
                    break;
                }
                var3++;
            }
            if (var2) return arg1;
            int var7 = func_02005a94(arg1 + (var3 + 1));
            if (var5 < 0) var5 = 0;
            if (var5 > 256) var5 = 256;
            if (var6 < 0) var6 = 0;
            if (var6 > 192) var6 = 192;
            if (var1 < 0) var1 = 256 - var5;
            if (var1 > 256) var1 = 256 - var5;
            if (var7 < 0) var7 = 192 - var6;
            if (var7 > 192) var7 = 192 - var6;
            func_02042b98(arg0, var5, var6, var1, var7);
            arg1 += var4 + 1;
        } else if (func_020d85dc(arg1, data_020f00b0)) {
            arg0->unknown_19b1_ = 0;
            arg1 += 5;
        } else if (func_020d85dc(arg1, data_020f00b6)) {
            arg0->unknown_19b8_ = 1;
            arg1 += 5;
        } else if (func_020d85dc(arg1, data_020f00bc)) {
            int var8 = 6;
            int var9 = var8;
            while (arg1[var9] != '>') {
                if (!arg1[var9]) return arg1 + var9;
                var9++;
            }
            int var10 = func_02005a94(arg1 + 6);
            if (var10 <= 0) var10 = 12;
            while (arg1[var8] != ',') {
                if (arg1[var8] == '>') {
                    arg1 += var8 + 1;
                    break;
                }
                var8++;
            }
            int var11 = func_02005a94(arg1 + (var8 + 1));
            if (var11 <= 0) var11 = 16;
            arg0->unknown_1860_ = var10;
            arg0->unknown_1864_ = var11;
            arg1 += var9 + 1;
        } else if (func_020d85dc(arg1, data_020f00c3)) {
            arg0->unknown_19bb_ = 0;
            arg1 += 6;
        } else {
            var0 = 0;
        }
    }
    return arg1;
}
