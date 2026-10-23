#include <globaldefs.h>

struct Struct_ov016_0218e17c_2 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    char unknown_6_[6];
    unsigned char* unknown_c_;
};

struct Struct_ov016_0218e17c {
    char unknown_0_[4];
    signed char unknown_4_;
    char unknown_5_;
    short unknown_6_;
};

extern "C" int func_02042638(int arg0);

// USA: func_ov016_0218e17c
extern "C" ARM void func_ov016_0218e17c(unsigned short* arg0, int arg1, int arg2, struct Struct_ov016_0218e17c* arg3, unsigned short arg4, unsigned char arg5) {
    struct Struct_ov016_0218e17c_2* var0 = (struct Struct_ov016_0218e17c_2*)func_02042638(arg5);
    short var1 = arg3->unknown_6_;
    int var2 = var0->unknown_4_ >> 3;
    signed char var3 = 7 - (var1 & 7);
    for (int var4 = 0; var4 < 12; var4++) {
        signed char var5;
        unsigned char* var6 = var0->unknown_c_ + var2 * var4 + (var1 >> 3);
        int var7 = (arg2 + var4) << 8;
        var5 = var3;
        for (int var8 = 0; var8 < arg3->unknown_4_; var8++) {
            if (*var6 & (1 << var5)) {
                (arg0 + var7 + arg1)[var8] = arg4;
            }
            var5--;
            if (var5 < 0) {
                var5 = 7;
                var6++;
            }
        }
    }
}
