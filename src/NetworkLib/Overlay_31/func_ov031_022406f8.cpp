#include <globaldefs.h>

struct Struct_ov031_022406f8_2 {
    Struct_ov031_022406f8_2* unknown_0_;
    unsigned char unknown_4_[512];
};
struct Struct_ov031_022406f8 {
    int unknown_0_;
    unsigned char unknown_4_[24];
    Struct_ov031_022406f8_2* unknown_1c_;
    unsigned char unknown_20_[1024];
};
extern "C" void func_ov031_022415c8(void* arg0, const void* arg1, unsigned int arg2);

// USA: func_ov031_022406f8
extern "C" ARM int func_ov031_022406f8(Struct_ov031_022406f8* arg0, unsigned char* arg1, int arg2, int arg3) {
    if (arg2 + arg3 <= arg0->unknown_0_) {
        if (arg3 != 0) {
            if (arg2 < 1024) {
                int var0 = 1024 - arg2;
                if (arg3 <= var0) var0 = arg3;
                func_ov031_022415c8(arg1, arg0->unknown_20_ + arg2, var0);
                arg2 += var0;
                arg3 -= var0;
                arg1 += var0;
            }
            if (arg3 != 0) {
                int var1 = arg2 - 1024;
                int var2 = var1 >> 9;
                arg2 = var1 & 511;
                int var3 = var2 - 1;
                Struct_ov031_022406f8_2* var4 = arg0->unknown_1c_;
                if (var2 != 0) {
                    do {
                        var4 = var4->unknown_0_;
                    } while (var3-- != 0);
                }
                if (arg3 != 0) do {
                    int var5 = 512 - arg2;
                    if (arg3 <= var5) var5 = arg3;
                    func_ov031_022415c8(arg1, var4->unknown_4_ + arg2, var5);
                    arg2 = (arg2 + var5) & 511;
                    arg3 -= var5;
                    arg1 += var5;
                    var4 = var4->unknown_0_;
                } while (arg3 != 0);
            }
        }
        return 1;
    }
    return 0;
}
