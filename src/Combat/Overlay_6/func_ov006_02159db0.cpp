// USA: func_ov006_02159db0
#include <globaldefs.h>

struct Struct_0207fdcc_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x2a];
#else
    unsigned char unknown1_0_[0x36];
#endif
    unsigned short unknown_36_;
};
struct Struct_02015554_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};
struct Struct_02081f20_2 {
    Struct_02015554_2* unknown_0_;
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
};
struct Struct_ov006_02159db0_2 {
    unsigned char unknown_0_[0x38];
    unsigned char unknown_38_, unknown_39_, unknown_3a_, unknown_3b_;
};
struct Struct_ov006_02159db0_3 {
    unsigned char unknown_0_[0x28];
    int unknown_28_[3];
};
struct Struct_020e280c {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    Struct_ov006_02159db0_2* unknown_c_;
    Struct_ov006_02159db0_3* unknown_10_;
};
struct Struct_02108760;
extern Struct_02108760 data_02108760;
extern "C" int func_020813ec(void*, int);
extern "C" void func_0208203c(Struct_02081f20_2*);
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" void func_02080c04(Struct_0207fdcc_2*, int);
extern "C" void func_020e280c(Struct_020e280c*, void*);
extern "C" void func_020e2d24(int*, int, int);

struct Struct_ov006_02159db0 {
#if defined(jpn)
    unsigned char unknown_0_[0xc];
    Struct_0207fdcc_2* unknown1_14_;
    Struct_020e280c* unknown_18_;
    unsigned char unknown_14_[0x3c - 0x14];
    short* unknown_44_;
    unsigned char unknown_40_[0x94 - 0x40];
    Struct_02081f20_2 unknown_9c_;
    unsigned char unknown_a0_[0x35e - 0xa0];
#else
    unsigned char unknown1_0_[0x14];
    Struct_0207fdcc_2* unknown1_14_;
    Struct_020e280c* unknown_18_;
    unsigned char unknown_1c_[0x44 - 0x1c];
    short* unknown_44_;
    unsigned char unknown_48_[0x9c - 0x48];
    Struct_02081f20_2 unknown_9c_;
    unsigned char unknown_a8_[0x35e - 0xa8];
#endif
    short unknown_35e_;
    unsigned char unknown_360_[0x36c - 0x360];
    short unknown_36c_;
    short unknown_36e_;
};

extern "C" ARM void func_ov006_02159db0(Struct_ov006_02159db0* arg0) {
    func_0205eaa0(&data_02108760, 5, 0);
    arg0->unknown_36e_ = 7;
    arg0->unknown_35e_ = arg0->unknown_36c_ = 0x22;
    arg0->unknown1_14_->unknown_36_ = arg0->unknown_36c_;
    func_020813ec(arg0->unknown1_14_, arg0->unknown_36e_);
    func_0208203c(&arg0->unknown_9c_);
    arg0->unknown_44_ = 0;
    if (arg0->unknown_18_ == 0)
        return;
    func_02080c04(arg0->unknown1_14_, arg0->unknown_36e_);
    func_020e280c(arg0->unknown_18_, (void*)-1);
#if defined(jpn)
    Struct_ov006_02159db0_2* var0 = arg0->unknown_18_->unknown_c_;
    var0->unknown_38_ = 0xc2;
    var0->unknown_39_ = 0x48;
#endif
    func_020e2d24(arg0->unknown_18_->unknown_10_->unknown_28_, 0x18, 1);
}
