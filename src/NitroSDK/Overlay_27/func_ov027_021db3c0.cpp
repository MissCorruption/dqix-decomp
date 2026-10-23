#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" int func_020d4aa8(void);

struct Struct_ov027_021db3c0 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
};

// USA: func_ov027_021db3c0
extern "C" ARM int func_ov027_021db3c0(Struct_ov027_021db3c0* arg0) {
    unsigned int var0 = func_020d4aa8();
    if (var0 == 0) return 0;
    unsigned short var1 = 0;
    unsigned short var2 = arg0->unknown_4_;
    unsigned short var3 = var2;
    do {
        if ((var0 & (1 << (var3 - 1))) && var2 != var3) {
            arg0->unknown_4_ = var3;
            goto found;
        }
        var1 = var1 + 1;
        var3 = (var3 == 16) ? 1 : var3 + 1;
    } while (var1 < 16);
found:
    return 1;
}
