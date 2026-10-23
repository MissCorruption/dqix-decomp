#include <globaldefs.h>

struct Struct_ov031_0220ba44 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[256];
};

// USA: func_ov031_0220ba44
extern "C" ARM void func_ov031_0220ba44(Struct_ov031_0220ba44* arg0, const unsigned char* arg1, int arg2) {
    int var0;
    arg0->unknown_0_ = 0;
    arg0->unknown_1_ = 0;
    unsigned char* var1 = arg0->unknown_2_;
    int var2 = 0;
    do {
        var1[var2] = var2;
        var2++;
    } while (var2 < 256);
    unsigned char var3;
    unsigned char var4 = 0;
    var3 = var4;
    int var5 = var4;
    do {
        var0 = var1[var5];
        unsigned char var6 = arg1[var4];
        var4++;
        var3 = var3 + (var0 + var6);
        unsigned char var7 = var1[var3];
        if (var4 >= arg2) var4 = 0;
        var1[var5] = var7;
        var1[var3] = var0;
        var5++;
    } while (var5 < 256);
}
