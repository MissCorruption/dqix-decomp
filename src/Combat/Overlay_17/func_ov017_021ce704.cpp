#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021ce704_3 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov017_021ce704 {
    char unknown_0_[0x800];
    Struct_ov017_021ce704_3 unknown_800_[3];
    unsigned int unknown_80c_0_ : 10;
};
#if defined(jpn)
struct Struct_ov017_021ce704_2 { char unknown_0_[4]; Struct_ov017_021ce704 unknown_1c_; };
#else
struct Struct_ov017_021ce704_2 { char unknown_0_[0x1c]; Struct_ov017_021ce704 unknown_1c_; };
#endif
#if defined(jpn)
struct Struct_ov000_02179cdc_3 { char unknown_0_[0x80]; Struct_ov017_021ce704_2 unknown_100_; };
#else
struct Struct_ov000_02179cdc_3 { char unknown_0_[0x100]; Struct_ov017_021ce704_2 unknown_100_; };
#endif
static inline Struct_ov017_021ce704_2* inline_ov017_021ce704(Struct_ov000_02179cdc_3* arg0) { return &arg0->unknown_100_; }
static inline Struct_ov017_021ce704* inline_ov017_021ce704_2(Struct_ov017_021ce704_2* arg0) { return &arg0->unknown_1c_; }
struct Struct_ov017_021ce704_4 {
    Struct_ov017_021ce704_3 unknown_0_[3];
    unsigned int unknown_c_0_ : 10;
    unsigned int unknown_d_2_ : 3;
};
struct Struct_ov017_021ce704_5 { unsigned char unknown_0_; unsigned char unknown_1_[3]; unsigned int unknown_4_[4]; };
extern "C" void* func_0202ae24();
extern "C" Struct_ov000_02179cdc_3* func_02053c6c(unsigned char*);
extern "C" void func_0205e330(void*, void*, int);

// USA: func_ov017_021ce704
extern "C" ARM void func_ov017_021ce704(int arg0) {
    void* var0 = func_0202ae24();
    GameObject* var1 = func_0200ff1c(GameState::GetInstance(), arg0);
    if (!var1) return;
    Struct_ov000_02179cdc_3* var2 = func_02053c6c((unsigned char*)var1);
    if (!var2) return;
    Struct_ov017_021ce704_5 var3;
    var3.unknown_0_ = 0x12;
    Struct_ov017_021ce704_4* var4 = (Struct_ov017_021ce704_4*)var3.unknown_4_;
    var4->unknown_0_[0].unknown_0_0_ = var2->unknown_100_.unknown_1c_.unknown_800_[0].unknown_0_0_;
    var4->unknown_0_[0].unknown_1_2_ = var2->unknown_100_.unknown_1c_.unknown_800_[0].unknown_1_2_;
    var4->unknown_0_[0].unknown_2_4_ = var2->unknown_100_.unknown_1c_.unknown_800_[0].unknown_2_4_;
    Struct_ov017_021ce704* var5 = inline_ov017_021ce704_2(inline_ov017_021ce704(var2));
    var4->unknown_0_[1].unknown_0_0_ = var5->unknown_800_[1].unknown_0_0_;
    var4->unknown_0_[1].unknown_1_2_ = var5->unknown_800_[1].unknown_1_2_;
    var4->unknown_0_[1].unknown_2_4_ = var5->unknown_800_[1].unknown_2_4_;
    var4->unknown_0_[2].unknown_0_0_ = var5->unknown_800_[2].unknown_0_0_;
    var4->unknown_0_[2].unknown_1_2_ = var5->unknown_800_[2].unknown_1_2_;
    var4->unknown_0_[2].unknown_2_4_ = var5->unknown_800_[2].unknown_2_4_;
    var4->unknown_c_0_ = var5->unknown_80c_0_;
    var4->unknown_d_2_ = arg0;
    func_0205e330(var0, &var3, 0);
}
