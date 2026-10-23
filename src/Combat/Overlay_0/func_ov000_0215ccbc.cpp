#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215ccbc {
    unsigned short unknown_0_0_:2;
    unsigned short unknown_0_2_:4;
    unsigned short unknown_0_6_:10;
};

struct Struct_ov000_021584e8 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0xc - 8];
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    short unknown_12_;
    short unknown_14_;
    char unknown_16_[0x18 - 0x16];
    int unknown_18_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
};

// USA: func_ov000_0215ccbc
extern "C" ARM void func_ov000_0215ccbc(int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                                 short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7) {
    if (arg1 == NULL) return;
    arg1->unknown_c_ = arg3;
    arg1->unknown_e_ = arg4;
    arg1->unknown_10_ = arg5;
    arg1->unknown_12_ = arg2->currentStats_->primaryStats.maxHP;
    arg1->unknown_14_ = arg2->currentStats_->primaryStats.maxMP;
    arg1->unknown_18_ = *(int*)((char*)arg2->currentStats_->unk1 + 0);
    arg1->unknown_1d_ = ((struct Struct_ov000_0215ccbc*)((char*)arg2->currentStats_->unk1 + 0xe))->unknown_0_2_;
    arg1->unknown_1e_ = ((struct Struct_ov000_0215ccbc*)((char*)arg2->currentStats_->unk1 + 0xe))->unknown_0_0_;
    arg1->unknown_0_ = arg6;
    arg1->unknown_4_ = arg6 >> 32;
    arg1->unknown_1c_ = arg7;
}
