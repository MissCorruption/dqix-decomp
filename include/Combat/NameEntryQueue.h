#ifndef COMBAT_NAME_ENTRY_QUEUE_H
#define COMBAT_NAME_ENTRY_QUEUE_H

struct Struct_ov017_02195214 {
    unsigned char unknown_0_[12];
};

struct Struct_ov017_021941fc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    Struct_ov017_02195214 unknown_2_;
    unsigned char unknown_e_;
};

extern "C" void func_ov017_02195214(Struct_ov017_021941fc *arg0, Struct_ov017_021941fc *arg1);

struct Struct_ov017_02195250 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    Struct_ov017_021941fc unknown_2_;
};

struct Struct_ov017_02195250_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x40d0];
#else
    unsigned char unknown1_0_[0x42f0];
#endif
    unsigned char unknown_42f0_;
    Struct_ov017_021941fc unknown_42f1_[3];
    unsigned char unknown_431e_;
#if defined(jpn)
    unsigned char unknown_40ff_[0x416c - 0x40ff];
#else
    unsigned char unknown_431f_[0x441c - 0x431f];
#endif
    Struct_ov017_02195250 *unknown_441c_;
};

#endif
