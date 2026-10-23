#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" int func_02005a94(void* arg0);

extern char* data_020f0afc[];

struct Struct_0206f550 {
    unsigned char unknown_0_[4];
    int unknown_4_;
    short unknown_8_[4];
};

// USA: func_0206f550
extern "C" ARM int func_0206f550(struct Struct_0206f550* arg0, char* arg1, char* arg2) {
    unsigned char* var0 = (unsigned char*)arg1;
    int var1;
    char* var2;
    int var3;
    unsigned char var4;
    unsigned char var5;
    char** var6;

    if (arg1 == 0) return 0;
    if (arg2 == 0) return 0;
    arg0->unknown_4_ = 0;
    while ((var5 = *var0) != 0) {
        if (var5 == '<') {
            var1 = 0;
            if (arg0->unknown_4_ < 4) {
                var4 = 1;
                var6 = data_020f0afc;
                while (var4 < 13) {
                    var2 = var6[var4];
                    var3 = func_020d2ff0(var2);
                    if (func_02001aec(var0, var2, var3) == 0) {
                        if (var4 == 4 || (unsigned char)(var4 + 0xff) <= 1) {
                            var0 += var3;
                            arg0->unknown_8_[arg0->unknown_4_] = (short)func_02005a94(var0);
                        }
                        var1 = 1;
                        arg0->unknown_0_[arg0->unknown_4_] = var4;
                        arg0->unknown_4_++;
                        break;
                    }
                    var4++;
                }
            }
            if (var1) {
                while ((var5 = *var0) != '>') {
                    if (var5 == 0) return arg0->unknown_4_;
                    var0++;
                }
                var0++;
            } else {
                while ((var5 = *var0) != '>') {
                    *arg2 = var5;
                    var5 = *var0;
                    if (var5 == 0) return arg0->unknown_4_;
                    var0++;
                    arg2++;
                }
                *arg2++ = var5;
                var0++;
            }
        } else {
            if ((var5 >= 0x81 && var5 <= 0x9f) || (var5 >= 0xe0 && var5 <= 0xea)) {
                *arg2++ = var5;
                var0++;
            }
            *arg2++ = *var0++;
        }
    }
    return arg0->unknown_4_;
}
