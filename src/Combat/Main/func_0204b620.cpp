#include <globaldefs.h>

struct Struct_0204b620 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[8];
    unsigned short* unknown_c_;
};

// USA: func_0204b620
extern "C" ARM void func_0204b620(void* arg0, unsigned short* arg1, Struct_0204b620* arg2,
    short arg3, short arg4, short arg5, short arg6, short arg7, short arg8, unsigned short arg9) {
    if (!arg1 || !arg2) return;
    if (arg5 >= 32 || arg6 >= 25) return;
    if (arg5 + arg7 <= 0 || arg6 + arg8 <= 0) return;
    if (arg7 <= 0 || arg8 <= 0) return;
    short var0 = arg2->unknown_0_;
    short var1 = arg2->unknown_2_;
    if (var0 <= arg3 || var1 <= arg4 || arg3 + arg7 <= 0 || arg4 + arg8 <= 0) return;
    if (arg3 < 0) {
        arg5 = (short)(arg5 - arg3);
        arg7 = (short)(arg7 + arg3);
        arg3 = 0;
    } else if (var0 < arg3 + arg7) arg7 = (short)(var0 - arg3);
    if (arg4 < 0) {
        arg6 = (short)(arg6 - arg4);
        arg8 += arg4;
        arg4 = 0;
    } else if (var1 < arg4 + arg8) arg8 = (short)(var1 - arg4);
    if (var0 < arg7) arg7 = var0;
    if (var1 < arg8) arg8 = var1;
    if (arg5 < 0) {
        arg3 = (short)(arg3 - arg5);
        arg7 = (short)(arg7 + arg5);
        arg5 = 0;
    } else if (arg5 + arg7 > 32) arg7 = (short)(32 - arg5);
    if (arg6 < 0) {
        arg4 = (short)(arg4 - arg6);
        arg8 = (short)(arg8 + arg6);
        arg6 = 0;
    } else if (arg6 + arg8 > 25) arg8 = (short)(25 - arg6);
    unsigned short* var2 = arg2->unknown_c_;
    if (!var2) return;
    var2 += var0 * arg4 + arg3;
    unsigned short* var3 = arg1 + arg6 * 32 + arg5;
    if (arg9 != 0xffff) {
        for (unsigned short var4 = 0; var4 < arg8; var4++) {
            for (unsigned short var5 = 0; var5 < arg7; var5++) {
                var3[var5] = var2[var5] & 0xfff;
                var3[var5] |= (unsigned short)(arg9 << 12);
            }
            var2 += var0;
            var3 += 32;
        }
    } else {
        for (unsigned short var6 = 0; var6 < arg8; var6++) {
            for (unsigned short var7 = 0; var7 < arg7; var7++) var3[var7] = var2[var7];
            var2 += var0;
            var3 += 32;
        }
    }
}
