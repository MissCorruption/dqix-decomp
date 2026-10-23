#include <globaldefs.h>

extern "C" unsigned int func_ov027_021dd024(void);
extern "C" unsigned short func_ov027_021dd038(void);
extern "C" void func_ov027_021dae1c(void);
extern "C" int func_020d69cc(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned char arg5);

struct Struct_ov027_021daecc {
    unsigned char unknown_0_[0x4b4];
    unsigned char unknown_4b4_;
    unsigned char unknown_4b5_[0x4bc - 0x4b5];
    Struct_ov027_021daecc* unknown_4bc_;
};

struct Struct_ov027_021dd940_5 {
    unsigned char unknown_0_[0x18];
    Struct_ov027_021daecc* unknown_18_;
    Struct_ov027_021daecc* unknown_1c_;
    unsigned char unknown_20_[0x24 - 0x20];
    unsigned char unknown_24_;
    unsigned char unknown_25_;
    unsigned char unknown_26_;
};

extern Struct_ov027_021dd940_5 data_ov027_021dd940;
extern int data_ov027_021dd980;

// USA: func_ov027_021daecc
#pragma optimize_for_size off
extern "C" ARM int func_ov027_021daecc(void) {
    Struct_ov027_021daecc* var0 = data_ov027_021dd940.unknown_18_;
    if (var0 == 0) {
        unsigned int var1 = func_ov027_021dd024();
        func_020d69cc(0, (int)&data_ov027_021dd980, 0x70, var1, func_ov027_021dd038(), 8);
        return 0;
    }
    Struct_ov027_021daecc* var2 = data_ov027_021dd940.unknown_1c_;
    if (var2 == 0 || var2->unknown_4bc_ == 0) {
        var2 = *(Struct_ov027_021daecc* *)&data_ov027_021dd940.unknown_18_;
    } else {
        var2 = var2->unknown_4bc_;
    }
    data_ov027_021dd940.unknown_1c_ = var2;
    func_ov027_021dae1c();
    data_ov027_021dd940.unknown_26_ = data_ov027_021dd940.unknown_1c_->unknown_4b4_;
    data_ov027_021dd940.unknown_24_ = 2;
    return 1;
}
