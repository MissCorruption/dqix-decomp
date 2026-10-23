#include <globaldefs.h>

struct Struct_020439b0;
extern "C" ARM void func_020e2cc4(struct Struct_020439b0*, int);

struct Struct_020e13dc;
extern "C" ARM void func_020e13dc(struct Struct_020e13dc*);

extern "C" ARM void func_020e2d4c(unsigned char*, unsigned char);

struct Struct_020439b0_3;
extern "C" ARM void func_020e2d2c(struct Struct_020439b0_3*, int, int, int, int);

struct Struct_020439b0_4;
extern "C" ARM void func_020e2c34(struct Struct_020439b0_4*);

struct Struct_020e1a74 {
    unsigned char unknown_0_[0x38];
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_[2];
    unsigned char unknown_3e_;
    union {
        unsigned char unknown_3f_;
        struct {
            unsigned char unknown_3f_0_ : 1;
            unsigned char unknown_3f_1_ : 1;
        };
    };
};

struct Struct_020e1a74_2 {
    char unknown_0_[4];
    struct Struct_020e1a74* unknown_4_;
};

// USA: func_020e1a74
extern "C" ARM void func_020e1a74(struct Struct_020e1a74_2* arg0) {
    if (arg0->unknown_4_ == 0) return;
    if (arg0->unknown_4_->unknown_3f_1_) {
        func_020e2cc4((struct Struct_020439b0*)((char*)arg0 + 0x28), 0);
        func_020e13dc((struct Struct_020e13dc*)((char*)arg0->unknown_4_ + 0xc));
        arg0->unknown_4_->unknown_3f_ &= ~2;
    }
    if (arg0->unknown_4_->unknown_3f_0_) {
        func_020e2d4c((unsigned char*)((char*)arg0 + 0x28), arg0->unknown_4_->unknown_3e_);
        int var0 = arg0->unknown_4_->unknown_38_ + 2;
        int var1 = arg0->unknown_4_->unknown_39_ + 2;
        int var2 = arg0->unknown_4_->unknown_3a_ - 4;
        int var3 = arg0->unknown_4_->unknown_3b_ - 4;
        func_020e2d2c((struct Struct_020439b0_3*)((char*)arg0 + 0x28), var0, var1, var2, var3);
        func_020e2c34((struct Struct_020439b0_4*)((char*)arg0 + 0x28));
    }
}
