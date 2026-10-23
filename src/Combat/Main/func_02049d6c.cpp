#include <globaldefs.h>

struct Struct_02033834;
extern "C" void _ZN8Vector3iaSERKS_(int* arg0, int* arg1);
extern "C" void func_02048cf0(void* arg0, int arg1);
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

struct Struct_020e7b18 { unsigned int unknown_0_[3]; };
extern "C" const struct Struct_020e7b18 data_020e7b18;

struct Struct_02049d6c {
    unsigned int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned char unknown_10_[0x10];
    unsigned int unknown_20_;
};

struct Struct_02049d6c_2 {
    unsigned char unknown_0_[0x44];
    unsigned int unknown_44_[3];
    unsigned char unknown_50_[0xec];
    struct Struct_02049d6c* unknown_13c_;
};

// USA: func_02049d6c
extern "C" ARM void func_02049d6c(struct Struct_02049d6c_2* arg0) {
    if (arg0->unknown_13c_ == NULL) return;
    func_02048cf0(arg0, 0);
    arg0->unknown_13c_->unknown_20_ &= ~0x21;
    struct Struct_02049d6c* var0 = arg0->unknown_13c_;
    var0->unknown_20_ |= 2;
    struct Struct_020e7b18 var1 = data_020e7b18;
    var1.unknown_0_[0] = arg0->unknown_13c_->unknown_4_;
    var1.unknown_0_[2] = arg0->unknown_13c_->unknown_c_;
    unsigned int var2 = arg0->unknown_13c_->unknown_8_;
    _ZN8Vector3iaSERKS_((int*)arg0->unknown_44_, (int*)&var1);
    func_02033874((struct Struct_02033834*)arg0, var2);
}
