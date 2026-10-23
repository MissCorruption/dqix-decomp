#include <globaldefs.h>

struct Struct_0207fdcc_2;
struct Struct_0207fdcc;
extern "C" struct Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2*, int);
extern "C" int func_0204c7e0(unsigned char*);
extern "C" void func_020809c4(void*, int, int, short*, short*);

struct Struct_0205a254;
struct Struct_0205a330;

struct Struct_ov014_02186e2c {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0x15 - 0x8];
    unsigned char unknown_15_;
};

extern "C" struct Struct_ov014_02186e2c* func_0205a3d0(struct Struct_0205a254*, int);
extern "C" void func_0205a370(struct Struct_0205a254*, int);
extern "C" void func_0205a330(struct Struct_0205a330*, int);
extern "C" void func_0205ae8c(void*);

struct Struct_ov014_02186e2c_2 {
    char unknown_0_[0xc0];
    void* unknown_c0_;
    char unknown_c4_[0xd0 - 0xc4];
    short* unknown_d0_;
    char unknown_d4_[0xd8 - 0xd4];
    struct Struct_0205a254* unknown_d8_;
    char unknown_dc_[0xf8 - 0xdc];
    char unknown_f8_[0x164 - 0xf8];
    int unknown_164_;
    char unknown_168_[0x170 - 0x168];
    short unknown_170_;
};

// USA: func_ov014_02186e2c
extern "C" ARM void func_ov014_02186e2c(struct Struct_ov014_02186e2c_2* arg0) {
    struct Struct_0207fdcc* var0;
    struct Struct_ov014_02186e2c* var1;
    short var2, var3;
    short var4, var5;

    if (arg0->unknown_d0_ == NULL) return;
    if (arg0->unknown_170_ < 0) return;
    var0 = func_02081da8((struct Struct_0207fdcc_2*)arg0->unknown_c0_, arg0->unknown_170_);
    if (var0 == NULL) return;
    if (func_0204c7e0((unsigned char*)var0) == 0) return;

    func_020809c4(arg0->unknown_c0_, arg0->unknown_170_, *arg0->unknown_d0_, &var2, &var3);
    var2 -= 0x10;
    var3 -= 3;

    func_0205a370(arg0->unknown_d8_, 0);
    var1 = func_0205a3d0(arg0->unknown_d8_, 0);
    if (var1 != NULL) {
        var1->unknown_15_ |= 8;
    }
    func_0205a330((struct Struct_0205a330*)arg0->unknown_d8_, arg0->unknown_164_);
    var5 = var3;
    var4 = var2;
    var1 = func_0205a3d0(arg0->unknown_d8_, 0);
    if (var1 != NULL) {
        var1->unknown_4_ = var4;
        var1->unknown_6_ = var5;
    }
    func_0205ae8c(&arg0->unknown_f8_);
}
