#include <globaldefs.h>

extern "C" void* func_02086868(void*, void*);

struct Struct_02086778_2 {
    signed char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
    char unknown_1_[0x23c - 1];
};

struct Struct_02086778 {
    char unknown_0_[0xf80];
    struct Struct_02086778_2 unknown_f80_[13];
    unsigned char unknown_2c8c_;
};

// USA: func_02086778
extern "C" ARM int func_02086778(void* arg0, struct Struct_02086778_2* arg1, unsigned char arg2, unsigned char arg3) {
    struct Struct_02086778* var0 = (struct Struct_02086778*)arg0;
    signed char var1 = -1;
    signed char var2 = 0;
    int var3 = 0;
    for (var2 = 0; var2 < 16; var2++) {
        bool var4 = var3;
        unsigned char var5 = var3;
        for (; var5 < var0->unknown_2c8c_; var5++) {
            if (var2 == var0->unknown_f80_[var5].unknown_0_0_) {
                var4 = true;
                break;
            }
        }
        if (!var4) {
            var1 = var2;
            break;
        }
    }
    if (var1 < 0) {
        return 0;
    }
    arg1->unknown_0_0_ = var1;
    arg1->unknown_0_6_ = arg2;
    arg1->unknown_0_7_ = arg3;
    func_02086868(&var0->unknown_f80_[var0->unknown_2c8c_], arg1);
    var0->unknown_2c8c_++;
    return 1;
}