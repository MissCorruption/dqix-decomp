#include <globaldefs.h>
#if defined(jpn)
#define data_020f1f14 data_020f2080
#define data_0210cf84 data_0210cc3c
#endif

struct Struct_020f1f14_3 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; char unknown_10_[8]; };
extern struct Struct_020f1f14_3 data_020f1f14[];
extern unsigned short data_0210cf84;

// USA: func_020bb514
extern "C" ARM void func_020bb514(void) {
    int var0;
    struct Struct_020f1f14_3* var1 = data_020f1f14;
    unsigned int var2 = data_0210cf84;
    if (var2 > 1) var2 = var2 + 1;
    int var3 = (int)var2;
    var0 = 0;
    do {
        if (var0 < var3) {
            var1->unknown_8_ = 1;
        } else {
            var1->unknown_8_ = 0;
        }
        if (var1->unknown_c_ != 0) {
            var1->unknown_0_ = 0;
            var1->unknown_4_ = 0x10000;
        } else {
            var1->unknown_0_ = 0;
            var1->unknown_4_ = 0x20000;
        }
        var0 = var0 + 1;
        var1 = var1 + 1;
    } while (var0 < 5);
}
