#include <globaldefs.h>

struct Struct_020b1300_2 {
    unsigned char* unknown_0_;   /* 0x0 */
    signed char unknown_4_;     /* 0x4 */
    unsigned char unknown_5_;     /* 0x5 */
};

// USA: func_020b29f8
extern "C" ARM int func_020b29f8(Struct_020b1300_2* arg0, int arg1) {
    int var0 = arg0->unknown_4_;
    unsigned int var1 = arg0->unknown_5_;
    int var2;
    if (var0 < arg1) {
        int var3 = arg1 - var0;
        unsigned char* var4 = arg0->unknown_0_;
        arg0->unknown_0_ = var4 + 1;
        unsigned char var5 = *var4;
        arg0->unknown_5_ = var5;
        arg0->unknown_4_ = 8;
        var2 = func_020b29f8(arg0, var3) | (var1 << var3);
    } else {
        arg0->unknown_4_ = var0 - arg1;
        var2 = var1 >> (var0 - arg1);
    }
    return var2 & (0xff >> (8 - arg1));
}
