#include <globaldefs.h>

extern "C" void _ZN8Vector3iaSERKS_(int* arg0, int* arg1);

struct Struct_02033834;
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

struct Struct_020e7b24 { unsigned int unknown_0_[3]; };
extern "C" const struct Struct_020e7b24 data_020e7b24;

struct Struct_02049e00 {
    unsigned char unknown_0_[0x10];
    unsigned int unknown_10_, unknown_14_, unknown_18_;
    unsigned char unknown_1c_[4];
    unsigned int unknown_20_;
};

struct Struct_02049e00_2 {
    unsigned char unknown_0_[0x44];
    unsigned int unknown_44_[3];
    unsigned char unknown_50_[0xec];
    struct Struct_02049e00* unknown_13c_;
};

// USA: func_02049e00
extern "C" ARM void func_02049e00(struct Struct_02049e00_2* arg0) {
    if (arg0->unknown_13c_ == NULL) return;
    arg0->unknown_13c_->unknown_20_ &= ~0x22;
    Struct_02049e00* var0 = arg0->unknown_13c_;
    var0->unknown_20_ |= 1;
    struct Struct_020e7b24 var1 = data_020e7b24;
    var1.unknown_0_[0] = arg0->unknown_13c_->unknown_10_;
    var1.unknown_0_[2] = arg0->unknown_13c_->unknown_18_;
    unsigned int var2 = arg0->unknown_13c_->unknown_14_;
    _ZN8Vector3iaSERKS_((int*)arg0->unknown_44_, (int*)&var1);
    func_02033874((struct Struct_02033834*)arg0, var2);
}
