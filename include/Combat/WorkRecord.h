#ifndef COMBAT_WORK_RECORD_H
#define COMBAT_WORK_RECORD_H

struct Struct_0206bf2c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_0_ : 2;
    unsigned char unknown_a_2_ : 1;
    unsigned char unknown_a_3_ : 3;
    unsigned char unknown_a_6_ : 1;
    unsigned char unknown_a_7_ : 1;
    unsigned char unknown_b_;
    unsigned int unknown_c_;
    union {
        unsigned char unknown_10_[0xc];
        int unknown1_10_[3];
    };
    unsigned short unknown_1c_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;
    unsigned short unknown_20_;
    unsigned char unknown_22_[2];
    unsigned char unknown_24_[0x10];
    unsigned int unknown_34_;
    unsigned int unknown_38_;
    unsigned int unknown_3c_;
    unsigned int unknown_40_;
    unsigned short unknown_44_;
    short unknown_46_;
    unsigned char unknown_48_[0xc];
    unsigned int unknown_54_;
    unsigned int unknown_58_;
    unsigned int unknown_5c_;
    unsigned int unknown_60_;
    Struct_0206bf2c *unknown_64_;
    Struct_0206bf2c *unknown_68_;
    Struct_0206bf2c *unknown_6c_;
    Struct_0206bf2c *unknown_70_;
};

extern "C" void func_0206bf2c(Struct_0206bf2c *arg0);
extern "C" void func_0206db48(void *arg0, Struct_0206bf2c *arg1);

#endif
