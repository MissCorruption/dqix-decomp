#include <globaldefs.h>

struct Struct_ov000_0217feb0_2 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc7 - 0x50];
#else
    char unknown1_50_[0x87 - 0x50];
#endif
    unsigned char unknown_87_;
    char unknown_88_[0x448 - 0x88];
};

struct Struct_ov000_0217feb0 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x958 - 0x70];
    struct Struct_ov000_0217feb0_2 unknown_958_[1];
};

static inline struct Struct_ov000_0217feb0_2* inline_ov000_0217feb0(struct Struct_ov000_0217feb0* arg0, int arg1) {
    return &arg0->unknown_958_[arg0->unknown_6c_[arg1]];
}

// USA: func_ov000_0217feb0
extern "C" ARM void func_ov000_0217feb0(struct Struct_ov000_0217feb0* arg0, unsigned char arg1, int arg2) {
    if (arg2 < 0) {
        for (int var0 = 0; var0 < 4; var0++) {
            struct Struct_ov000_0217feb0_2* var1 = inline_ov000_0217feb0(arg0, var0);
            var1->unknown_87_ = arg1;
        }
    } else {
        for (int var2 = 0; var2 < 4; var2++) {
            struct Struct_ov000_0217feb0_2* var3 = inline_ov000_0217feb0(arg0, var2);
            if (arg2 == var3->unknown_4c_) {
                var3->unknown_87_ = arg1;
                return;
            }
        }
    }
}
