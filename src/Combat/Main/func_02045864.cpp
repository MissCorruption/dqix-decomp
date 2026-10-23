#include <globaldefs.h>

struct Struct_02045864_2 {
    char unknown_0_[4];
    signed char unknown_4_;
    char unknown_5_;
    short unknown_6_;
};

struct Struct_02045864 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    char unknown_6_[6];
    unsigned char* unknown_c_;
};

extern Struct_02045864* data_02107834[];

// USA: func_02045864
extern "C" ARM void func_02045864(int arg0, int arg1, Struct_02045864_2* arg2, unsigned char* arg3, int arg4, int arg5,
                                  unsigned char arg6, unsigned char arg7) {
    if (arg2 == NULL || arg3 == NULL) {
        return;
    }
    int var0 = arg2->unknown_6_;
    Struct_02045864* var1 = data_02107834[arg7];
    unsigned char var2 = arg6 << 4;
    unsigned char var3 = arg6 & 0x0f;
    int var4 = var1->unknown_4_ >> 3;
    signed char var5 = 7 - (var0 & 7);
    int var6 = arg4 >> 1;
    for (int var7 = 0; var7 < 12; var7++) {
        signed char var8 = var5;
        unsigned char* var9 = var1->unknown_c_ + var4 * var7 + (var0 >> 3);
        int var10 = arg1 + var7;
        int var11 = var6 * var10;
        if (var10 < 0 || arg5 <= var10) {
            continue;
        }
        for (int var12 = 0; var12 < arg2->unknown_4_; var12++) {
            int var13 = arg0 + var12;
            if (var13 < 0 || arg4 <= var13) {
                continue;
            }
            if (*var9 & (1 << var8)) {
                if (var13 & 1) {
                    (arg3 + var11)[var13 >> 1] &= 0x0f;
                    (arg3 + var11)[var13 >> 1] |= var2;
                } else {
                    (arg3 + var11)[var13 >> 1] &= 0xf0;
                    (arg3 + var11)[var13 >> 1] |= var3;
                }
            }
            if (--var8 < 0) {
                var8 = 7;
                var9++;
            }
        }
    }
}
