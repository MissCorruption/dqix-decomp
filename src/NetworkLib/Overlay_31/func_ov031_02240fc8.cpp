#include <globaldefs.h>

extern "C" int func_ov031_02206e0c(void* arg0);
extern "C" ARM int func_ov031_022077cc(int arg0, unsigned int* arg1);

struct Struct_ov031_02240fc8 {
    char unknown_0_[8];
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[0x24 - 0xc - 4];
    char* unknown_24_;
};

// USA: func_ov031_02240fc8
extern "C" ARM int func_ov031_02240fc8(Struct_ov031_02240fc8* arg0) {
    char* var0 = arg0->unknown_24_;
    int var1 = arg0->unknown_c_;
    signed char var2 = var0[var1];
    var0[var1] = 0;
    int var3 = (arg0->unknown_8_ != 0) ? 8 : 7;
    char* var4 = arg0->unknown_24_;
    unsigned int var5;
    int var6;
    if (func_ov031_022077cc((int)(var4 + var3), &var5) != 0) {
        var6 = (int)var5;
    } else {
        int var7 = func_ov031_02206e0c(var4 + var3);
        if (var7 == 0) return 0;
        unsigned int var8 = (unsigned int)var7;
        var6 = (int)(((var8 >> 24) & 0xff) | ((var8 >> 8) & 0xff00) | ((var8 << 8) & 0xff0000) | ((var8 << 24) & 0xff000000));
    }
    arg0->unknown_24_[arg0->unknown_c_] = var2;
    return var6;
}
