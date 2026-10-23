#include <globaldefs.h>

struct Struct_ov031_0222fe30_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};
struct Struct_ov031_0222fe30 {
    char unknown_0_[0x18];
    Struct_ov031_0222fe30_2* unknown_18_[5];
    Struct_ov031_0222fe30_2* unknown_2c_;
    Struct_ov031_0222fe30_2* unknown_30_;
};
struct Struct_ov031_02290ca0_11 {
    int unknown_0_;
    int unknown_4_;
    Struct_ov031_0222fe30* unknown_8_;
};
extern Struct_ov031_02290ca0_11 data_ov031_02290ca0;
extern unsigned char data_ov031_02248f86[];
extern "C" int func_ov031_022305e8(int);
extern "C" void func_ov031_0223bdb0(int, int, void*);

static inline void inline_ov031_0222fe30(Struct_ov031_0222fe30_2* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = (arg0->unknown_0_ & ~(0xffu | 0x1ff0000u)) |
        (arg2 & 0xff) | ((arg1 & 0x1ff) << 16);
}

// USA: func_ov031_0222fe30
extern "C" ARM void func_ov031_0222fe30(int arg0, int arg1, int arg2) {
    unsigned short var0[5];
    var0[0] = 0xcc;
    var0[1] = 0xc0;
    var0[2] = 0xc0;
    var0[3] = 0x8f;
    var0[4] = 0x8f;
    Struct_ov031_0222fe30_2** var1 = &data_ov031_02290ca0.unknown_8_->unknown_18_[arg2];
    if ((unsigned int)(arg0 - 1) <= 1) {
        if (func_ov031_022305e8(arg2) == 2)
            var1 = &data_ov031_02290ca0.unknown_8_->unknown_2c_;
        else
            var1 = &data_ov031_02290ca0.unknown_8_->unknown_30_;
    }
    unsigned char* var2 = data_ov031_02248f86 + arg0 * 3;
    int var3 = var2[arg1];
    if (var3) {
        func_ov031_0223bdb0(0, var3, *var1);
        inline_ov031_0222fe30(*var1, var0[arg0], 0);
        (*var1)->unknown_4_ = ((*var1)->unknown_4_ & ~0xc00) | 0xc00;
        return;
    }
    inline_ov031_0222fe30(*var1, 0x100, 0);
}
