#include <globaldefs.h>
#include "Combat/Main/BattleList.h"

struct Struct_ov017_021ce5b4_2 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
    signed char unknown_9_;
    signed char unknown_a_;
    signed char unknown_b_;
};

struct Struct_ov017_021ce5b4 {
    char unknown_0_[0x809];
    signed char unknown_809_;
    signed char unknown_80a_;
    char unknown_80b_;
    signed char unknown_80c_;
    signed char unknown_80d_;
    signed char unknown_80e_;
    char unknown_80f_;
    signed char unknown_810_;
};

struct Struct_02000c9c_61 {
#if defined(jpn)
    char unknown_0_[0x1c];
#else
    char unknown1_0_[0x34];
#endif
    Struct_ov017_021ce5b4 unknown_34_;
};

struct Struct_ov017_021ce5b4_3 {
#if defined(jpn)
    char unknown_0_[0x80];
#else
    char unknown1_0_[0x100];
#endif
    Struct_02000c9c_61 unknown_100_;
};

extern "C" Struct_ov017_021ce5b4_3* func_02053c6c(unsigned char* arg0);

static inline Struct_02000c9c_61* inline_ov017_021ce5b4(Struct_ov017_021ce5b4_3* arg0) {
    return &arg0->unknown_100_;
}

static inline Struct_ov017_021ce5b4* inline_ov017_021ce5b4_2(Struct_02000c9c_61* arg0) {
    return &arg0->unknown_34_;
}

// USA: func_ov017_021ce5b4
extern "C" ARM void* func_ov017_021ce5b4(int arg0, Struct_ov017_021ce5b4_2* arg1, GameState* arg2) {
    GameObject* var0 = func_0200ff1c(arg2, arg1->unknown_4_);
    if (var0 == NULL) return var0;

    Struct_ov017_021ce5b4_3* var1 = func_02053c6c((unsigned char*)var0);
    if (var1 == NULL) return var1;

    Struct_ov017_021ce5b4* var2 = inline_ov017_021ce5b4_2(inline_ov017_021ce5b4(var1));
    var2->unknown_809_ = arg1->unknown_6_;
    var2->unknown_80a_ = arg1->unknown_7_;
    var2->unknown_80c_ = arg1->unknown_8_;
    var2->unknown_80d_ = arg1->unknown_9_;
    var2->unknown_80e_ = arg1->unknown_a_;
    var2->unknown_810_ = arg1->unknown_b_;
    return var2;
}
