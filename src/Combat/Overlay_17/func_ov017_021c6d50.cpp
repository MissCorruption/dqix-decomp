#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c6d50 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 4;
    unsigned short unknown_0_6_ : 3;
    unsigned short unknown_1_1_ : 3;
    unsigned short : 4;
};

struct Struct_ov017_021c6d50_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_ov017_021c6d50 unknown_4_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned int unknown_c_;
};

struct Struct_ov017_021c6d50_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021c6d50_2 unknown_4_;
};

static inline struct Struct_ov017_021c6d50* inline_ov017_021c6d50_5(GameObject* arg0) {
    return (struct Struct_ov017_021c6d50*)((unsigned char*)arg0->currentStats_ + 0x22);
}
static inline unsigned char inline_ov017_021c6d50(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return inline_ov017_021c6d50_5(arg0)->unknown_0_0_; }
static inline unsigned char inline_ov017_021c6d50_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return inline_ov017_021c6d50_5(arg0)->unknown_0_2_; }
static inline unsigned char inline_ov017_021c6d50_3(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return inline_ov017_021c6d50_5(arg0)->unknown_0_6_; }
static inline unsigned char inline_ov017_021c6d50_4(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return inline_ov017_021c6d50_5(arg0)->unknown_1_1_; }

// USA: func_ov017_021c6d50
extern "C" ARM void func_ov017_021c6d50() {
#if defined(jpn)
 enum { Enum_ov017_021c6d50_1816=0x508 };
#else
 enum { Enum_ov017_021c6d50_1816=0x718 };
#endif
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = *(unsigned char**)((char*)GetGameResources() + 0x3000 + Enum_ov017_021c6d50_1816);
    unsigned char* var2 = (unsigned char*)func_ov017_021b8478(var1);
    void* var3 = func_0202ae24();

    struct Struct_ov017_021c6d50_3 var4;
    var4.unknown_0_ = 0x6f;
    struct Struct_ov017_021c6d50_2* var5 = &var4.unknown_4_;

    for (int var6 = 0; var6 < 4; var6++) {
        if (!func_020a35e0(var2, var6)) {
            continue;
        }
        GameObject* var7 = var0->GetCombatantByIndex(var6);
        if (*((unsigned char*)var7->currentStats_ + 0x26) == 0) {
            continue;
        }
        var5->unknown_0_ = *(unsigned short*)(var2 + 0x8);
        var5->unknown_2_ = (unsigned short)var6;
        var5->unknown_4_.unknown_0_0_ = inline_ov017_021c6d50(var7);
        var5->unknown_4_.unknown_0_2_ = inline_ov017_021c6d50_2(var7);
        var5->unknown_4_.unknown_0_6_ = inline_ov017_021c6d50_3(var7);
        var5->unknown_4_.unknown_1_1_ = inline_ov017_021c6d50_4(var7);
        var5->unknown_6_ = *((unsigned char*)var7->currentStats_ + 0x24);
        var5->unknown_8_ = var7->baseStats_->primaryStats.maxHP;
        var5->unknown_a_ = var7->baseStats_->primaryStats.maxMP;
        func_0205e330(var3, &var4, 0);
    }
}
