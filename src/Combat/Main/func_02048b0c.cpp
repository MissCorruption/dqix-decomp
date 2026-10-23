#include <globaldefs.h>

extern "C" void func_020891cc(void* arg0);

struct Struct_02048b0c_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_[0x10];
    unsigned int unknown_14_;
    char unknown_18_[0xc];
    unsigned char unknown_24_;
};

struct Struct_02048b0c {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
};

struct Struct_02048b0c_2 {
    char unknown_0_[0x130];
    struct Struct_02048b0c* unknown_130_;
    unsigned int unknown_134_;
    struct Struct_02048b0c_3* unknown_138_;
};

// USA: func_02048b0c
extern "C" ARM void func_02048b0c(struct Struct_02048b0c_2* arg0, int arg1) {
    arg0->unknown_130_->unknown_4_ = arg0->unknown_138_->unknown_0_;
    arg0->unknown_130_->unknown_6_ = arg0->unknown_138_->unknown_2_;

    int var0;
    var0 = arg0->unknown_138_->unknown_24_;
    var0 = var0 - 1;
    if (var0 < 0) {
        var0 = 0;
    }
    if (arg1 != 0)
        arg0->unknown_130_->unknown_8_ = var0;
    else
        arg0->unknown_130_->unknown_8_ = 0;

    arg0->unknown_130_->unknown_0_ = 0;

    if ((arg0->unknown_138_->unknown_14_ & 2) != 0) {
        arg0->unknown_130_->unknown_0_ |= 2;
    }
    if ((arg0->unknown_138_->unknown_14_ & 1) != 0) {
        arg0->unknown_130_->unknown_0_ = 1;
    }
    if ((arg0->unknown_138_->unknown_14_ & 4) != 0) {
        arg0->unknown_130_->unknown_0_ |= 4;
    }

    func_020891cc(arg0->unknown_138_);
}