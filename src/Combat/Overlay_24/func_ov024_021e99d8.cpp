#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"

struct Struct_ov024_021e99d8 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 12;
};

struct Struct_ov024_021e99d8_2 {
    char unknown_0_[0x20];
    struct Struct_ov024_021e99d8 unknown_20_;
};

struct Struct_ov024_021e99d8_3 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0x10 - 0x8];
    unsigned int unknown_10_;
    char unknown_14_[0x20 - 0x14];
    struct Struct_ov024_021e99d8 unknown_20_;
};

struct Struct_ov024_021e99d8_4 {
    char unknown_0_[0x20];
    short unknown_20_;
};

struct Struct_ov024_021e99d8_5 {
    char unknown_0_[2];
    short unknown_2_;
    char unknown_4_[0xb - 0x4];
    unsigned char unknown_b_0_ : 1;
    unsigned char unknown_b_1_ : 1;
    unsigned char unknown_b_2_ : 6;
    char unknown_c_[0x10 - 0xc];
    struct Struct_ov024_021e99d8_4* unknown_10_;
};

struct Struct_ov024_021e99d8_6 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov024_021e99d8_7 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    unsigned char* unknown_150_;
};

extern "C" void* func_02079e2c(char* arg0, int arg1);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" int func_020850d0(unsigned char* arg0);

static inline int inline_ov000_02169850(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021e99d8
extern "C" ARM int func_ov024_021e99d8(struct Struct_ov024_021e99d8_6* arg0, struct Struct_ov024_021e99d8_5* arg1,
                                       struct Struct_ov024_021e99d8_3* arg2) {
    int var0 = arg1->unknown_10_->unknown_20_;
    if ((arg2->unknown_10_ & 0x2000000) && arg0->unknown_14_ <= 0) {
        if (inline_ov000_02169850(var0)) {
            arg1->unknown_b_1_ = 1;
            return 0x1ef;
        }
    }
    if (arg2->unknown_4_0_ == 0x1f8) {
        struct Struct_ov024_021e99d8_2* var1 =
            (struct Struct_ov024_021e99d8_2*)func_02079e2c((char*)func_020797dc(), arg1->unknown_2_);
        if (!var1) {
            return 0;
        }
        if ((unsigned short)arg1->unknown_2_ == 0x1c || (unsigned short)arg1->unknown_2_ == 0x247) {
            return 0x2e;
        }
        return func_ov024_021da644(var0, var1->unknown_20_.unknown_0_0_, var1->unknown_20_.unknown_1_2_);
    }
    int var2 = func_ov024_021da644(var0, arg2->unknown_20_.unknown_0_0_, arg2->unknown_20_.unknown_1_2_);
    if (var2 == 1 && inline_ov000_02169850(var0)) {
        struct Struct_ov024_021e99d8_7* var3 =
            (struct Struct_ov024_021e99d8_7*)func_0200ff1c(GameState::GetInstance(), var0);
        if (var3 && (arg2->unknown_10_ & 0x100000)) {
            if (func_020850d0(var3->unknown_150_)) {
                return 0x10;
            }
        }
    }
    return var2;
}
