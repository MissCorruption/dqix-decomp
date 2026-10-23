#include <globaldefs.h>

struct Struct_020473c8_2 {
    char unknown_0_[8];
    int unknown_8_;
};

struct Struct_020473c8_3 {
    int unknown_0_;
    struct Struct_020473c8_2* unknown_4_;
};

struct Struct_020473c8 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 6;
};

struct Struct_02015ef4_2 {
    char unknown_0_[0xc];
    struct Struct_020473c8_3* unknown_c_; // 0xc
    char unknown_10_[0x70 - 0xc - 4];
    int unknown_70_; // 0x70
    int unknown_74_; // 0x74
    char unknown_78_[0x82 - 0x78];
    short unknown_82_; // 0x82
    struct Struct_020473c8 unknown_84_; // 0x84
};

extern "C" void func_02047554(struct Struct_02015ef4_2* arg0, int arg1, int arg2);

// USA: func_020473c8
extern "C" ARM void func_020473c8(struct Struct_02015ef4_2* arg0, int arg1) {
    struct Struct_020473c8_3* var0;
    struct Struct_020473c8_2* var1;
    if (!arg0->unknown_84_.unknown_0_0_) {
        return;
    }
    if (!arg0->unknown_84_.unknown_0_1_) {
        return;
    }
    if (arg0->unknown_82_ <= 0) {
        return;
    }
    if (arg0->unknown_c_ == NULL) {
        return;
    }
    var0 = &arg0->unknown_c_[arg0->unknown_74_];
    var1 = &var0->unknown_4_[arg0->unknown_70_];
    *(int*)0x4000444 = 0;
    func_02047554(arg0, var1->unknown_8_, arg1);
    *(int*)0x4000448 = 1;
}
