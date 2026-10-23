#include <globaldefs.h>

struct Struct_ov031_0223bbd8_2 {
    unsigned long unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov031_0223bbd8 {
    unsigned char unknown_0_[8];
    Struct_ov031_0223bbd8_2* unknown_8_;
    unsigned char unknown_c_;
};

static inline void inline_ov031_0223bbd8(const Struct_ov031_0223bbd8_2* arg0, unsigned long* arg1, unsigned long* arg2) {
    *arg1 = (arg0->unknown_0_ & 0x01ff0000UL) >> 16;
    *arg2 = arg0->unknown_0_ & 0xffUL;
}

static inline void inline_ov031_0223bbd8_2(Struct_ov031_0223bbd8_2* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = (arg0->unknown_0_ & ~0x01ff00ffUL) | (arg2 & 0xffUL) | ((arg1 & 0x1ffUL) << 16);
}

// USA: func_ov031_0223bbd8
extern "C" ARM void func_ov031_0223bbd8(Struct_ov031_0223bbd8* arg0, int arg1, int arg2, int arg3) {
    Struct_ov031_0223bbd8_2* var0 = arg0->unknown_8_;
    if (arg1 >= 0) {
        inline_ov031_0223bbd8_2(&var0[arg1], arg2, arg3);
        return;
    }
    int var1;
    int var2, var3;
    inline_ov031_0223bbd8(var0, (unsigned long*)&var2, (unsigned long*)&var3);
    inline_ov031_0223bbd8_2(var0, arg2, arg3);
    int var4 = arg2 - var2;
    int var5 = arg3 - var3;
    for (var1 = 1; var1 < arg0->unknown_c_; var1++) {
        int var6, var7;
        inline_ov031_0223bbd8(&var0[var1], (unsigned long*)&var6, (unsigned long*)&var7);
        inline_ov031_0223bbd8_2(&var0[var1], var6 + var4, var7 + var5);
    }
}
