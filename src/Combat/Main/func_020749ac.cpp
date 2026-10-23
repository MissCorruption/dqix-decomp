#include <globaldefs.h>

struct Struct_020749ac { int unknown_0_; float unknown_4_; };

// USA: func_020749ac
extern "C" ARM void func_020749ac(Struct_020749ac* arg0, int arg1, int arg2, int arg3) {
    int var0 = (int)(unsigned int)arg1;
    int var1 = arg2;
    float var2 = arg0[var0].unknown_4_;

    if (arg3 != 0) {
        for (;;) {
            while (arg0[var0].unknown_4_ > var2) {
                var0++;
            }
            while (arg0[var1].unknown_4_ < var2) {
                var1--;
            }
            if (var0 >= var1) {
                break;
            }
            float var3 = arg0[var0].unknown_4_;
            int var4 = arg0[var0].unknown_0_;
            arg0[var0].unknown_4_ = arg0[var1].unknown_4_;
            arg0[var0].unknown_0_ = arg0[var1].unknown_0_;
            arg0[var1].unknown_4_ = var3;
            arg0[var1].unknown_0_ = var4;
            var0++;
            var1--;
        }
    } else {
        for (;;) {
            while (arg0[var0].unknown_4_ < var2) {
                var0++;
            }
            while (arg0[var1].unknown_4_ > var2) {
                var1--;
            }
            if (var0 >= var1) {
                break;
            }
            float var5 = arg0[var0].unknown_4_;
            int var6 = arg0[var0].unknown_0_;
            arg0[var0].unknown_4_ = arg0[var1].unknown_4_;
            arg0[var0].unknown_0_ = arg0[var1].unknown_0_;
            arg0[var1].unknown_4_ = var5;
            arg0[var1].unknown_0_ = var6;
            var0++;
            var1--;
        }
    }

    if (arg1 < var0 - 1) {
        func_020749ac(arg0, arg1, var0 - 1, arg3);
    }
    if (var1 + 1 < arg2) {
        func_020749ac(arg0, var1 + 1, arg2, arg3);
    }
}
