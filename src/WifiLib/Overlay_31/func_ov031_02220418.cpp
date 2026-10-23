#include <globaldefs.h>
struct Struct_ov031_02220418 { unsigned short unknown_0_; };
struct Struct_ov031_02220418_2 { unsigned char unknown_0_[8]; unsigned char unknown_8_[1]; };
extern "C" Struct_ov031_02220418_2* func_ov031_022201d8(void*, unsigned int*, unsigned int*);
extern "C" Struct_ov031_02220418* func_ov031_02220248(unsigned char**, const void*, unsigned int*, unsigned int*);
// USA: func_ov031_02220418
extern "C" THUMB int func_ov031_02220418(void* arg0, int* arg1) {
    unsigned int var0, var1, var2, var3;
    unsigned char* var4;
    int var5;
    int var6;
    int var7;
    Struct_ov031_02220418_2* var8 = func_ov031_022201d8(arg0, &var0, &var1);
    var5 = 0;
    var4 = (unsigned char*)var8;
    var6 = 0;
    var7 = 0;
    if (!var8) return var5;
    if (var0 != 1) return var5;
    unsigned char* var9 = (unsigned char*)var8 + var1;
    var4 += sizeof(var8->unknown_0_);
    Struct_ov031_02220418* var10;
    while ((var10 = func_ov031_02220248(&var4, var9, &var2, &var3)) != 0) {
        switch (var2) {
        case 1: {
            unsigned short var11 = var10->unknown_0_;
            var5 = (unsigned short)((unsigned char)(var11 >> 8) | ((var11 << 8) & 0xff00));
            break;
        }
        case 2: {
            unsigned short var12 = var10->unknown_0_;
            var6 = (unsigned short)((unsigned char)(var12 >> 8) | ((var12 << 8) & 0xff00));
            break;
        }
        case 5: {
            unsigned short var13 = var10->unknown_0_;
            var7 = (unsigned short)((unsigned char)(var13 >> 8) | ((var13 << 8) & 0xff00));
            break;
        }
        }
    }
    if (var5 != 1 || var6 != 1) return 0;
    if (var7 >= 1) *arg1 = 1;
    else *arg1 = 0;
    return 1;
}
