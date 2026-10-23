#include "globaldefs.h"
#include "World/Object3D.h"
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Input/Input.h"

struct Struct_ov014_02184700 { char unknown_0_[0xc]; short unknown_c_; };
struct Struct_ov014_02184700_2 { char unknown_0_[0x1c]; float unknown_1c_; };
struct Struct_ov014_02184700_3 {
    char unknown_0_[0xc];
    char unknown_c_[0x10];
    char unknown_1c_[0x24];
    Object3D* unknown_40_;
    void* unknown_44_;
    Struct_ov014_02184700* unknown_48_;
    char unknown_4c_[0x30];
    unsigned char unknown_7c_;
    char unknown_7d_[5];
    union {
        struct { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 7; } unknown_0_;
        unsigned char unknown1_0_;
    } unknown_82_;
    char unknown_83_[0xd];
    unsigned char unknown_90_, unknown_91_, unknown_92_;
};
typedef void (Struct_ov014_02184700_3::*Type_02000c9c_9)();
extern "C" {
void func_ov014_02185c48(void*);
void* func_02097224(void*, short);
extern void* data_ov014_02189800[4];
extern Type_02000c9c_9 data_020e6d5c;
extern Type_02000c9c_9 data_ov014_021895a0[];
extern Type_02000c9c_9 data_ov014_021895b0[];
extern const char data_ov014_021895c8[];
extern const char data_ov014_021895ce[];
}

extern "C" ARM void func_ov014_02184700(Struct_ov014_02184700_3* arg0) {
    func_ov014_02185c48(arg0);
    if (arg0->unknown_40_) {
        arg0->unknown_40_->AdvanceEffects();
        int var0 = 0;
        if (arg0->unknown_48_) {
            Struct_ov014_02184700_2* var1 = (Struct_ov014_02184700_2*)func_02097224(arg0->unknown_c_, arg0->unknown_48_->unknown_c_);
            if (var1) var0 = (int)(4096.0f * var1->unknown_1c_);
        }
        Object3D* var2 = arg0->unknown_40_;
        int var3 = arg0->unknown_82_.unknown_0_.unknown_0_0_;
        int var4;
        int var5;
        Vector3fix var6;
        Vector3fix var7;
        if (!var2) var5 = 0;
        else {
            int var8 = 0;
            arg0->unknown_90_ = 0;
            arg0->unknown_91_ = 0;
            var5 = var3;
            var4 = 0;
            if (g_keyManager.TestKeysHeld(0x200) && g_keyManager.TestKeysHeld(0x100)) {
                if (!var3) {
                    var5 = 1;
                    arg0->unknown_90_ = 1;
                    arg0->unknown_91_ = 1;
                }
            } else if (g_keyManager.TestKeysHeld(0x200) && !g_keyManager.TestKeysReleased(0x100)) {
                var8 = 1;
                arg0->unknown_90_ = 1;
                var4 = 0xcc;
            } else if (g_keyManager.TestKeysHeld(0x100) && !g_keyManager.TestKeysReleased(0x200)) {
                var8 = 1;
                arg0->unknown_91_ = 1;
                var4 = -0xcc;
            }
            if (var3) {
                var7 = var2->rotation_;
                int var9 = var0 - var7.y;
                if (var7.y >= var0 + 0x3243) var9 = var0 + 0x6487 - var7.y;
                var4 = var9 / 5;
                if (!g_keyManager.TestKeysHeld(0x100) && !g_keyManager.TestKeysHeld(0x200) && var7.y == var0) var5 = 0;
            }
            if (var8 || var3) {
                var4 *= GameState::GetInstance()->GetTickCount();
                var6 = var2->rotation_;
                var6.y += var4;
                if (var3) {
                    if (var6.y < var0 + 0xcc || var6.y > var0 + 0x63bb) var6.y = var0;
                    if (!(arg0->unknown_90_ && arg0->unknown_91_ && var6.y != var0)) {
                        arg0->unknown_90_ = 0;
                        arg0->unknown_91_ = 0;
                    }
                }
                if (var6.y < 0) var6.y += 0x6487;
                if (var6.y >= 0x6487) var6.y -= 0x6487;
                var2->rotation_ = var6;
            }
        }
        arg0->unknown_82_.unknown1_0_ = (arg0->unknown_82_.unknown1_0_ & ~1) | (var5 & 1);
        if (arg0->unknown_40_->HasAnimationStopped() || arg0->unknown_40_->HasAnimationReachedEnd()) {
            var2 = arg0->unknown_40_;
            const char* var10 = (const char*)var2->activeAnimationRecord_;
            if (var10 && strcmp(data_ov014_021895c8, var10) && strcmp(data_ov014_021895ce, var10)) var2->MaybeSetRegularAnimation(data_ov014_021895c8, 0);
        }
    }
    arg0->unknown_92_ = 0;
    unsigned int var11 = (unsigned int)data_ov014_02189800[1];
    if (!(var11 & 1)) {
        data_ov014_021895a0[4] = data_020e6d5c;
        data_ov014_02189800[1] = (void*)(var11 | 1);
    }
    if (data_ov014_021895b0[arg0->unknown_7c_]) (arg0->*data_ov014_021895b0[arg0->unknown_7c_])();
}
