#include <globaldefs.h>

extern "C" int rand(void);

struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" extern int Vector3fix_Distance(struct Struct_02028460_3* arg0, struct Struct_02028460_3* arg1);

struct Struct_020409b0 {
    char unknown_0_[0x14];
    void* unknown_14_;
    void* unknown_18_;
};
extern "C" int func_020409b0(struct Struct_020409b0* arg0, int arg1);

struct Struct_0204117c {
    int unknown_0_, unknown_4_, unknown_8_;
    int unknown_c_;
    struct Struct_0204117c* unknown_10_;
};

struct Struct_0204117c_2 {
    unsigned char unknown_0_[0x1f];
    unsigned char unknown_1f_;
    unsigned char unknown_20_[0x22 - 0x20];
    unsigned char unknown_22_;
    unsigned char unknown_23_[0x34 - 0x23];
    struct Struct_0204117c* unknown_34_;
};

struct Struct_02040c2c_5 {
    unsigned char unknown_0_[0xc];
    struct Struct_0204117c_2* unknown_c_;
};

// USA: func_0204117c
extern "C" ARM void func_0204117c(struct Struct_02040c2c_5* arg0, struct Struct_02028460_3* arg1) {
    struct Struct_0204117c* var0 = arg0->unknown_c_->unknown_34_;
    while (var0 != NULL) {
        if (var0->unknown_c_ != 0) {
            if (Vector3fix_Distance((struct Struct_02028460_3*)var0, arg1) != 0) {
                func_020409b0((struct Struct_020409b0*)arg0, (int)var0);
                goto epilogue;
            }
            break;
        } else {
            var0 = var0->unknown_10_;
        }
    }
    var0->unknown_c_ = 0;
    var0 = var0->unknown_10_;
    if (arg0->unknown_c_->unknown_1f_ == 9) {
        int var1 = rand() % arg0->unknown_c_->unknown_22_;
        int var2;
        for (var2 = 0; var2 < var1; var2++) {
            var0 = var0->unknown_10_;
        }
    }
    {
        struct Struct_02028460_3 var3;
        var3.unknown_0_ = var0->unknown_0_;
        var3.unknown_4_ = var0->unknown_4_;
        var3.unknown_8_ = var0->unknown_8_;
        var0->unknown_c_ = 1;
        func_020409b0((struct Struct_020409b0*)arg0, (int)&var3);
    }
epilogue:;
}
