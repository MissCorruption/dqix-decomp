#include <globaldefs.h>

struct Struct_02046b8c_2 {
    signed char unknown_0_;
    char unknown_1_[3];
    struct Struct_02046b8c_2* unknown_4_;
};

struct Struct_02046b8c {
    struct Struct_02046b8c_2* unknown_0_;
    struct Struct_02046b8c_2* unknown_4_;
};

// USA: func_02046b8c
extern "C" ARM void func_02046b8c(struct Struct_02046b8c* arg0, int arg1) {
    struct Struct_02046b8c_2* var0;
    struct Struct_02046b8c_2* var1;
    struct Struct_02046b8c_2* var2 = arg0->unknown_0_;
    struct Struct_02046b8c_2* var3 = var2;
    while (var3 != 0) {
        var3 = var3->unknown_4_;
    }
    var0 = 0;
    var1 = 0;
    while (var2 != 0) {
        struct Struct_02046b8c_2* var4 = var2->unknown_4_;
        if (var2->unknown_0_ == arg1) {
            if (var0 != 0) {
                var0->unknown_4_ = var4;
            } else {
                arg0->unknown_0_ = var4;
            }
            var2->unknown_4_ = 0;
            if (var1 != 0) {
                struct Struct_02046b8c_2* var5 = var1;
                struct Struct_02046b8c_2* var6;
                while ((var6 = var5->unknown_4_) != 0) {
                    var5 = var6;
                }
                var5->unknown_4_ = var2;
            } else {
                var1 = var2;
            }
        } else {
            var0 = var2;
        }
        var2 = var4;
    }
    if (var1 != 0) {
        var3 = var1;
        while (var3->unknown_4_ != 0) {
            var3 = var3->unknown_4_;
        }
        struct Struct_02046b8c_2* var7 = arg0->unknown_0_;
        var3->unknown_4_ = var7;
        arg0->unknown_0_ = var1;
        var3 = var1;
        while (var3->unknown_4_ != 0) {
            var3 = var3->unknown_4_;
        }
        arg0->unknown_4_ = var3;
        var3 = arg0->unknown_0_;
        while (var3 != 0) {
            var3 = var3->unknown_4_;
        }
    }
}