#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
struct Struct_ov000_021759f4_2 {
    char unknown_0_[0x3508];
    void* unknown_3508_;
};
#endif

struct Struct_020a36a8;

struct Struct_ov000_021643d4_8 {
    char unknown_0_[0x10];
    signed char unknown_10_[8];
    signed char unknown_18_;
    char unknown_19_[0x1c - 0x19];
    signed char unknown_1c_;
    signed char unknown_1d_;
    char unknown_1e_[0x26 - 0x1e];
    short unknown_26_;
    char unknown_28_[0x2e - 0x28];
    signed char unknown_2e_;
};

struct Struct_ov000_021759f4_3 {
#if defined(jpn)
    char unknown_0_[0x8b8];
#else
    char unknown1_0_[0x950];
#endif
    int unknown_950_;
};

struct Struct_ov000_021759f4_4 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_ov000_021759f4_3* unknown_150_;
};

struct Struct_ov000_021759f4_5 {
    short unknown_0_[4];
    signed char unknown_8_[4];
    signed char unknown_c_[4];
    char unknown_10_[0x20 - 0x10];
    int unknown_20_;
#if defined(jpn)
    char unknown1_24_[0x1faa - 0x24];
#else
    char unknown_24_[0x1d72 - 0x24];
#endif
    unsigned short unknown_1d72_;
};

struct Struct_ov000_021759f4 {
#if defined(jpn)
    char unknown_0_[0xe30];
#else
    char unknown1_0_[0xeb4];
#endif
    unsigned char unknown_eb4_;
};

extern "C" struct Struct_020a36a8* func_ov017_021b8478(void* arg0);
extern "C" int func_020a36a8(struct Struct_020a36a8* arg0);
extern "C" struct Struct_ov000_021759f4* func_ov017_021b8468(void* arg0);
extern "C" struct Struct_ov000_021643d4_8* func_ov000_02161318(void* arg0, int arg1);
extern "C" int func_ov000_021719f8(int* arg0);
extern "C" void func_ov017_021c9cd8(unsigned char arg0);
extern unsigned short data_ov000_02183444[];

// USA: func_ov000_021759f4
extern "C" ARM int func_ov000_021759f4(struct Struct_ov000_021759f4_5* arg0) {
#if defined(jpn)
    void* var0 = ((Struct_ov000_021759f4_2*)GetGameResources())->unknown_3508_;
#else
    void* var0 = GetGameResources()->unknown_ptr_3718;
#endif
    struct Struct_020a36a8* var1 = func_ov017_021b8478(var0);
    if (arg0->unknown_1d72_ & 0x200) {
        return 0;
    }
    if (arg0->unknown_1d72_ & 0x400) {
        return 0;
    }
    if (var1 != NULL && !func_020a36a8(var1)) {
        struct Struct_ov000_021759f4* var2 = func_ov017_021b8468(var0);
        if (var2 != NULL) {
            return var2->unknown_eb4_;
        }
    }

    GameState* var3 = GameState::GetInstance();
    unsigned char var4 = 0;
    unsigned char var5 = 0;
    for (int var6 = 0; var6 < 4; var6++) {
        struct Struct_ov000_021643d4_8* var7 = func_ov000_02161318(arg0, var6);
        if (var7 == NULL) {
            break;
        }
        if (func_ov000_021719f8((int*)var7) != 0 || var7->unknown_10_[var7->unknown_18_] != 100 ||
            var7->unknown_1c_ != 5) {
            break;
        }
        GameObject* var8 = var3->GetPartyMemberByIndex(var6);
        if (var8 == NULL) {
            break;
        }
        int var9 = ((struct Struct_ov000_021759f4_4*)var8)->unknown_150_->unknown_950_;
        unsigned short var10 = data_ov000_02183444[var9];
        if (var10 != var7->unknown_26_) {
            break;
        }
        arg0->unknown_0_[var6] = var7->unknown_26_;
        arg0->unknown_8_[var6] = var7->unknown_1d_;
        arg0->unknown_c_[var6] = var7->unknown_2e_;
        if (arg0->unknown_20_ >= 0 && (var9 == 6 || var9 == 0xb)) {
            var4++;
        }
        var5++;
    }
    if (var5 == 4 && var4 != 4) {
        func_ov017_021c9cd8(1);
        return 1;
    }
    return 0;
}
