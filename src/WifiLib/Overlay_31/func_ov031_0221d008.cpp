#include <globaldefs.h>

struct Struct_ov017_021d1118 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[1];
};
struct Struct_ov031_0224e6e0_5 {
    unsigned char unknown_0_[0x10];
    int unknown_10_;
    unsigned char unknown_14_[0x10];
    unsigned char* unknown_24_;
    int unknown_28_;
    unsigned int unknown_2c_;
    int unknown_30_;
    unsigned int unknown_34_;
};
struct Struct_ov031_0224e700_2 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
};
extern unsigned char data_ov031_0224f440[8];
extern Struct_ov031_0224e6e0_5 data_ov031_0224e6e0;
extern unsigned char data_ov031_0224e704[0x1c];
extern Struct_ov031_0224e700_2 data_ov031_0224e700;
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);

// USA: func_ov031_0221d008
extern "C" THUMB void func_ov031_0221d008(Struct_ov017_021d1118* arg0) {
    func_ov031_0221e52c(data_ov031_0224f440, 0, 8);
    data_ov031_0224e6e0.unknown_10_ = 1;
    func_ov031_0221e52c(data_ov031_0224e704, 0, 0x1c);
    data_ov031_0224e6e0.unknown_24_ = arg0->unknown_6_;
    data_ov031_0224e6e0.unknown_28_ = arg0->unknown_4_;
    data_ov031_0224e6e0.unknown_2c_ = arg0->unknown_0_ & 0xf;
    data_ov031_0224e700.unknown_1d_ = arg0->unknown_2_;
    data_ov031_0224e6e0.unknown_30_ = 0;
    data_ov031_0224e6e0.unknown_34_ = 0xc0a80b01;
    data_ov031_0224e700.unknown_1c_ = 0;
}
