#include <globaldefs.h>

struct Struct_ov014_02188b20 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0xc - 8];
    char* unknown_c_;
};

extern "C" int func_ov014_02188ba0(struct Struct_ov014_02188b20* arg0, int arg1, int arg2);

// USA: func_ov014_02188b20
extern "C" ARM int func_ov014_02188b20(struct Struct_ov014_02188b20* arg0, int arg1) {
    if (arg0 == 0 || arg1 != 0) return 0;

    unsigned short var0 = arg0->unknown_0_;
    char* var1 = arg0->unknown_c_;
    unsigned short var2 = arg0->unknown_2_;
    char* var3 = var1 + var0 * 4;
    unsigned short var4 = arg0->unknown_4_;
    var3 = var3 + var2 * 4;
    var3 = var3 + var4 * 2;
    int var5 = (int)(var3 - var1);
    var5 = (var5 + 3) & ~3;
    int var6 = 0;
    unsigned short var7 = arg0->unknown_6_;
    int* var8 = (int*)(var1 + var5);
    int var9 = 0;

    while (var9 < var7) {
        *var8 = func_ov014_02188ba0(arg0, *var8, var6);
        var8++;
        var9++;
    }
    return 1;
}
