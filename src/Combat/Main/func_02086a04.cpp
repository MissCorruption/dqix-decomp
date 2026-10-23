#include <globaldefs.h>

extern "C" void* func_02086868(void*, void*);

struct Struct_02086a04_2 {
    signed char unknown_0_0_ : 6;
    char unknown_1_[0x23c - 1];
};

struct Struct_02086a04 {
    char unknown_0_[0xf80];
    struct Struct_02086a04_2 unknown_f80_[13];
    unsigned char unknown_2c8c_;
};

// USA: func_02086a04
extern "C" ARM int func_02086a04(struct Struct_02086a04* arg0, int arg1) {
    if (arg1 < 0) return 0;
    int var0 = 0;
    unsigned char var1;
    for (var1 = 0; var1 < arg0->unknown_2c8c_; var1++) {
        struct Struct_02086a04_2* var2 = &arg0->unknown_f80_[var1];
        if (arg1 == var2->unknown_0_0_) {
            var2->unknown_0_0_ = -1;
            arg0->unknown_2c8c_--;
            var0 = 1;
            break;
        }
    }
    if (var0) {
        unsigned char var3;
        for (var3 = 0; var3 < arg0->unknown_2c8c_; var3++) {
            struct Struct_02086a04_2* var4 = &arg0->unknown_f80_[var3];
            if (var4->unknown_0_0_ < 0) {
                int var5 = var3 + 1;
                struct Struct_02086a04_2* var6 = &arg0->unknown_f80_[var5];
                func_02086868(var4, var6);
                var6->unknown_0_0_ = -1;
            }
        }
    }
    return var0;
}
