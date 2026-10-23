#if defined(jpn)
#define R(j,u) (j)
#define data_ov006_0215ffb4 data_ov006_02161318
#define data_ov006_0215ffc0 data_ov006_0216131b
#define data_ov006_0215ffc4 data_ov006_02161328
#define data_ov006_0215ffca data_ov006_02161336
#define data_ov006_0215ffe2 data_ov006_0216132e
#define data_ov006_0215fff4 data_ov006_02161346
#define func_ov006_021547c8 func_ov006_02155f30
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_0207fdcc_2 {
    char unknown_0_[R(0x2a, 0x36)];
    short unknown_36_;
};

struct Struct_02081f20_2;
struct Struct_ov006_021591ec;

struct Struct_ov006_02157a60 {
    char unknown_0_[R(0xc, 0x14)];
    Struct_0207fdcc_2* unknown_14_;
    char unknown_18_[0x2c];
    short* unknown_44_;
    char unknown_48_[0x54];
    char unknown_9c_[0x64];
    char unknown_100_[R(0x26c, 0x264)];
    short unknown_364_;
    char unknown_366_[0x8];
    short unknown_36e_;
    short unknown_370_;
    char unknown_372_[0x19];
    unsigned char unknown_38b_;
    char unknown_38c_[0x8];
    unsigned short unknown_394_;
};

extern "C" void func_02080c20(Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_ov006_021573c8(void* arg0);
extern "C" unsigned short func_ov006_021591ec(Struct_ov006_021591ec* arg0);
extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_ov006_0215f4dc(Struct_ov006_02157a60* arg0);
extern "C" void func_ov006_0215f740(Struct_ov006_02157a60* arg0);
extern "C" void func_0208203c(Struct_02081f20_2* arg0);
extern "C" void func_02081ea4(Struct_0207fdcc_2* arg0, int arg1, int arg2);

// USA: func_ov006_0215943c
extern "C" ARM void func_ov006_0215943c(Struct_ov006_02157a60* arg0) {
    func_02080c20(arg0->unknown_14_, 0);
    arg0->unknown_394_ |= 0x10;
    arg0->unknown_370_ = -1;
    arg0->unknown_38b_ = 0;
    func_ov006_021573c8(arg0->unknown_100_);
    unsigned short var0 = func_ov006_021591ec((Struct_ov006_021591ec*)arg0);
    arg0->unknown_394_ &= ~4;
    if (var0 > 8)
        arg0->unknown_394_ |= 4;
    arg0->unknown_36e_ = 0x11;
    arg0->unknown_364_ = -1;
    if (arg0->unknown_364_ < 0)
        arg0->unknown_364_ = func_02080468(arg0->unknown_14_, arg0->unknown_36e_);
    arg0->unknown_14_->unknown_36_ = arg0->unknown_364_;
    func_ov006_0215f4dc(arg0);
    func_ov006_0215f740(arg0);
    func_0208203c((Struct_02081f20_2*)arg0->unknown_9c_);
    arg0->unknown_44_ = 0;
    func_02081ea4(arg0->unknown_14_, arg0->unknown_36e_, 0);
}
