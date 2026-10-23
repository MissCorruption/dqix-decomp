#ifndef SYSTEM_WIRELESS_SCAN_DESCRIPTOR_H
#define SYSTEM_WIRELESS_SCAN_DESCRIPTOR_H

struct Struct_ov031_0220ec04_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
    unsigned char unknown_c_[32];
    unsigned short unknown_2c_;
    unsigned short unknown_2e_;
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned short unknown_38_;
    unsigned short unknown_3a_;
    unsigned short unknown_3c_;
    unsigned short unknown_3e_;
    unsigned char unknown_40_[0x80];
};

struct Struct_ov031_0220ec04_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    int unknown_4_;
    Struct_ov031_0220ec04_2* unknown_8_;
    Struct_ov031_0220ec04_2* unknown_c_;
    Struct_ov031_0220ec04_3 unknown_10_;
};

extern "C" Struct_ov031_0220ec04_3* func_ov031_0220ec04(int arg0);
extern "C" Struct_ov031_0220ec04_2* func_ov031_0220ee50(int arg0);

#endif
