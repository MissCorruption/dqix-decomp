#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_0215f3d8 func_ov006_021607f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_02080fa8;
extern "C" void func_ov006_02159274(void* arg0, unsigned char* arg1, unsigned char* arg2, unsigned char* arg3);
extern "C" void func_ov006_0215f4dc(void* arg0);
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);
extern "C" void func_020813ec(void* arg0, int arg1);

struct Struct_ov006_021593b0 {
    unsigned char unknown_0_[R(0xc, 0x14)];
    void* unknown_14_;
    unsigned char unknown_18_[0x38b - R(0x10, 0x18)];
    unsigned char unknown_38b_;
    unsigned char unknown_38c_[0x431 - 0x38c];
    unsigned char unknown_431_;
};

// USA: func_ov006_021593b0
extern "C" ARM void func_ov006_021593b0(struct Struct_ov006_021593b0* arg0) {
    unsigned char var0[3];
    func_ov006_02159274(arg0, &var0[1], &var0[2], &var0[0]);
    if (var0[0] > 9) var0[0] = 9;
    if (var0[0] != 0) {
        unsigned char var1 = arg0->unknown_38b_;
        arg0->unknown_38b_ = var1 - 1;
        if (arg0->unknown_38b_ == 0) arg0->unknown_38b_ = 1;
        if (var1 != arg0->unknown_38b_) arg0->unknown_431_ = 1;
    }
    func_ov006_0215f4dc(arg0);
    func_02080fa8((struct Struct_02080fa8*)arg0->unknown_14_, 0x1f, arg0->unknown_38b_);
    func_020813ec(arg0->unknown_14_, 6);
}
