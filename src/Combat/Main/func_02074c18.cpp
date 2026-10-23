#include <globaldefs.h>

struct Struct_02074c18_2 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 4;
    unsigned short unknown_0_6_ : 1;
    unsigned short unknown_0_7_ : 1;
    unsigned short unknown_1_0_ : 5;
    unsigned short unknown_1_5_ : 1;
    unsigned short unknown_1_6_ : 2;
};

struct Struct_02074c18 {
    Struct_02074c18_2 unknown_0_;
    Struct_02074c18_2 unknown_2_;
    Struct_02074c18_2 unknown_4_;
    Struct_02074c18_2 unknown_6_;
    Struct_02074c18_2 unknown_8_;
    Struct_02074c18_2 unknown_a_;
    Struct_02074c18_2 unknown_c_;
    Struct_02074c18_2 unknown_e_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
};

#define REG_DB_BG0CNT (*(volatile unsigned short*)0x4000008)
#define REG_DB_BG1CNT (*(volatile unsigned short*)0x400000a)
#define REG_DB_BG2CNT (*(volatile unsigned short*)0x400000c)
#define REG_DB_BG3CNT (*(volatile unsigned short*)0x400000e)

// USA: func_02074c18
extern "C" ARM void func_02074c18(struct Struct_02074c18* arg0) {
    if (!arg0->unknown_10_) return;
    REG_DB_BG0CNT = (unsigned short)(((short)arg0->unknown_0_.unknown_1_6_ << 14) | (REG_DB_BG0CNT & 0x43) |
                                     ((short)arg0->unknown_0_.unknown_0_7_ << 7) | ((short)arg0->unknown_0_.unknown_1_0_ << 8) |
                                     ((short)arg0->unknown_0_.unknown_0_2_ << 2) | ((short)arg0->unknown_0_.unknown_1_5_ << 13));
    REG_DB_BG1CNT = (unsigned short)(((short)arg0->unknown_4_.unknown_1_6_ << 14) | (REG_DB_BG1CNT & 0x43) |
                                     ((short)arg0->unknown_4_.unknown_0_7_ << 7) | ((short)arg0->unknown_4_.unknown_1_0_ << 8) |
                                     ((short)arg0->unknown_4_.unknown_0_2_ << 2) | ((short)arg0->unknown_4_.unknown_1_5_ << 13));
    REG_DB_BG2CNT = (unsigned short)(((short)arg0->unknown_8_.unknown_1_6_ << 14) | (REG_DB_BG2CNT & 0x43) |
                                     ((short)arg0->unknown_8_.unknown_0_7_ << 7) | ((short)arg0->unknown_8_.unknown_1_0_ << 8) |
                                     ((short)arg0->unknown_8_.unknown_0_2_ << 2));
    REG_DB_BG3CNT = (unsigned short)(((short)arg0->unknown_c_.unknown_1_6_ << 14) | (REG_DB_BG3CNT & 0x43) |
                                     ((short)arg0->unknown_c_.unknown_0_7_ << 7) | ((short)arg0->unknown_c_.unknown_1_0_ << 8) |
                                     ((short)arg0->unknown_c_.unknown_0_2_ << 2));
    REG_DB_BG0CNT = (unsigned short)((REG_DB_BG0CNT & ~3) | arg0->unknown_0_.unknown_0_0_);
    REG_DB_BG1CNT = (unsigned short)((REG_DB_BG1CNT & ~3) | arg0->unknown_4_.unknown_0_0_);
    REG_DB_BG2CNT = (unsigned short)((REG_DB_BG2CNT & ~3) | arg0->unknown_8_.unknown_0_0_);
    REG_DB_BG3CNT = (unsigned short)((REG_DB_BG3CNT & ~3) | arg0->unknown_c_.unknown_0_0_);
    if (arg0->unknown_0_.unknown_0_6_) {
        REG_DB_BG0CNT |= 0x40;
    } else {
        REG_DB_BG0CNT &= ~0x40;
    }
    if (arg0->unknown_4_.unknown_0_6_) {
        REG_DB_BG1CNT |= 0x40;
    } else {
        REG_DB_BG1CNT &= ~0x40;
    }
    if (arg0->unknown_8_.unknown_0_6_) {
        REG_DB_BG2CNT |= 0x40;
    } else {
        REG_DB_BG2CNT &= ~0x40;
    }
    if (arg0->unknown_c_.unknown_0_6_) {
        REG_DB_BG3CNT |= 0x40;
    } else {
        REG_DB_BG3CNT &= ~0x40;
    }
}
