#include <globaldefs.h>

struct Struct_020b0e6c;
extern "C" int func_020b0e6c(struct Struct_020b0e6c* arg0, unsigned int arg1);

struct Struct_020b0eb4;
extern "C" void* func_020b0eb4(struct Struct_020b0eb4** arg0, unsigned int arg1);

struct Struct_020b1d70_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[3];
    unsigned char unknown_7_;
};

struct Struct_020b1d70_2 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    unsigned char unknown_4_[4];
    struct Struct_020b1d70_3* unknown_8_;
};

struct Struct_020b1d70_4 {
    signed char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_;
};

struct Struct_020b1d70;

struct Struct_020b1d70_5 {
    void (*unknown_0_)(struct Struct_020b1d70* paramA, struct Struct_020b1d70_2** paramB, int a, int b, int e, void* loc);
};

struct Struct_020b1d70 {
    unsigned char unknown_0_[0x14];
    struct Struct_020b1d70_5* unknown_14_;
};

struct Struct_020b1d70_6 {
    struct Struct_020b1d70_4* unknown_0_;
    void* unknown_4_;
};

// USA: func_020b1d70
extern "C" ARM int func_020b1d70(struct Struct_020b1d70* arg0, struct Struct_020b1d70_2** arg1, int arg2, int arg3, int arg4, unsigned short arg5) {
    int var0 = func_020b0e6c((struct Struct_020b0e6c*)arg1, arg5);
    if (var0 == 0xffff) {
        var0 = (*arg1)->unknown_2_;
    }

    struct Struct_020b1d70_4* var1 = (struct Struct_020b1d70_4*)func_020b0eb4((struct Struct_020b0eb4**)arg1, var0);

    struct Struct_020b1d70_6 var2;
    var2.unknown_0_ = var1;
    var2.unknown_4_ = (char*)(*arg1)->unknown_8_ + 8 + var0 * (*arg1)->unknown_8_->unknown_2_;

    struct Struct_020b1d70_3* var3 = (*arg1)->unknown_8_;
    switch (var3->unknown_7_) {
    case 0:
    case 7:
        arg2 += var1->unknown_0_;
        break;
    case 1:
    case 2:
        arg2 -= var3->unknown_0_;
        arg3 += var1->unknown_0_;
        break;
    case 3:
    case 4:
        arg2 -= var1->unknown_0_ + var1->unknown_1_;
        arg3 -= var3->unknown_1_;
        break;
    case 5:
    case 6:
        arg3 -= var1->unknown_0_ + var3->unknown_1_;
        break;
    default:
        break;
    }

    arg0->unknown_14_->unknown_0_(arg0, arg1, arg2, arg3, arg4, &var2);

    return var2.unknown_0_->unknown_2_;
}
