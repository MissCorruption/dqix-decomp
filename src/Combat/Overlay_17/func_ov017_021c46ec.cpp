#if defined(jpn)
enum { Enum_ov017_021c46ec_14132 = 0x3524, Enum_ov017_021c46ec_257 = 0xfd };
#else
enum { Enum_ov017_021c46ec_14132 = 0x3734, Enum_ov017_021c46ec_257 = 0x101 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021c46ec {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_[0x10 - 0x6];
    int unknown_10_;
};

struct Struct_ov017_021c46ec_2 {
    unsigned char unknown_0_[3];
    unsigned char unknown_3_;
    unsigned char unknown_4_[0x12 - 0x4];
    unsigned char unknown_12_;
    unsigned char unknown_13_[Enum_ov017_021c46ec_257 - 0x13];
    unsigned char unknown_101_;
};

struct Struct_ov017_021c46ec_3 {
    unsigned char unknown_0_[Enum_ov017_021c46ec_14132];
    struct Struct_ov017_021c46ec_2* unknown_3734_;
};

struct Struct_0202c1a4;
extern "C" int func_0202c540(struct Struct_0202c1a4* arg0);
extern "C" int func_0202c508(struct Struct_0202c1a4* arg0);
extern "C" void func_020103c8(GameState* arg0, int arg1);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" signed char func_020546a8(void* arg0);
extern "C" void func_ov017_0219dac4(struct Struct_ov017_021c46ec_3* arg0, int arg1, int arg2);
extern "C" void func_ov017_021c4fa0(int arg0, int arg1);

// USA: func_ov017_021c46ec
extern "C" ARM void func_ov017_021c46ec(int arg0, struct Struct_ov017_021c46ec* arg1, GameState* arg2, struct Struct_ov017_021c46ec_3* arg3, struct Struct_0202c1a4* arg4) {
    unsigned short var0 = arg1->unknown_4_;
    if (func_0202c540(arg4) != 0 && arg0 == 0) {
        func_020103c8(arg2, arg1->unknown_10_);
    }

    int var1 = 0;
    int var2;
    struct Struct_ov017_021c46ec_2* var3 = arg3->unknown_3734_;
    if (var3->unknown_3_ != 0) {
        var1 = 1;
    }

    GameObject* var4[4];
    GameObject* var5 = arg2->GetPartyMemberByIndex(arg0);
    if (!var1 || var3->unknown_101_ == 0) {
        int var6 = 0;
        var4[var6++] = var5;
        for (var2 = 0; var2 < 4; var2++) {
            GameObject* var7 = func_0200ff58(arg2, var2);
            if (var7 != NULL && arg0 == func_020546a8(var7)) {
                var4[var6++] = var7;
            }
        }

        if (!var1 || var3->unknown_101_ != 0 || var3->unknown_12_ == 0 || arg0 != 0) {
            for (var2 = 0; var2 < var6; var2++) {
                GameObject* var8 = var4[var2];
                if (var8 != NULL) {
                    if (var0 != var8->obj3D_.GetField06() || var0 == 0x170c) {
                        var8->obj3D_.MakeHidden();
                    }
                }
            }
        }
    }

    func_ov017_0219dac4(arg3, arg0, var0);
    if (func_0202c508(arg4) != 0) {
        func_ov017_021c4fa0(arg0, var0);
    }
}
