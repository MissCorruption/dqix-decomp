#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"

struct Struct_ov025_021e2980 {
    unsigned char unknown_0_[8];
    const char* unknown_8_;
    unsigned short unknown_c_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};
struct Struct_ov025_021e2980_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_;
};
struct Struct_ov025_021e2980_3 {
    Object3D unknown_0_;
    unsigned char unknown_ac_[0x12];
    unsigned char unknown_be_;
};
struct Struct_ov025_021ef988_4 {
#if defined(jpn)
    unsigned char unknown_0_[0xc];
#else
    unsigned char unknown1_0_[0x1c];
#endif

    unsigned int unknown_1c_;
};
struct Struct_ov025_021e2980_4 {
#if defined(jpn)
    unsigned char unknown_0_[0x71c4];
#else
    unsigned char unknown1_0_[0x6fd4];
#endif

    unsigned char unknown_6fd4_;
};
struct Struct_0204a438;
struct Struct_0202df68;
struct Struct_02048c90;
struct Struct_02010604;
struct Struct_02108760;
extern Struct_ov025_021ef988_4 data_ov025_021ef988;
extern char data_ov025_021ef7d9[];
extern char data_ov025_021ef7df[];
extern char data_ov025_021ef7e6[];
extern Struct_02108760 data_02108760;
extern "C" int func_0202e09c(int);
extern "C" Object3D* func_0204a438(Struct_0204a438*);
extern "C" void func_0202e9a4(Struct_0202df68*, int);
extern "C" void func_0204a170(int);
extern "C" int func_ov000_021820bc(void*, int, int, int);
extern "C" void func_02048c90(Struct_02048c90*);
extern "C" void func_02049ae4(unsigned char*);
extern "C" void func_02033b88(Struct_02010604*, int);
extern "C" Struct_ov025_021e2980_4* func_ov000_02160130();
extern "C" void func_0205eaa0(Struct_02108760*, int, int);

// USA: func_ov025_021e2980
extern "C" ARM int func_ov025_021e2980(Struct_ov025_021e2980* arg0, Struct_ov025_021e2980_2* arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_e_ == 0x19) {
        void* var1 = func_020100bc(var0);
        if (func_0202e09c((int)var1) & 0x10) {
            Object3D* var2 = func_0204a438((Struct_0204a438*)var1);
            if (var2) {
                func_0202e9a4((Struct_0202df68*)var1, 0xf000);
                var2->MaybeSetRegularAnimation(arg0->unknown_8_, arg0->unknown_c_);
                func_0204a170((int)var1);
                data_ov025_021ef988.unknown_1c_ |= 8;
            }
        }
    } else {
        int var3[8];
        int var4 = func_ov000_021820bc(arg3, (int)arg1, arg0->unknown_e_, (int)var3);
        if (!var4) return 1;
        for (int var5 = 0; var5 < var4; var5++) {
            Struct_ov025_021e2980_3* var6 = (Struct_ov025_021e2980_3*)var0->GetGameObjectByIndex(var3[var5]);
            if (!var6) continue;
            if (var6->unknown_0_.unknown_0_ & 0x80) {
                func_02048c90((Struct_02048c90*)var6);
                func_02049ae4((unsigned char*)var6);
                int var7 = var6->unknown_be_;
                if (var7 != 0 && var7 != 4 && var7 != 6)
                    func_02033b88((Struct_02010604*)var6, 0);
            }
            var6->unknown_0_.SetAnimationPlaybackSpeed(0x1000, 0);
            var6->unknown_0_.SkipAnimationTransition();
            if (!var6->unknown_0_.MaybeSetRegularAnimation(arg0->unknown_8_, arg0->unknown_c_) &&
                strcmp(arg0->unknown_8_, data_ov025_021ef7d9) == 0) {
                if (!var6->unknown_0_.MaybeSetRegularAnimation(data_ov025_021ef7df, arg0->unknown_c_))
                    var6->unknown_0_.MaybeSetRegularAnimation(data_ov025_021ef7e6, arg0->unknown_c_);
            }
        }
        LightingManager* var8 = LightingManager::GetInstance();
        if (!(arg0->unknown_f_ & 2) && arg1->unknown_0_ != 1 && arg1->unknown_0_ != 2 && arg1->unknown_0_ != 0xdb) {
            Struct_ov025_021e2980_4* var9 = func_ov000_02160130();
            if (!var9->unknown_6fd4_) {
                var8->BeginFade(0x999, 300);
                var9->unknown_6fd4_ = 1;
            }
        }
        const char* var10 = arg0->unknown_8_;
        if (strcmp(var10, data_ov025_021ef7e6) == 0 ||
            strcmp(var10, data_ov025_021ef7d9) == 0 ||
            strcmp(var10, data_ov025_021ef7df) == 0) {
            if (!(arg0->unknown_f_ & 1)) {
                if (arg1->unknown_a_ & 1) func_0205eaa0(&data_02108760, 0x66, 0);
                else func_0205eaa0(&data_02108760, 0x64, 0);
            }
            var8->BeginFade(0x4cc, 1000);
            data_ov025_021ef988.unknown_1c_ |= 0x200;
        } else {
            data_ov025_021ef988.unknown_1c_ |= 1;
        }
    }
    data_ov025_021ef988.unknown_1c_ |= 4;
    return 1;
}
