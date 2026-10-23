#pragma once

#include "GameState/GameState.h"

struct Struct_020200c0 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned int inline_ov017_021bd5d0() const { return unknown_0_; }
    unsigned short inline_ov017_021bd5d0_2() const { return unknown_6_; }
    unsigned char inline_ov017_021bd5d0_3() const { return unknown_8_; }
};

// The recovery flag is in the combatant extension, beyond the common GameObject.
// Keep the common base size unchanged: several other object types embed it.
struct Struct_020236dc_2 : GameObject {
#if defined(jpn)
    unsigned char unknown_13c_[0x180 - 0x13c];
#else
    unsigned char unknown1_13c_[0x18c - 0x13c];
#endif
    unsigned int unknown_18c_;
};

extern "C" void func_02048150(GameObject* arg0, int arg1, int arg2);
extern "C" void func_02053fe4(GameObject* arg0, int arg1, int arg2);

#if defined(jpn)
#else
#endif
