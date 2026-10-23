#include <globaldefs.h>

struct Struct_ov031_0223bab4_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
};

struct Struct_ov031_0223bab4 {
    unsigned char unknown_0_[0x8];
    Struct_ov031_0223bab4_2* unknown_8_;
    unsigned char unknown_c_;
};

// USA: func_ov031_0223bab4
extern "C" ARM void func_ov031_0223bab4(void* arg0, int arg1, int arg2, int arg3) {
    Struct_ov031_0223bab4* var0 = (Struct_ov031_0223bab4*)arg0;
    Struct_ov031_0223bab4_2* var1 = var0->unknown_8_;
    unsigned int var2 = 0xc1fffcff;
    if (arg1 >= 0) {
        if (arg2 != 0x100 && arg2 != 0x300) {
            unsigned int var3 = var1[arg1].unknown_0_ & var2;
            var1[arg1].unknown_0_ = var3 | arg2;
        } else {
            unsigned int var4 = var1[arg1].unknown_0_ & var2;
            var1[arg1].unknown_0_ = (var4 | arg2) | (arg3 << 0x19);
        }
        return;
    }
    for (arg1 = 0; arg1 < var0->unknown_c_; arg1++) {
        if (arg2 != 0x100 && arg2 != 0x300) {
            unsigned int var5 = var1[arg1].unknown_0_ & var2;
            var1[arg1].unknown_0_ = var5 | arg2;
        } else {
            unsigned int var6 = var1[arg1].unknown_0_ & var2;
            var1[arg1].unknown_0_ = (var6 | arg2) | (arg3 << 0x19);
        }
    }
}
