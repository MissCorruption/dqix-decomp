#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae24(void);
extern "C" ARM void* func_ov017_021b8470(void* arg0);
extern "C" int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215eb1c(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_020493a4(unsigned char* arg0);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c812c {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 3;
    unsigned char unknown_1_[4];
    unsigned char unknown_5_[8];
    unsigned char unknown_d_[3];
};

struct Struct_ov017_021c812c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c812c unknown_4_;
};

// USA: func_ov017_021c812c
extern "C" ARM void func_ov017_021c812c(unsigned char arg0, int arg1) {
#if defined(jpn)
 enum { Enum_ov017_021c812c_1816=0x508 };
#else
 enum { Enum_ov017_021c812c_1816=0x718 };
#endif
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)GetGameResources();
    void* var2 = func_0202ae24();

    Struct_ov017_021c812c_2 var3;
    memset(&var3, 0, sizeof(var3));
    var3.unknown_0_ = 0x74;
    var3.unknown_4_.unknown_0_0_ = arg0;
    var3.unknown_4_.unknown_0_4_ = arg1;
    Struct_ov017_021c812c* var4 = &var3.unknown_4_;

    if (arg1 == 0) {
        for (int var5 = 0; var5 < 4; var5++) {
            var4->unknown_1_[var5] = 0xff;
        }
        for (int var6 = 0; var6 < 8; var6++) {
            var4->unknown_5_[var6] = 0xff;
        }
        void* var7 = func_ov017_021b8470(*(void**)(var1 + 0x3000 + Enum_ov017_021c812c_1816));
        if (var7 != NULL) {
            short var8[8];
            int var9 = func_ov000_0215e9fc(var7, var8, 8, 0x10);
            for (int var10 = 0; var10 < var9; var10++) {
                GameObject* var11 = var0->GetCombatantByIndex(var8[var10]);
                if (var11 != NULL) {
                    int var12 = var11->obj3D_.unknown_4_;
                    var4->unknown_1_[var12] = func_020493a4((unsigned char*)var11);
                }
            }
            var9 = func_ov000_0215eb1c(var7, var8, 8, 0x10);
            for (int var13 = 0; var13 < var9; var13++) {
                GameObject* var14 = var0->GetCombatantByIndex(var8[var13]);
                if (var14 != NULL) {
                    int var15 = var14->obj3D_.unknown_4_ - 0xc0;
                    var4->unknown_5_[var15] = func_020493a4((unsigned char*)var14);
                }
            }
        }
    }
    func_0205e330(var2, &var3, 0);
}
