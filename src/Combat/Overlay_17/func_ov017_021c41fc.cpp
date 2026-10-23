#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021c41fc_348 = 0x150 };
#else
enum { Enum_ov017_021c41fc_348 = 0x15c };
#endif
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae24(void);
struct Struct_02039df4;
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c41fc {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 4;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_ov017_021c41fc_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021c41fc unknown_4_;
    unsigned char unknown_a_[0xa];
};

// USA: func_ov017_021c41fc
extern "C" ARM void func_ov017_021c41fc(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    ((int)GetGameResources());
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0);
    if (var1 == NULL) return;

    void* var2 = func_0202ae24();

    struct Struct_ov017_021c41fc_2 var3;
    struct Struct_ov017_021c41fc* var4 = &var3.unknown_4_;
    var3.unknown_0_ = 0;
    var4->unknown_1_0_ = arg0;
    var4->unknown_2_ = ((Object3D*)((struct Struct_02039df4*)var1))->GetField06();
    var4->unknown_0_ = 0;
    if (arg1 >= 0) {
        var4->unknown_1_4_ = arg1;
        var4->unknown_0_ |= 1;
    } else {
        var4->unknown_1_4_ = 0;
    }

    int var5 = *(int*)((char*)var1 + Enum_ov017_021c41fc_348);
    if (var5 < 0) {
        var4->unknown_4_ = 0;
    } else {
        var4->unknown_4_ = (unsigned short)var5;
        var4->unknown_0_ |= 2;
    }

    GameObject* var6 = var0->GetUnknownGameObject();
    if (var6 != NULL && arg0 == var6->obj3D_.unknown_4_) {
        if (var4->unknown_2_ == 0x2710) {
            var4->unknown_2_ = 0x170c;
        } else if (var4->unknown_2_ == 0x2710 + 0x64) {
            var4->unknown_2_ = 0x1901;
        }

        if (var4->unknown_4_ != 0) {
            if (var4->unknown_4_ == 0x2710) {
                var4->unknown_4_ = 0x170c;
            } else if (var4->unknown_4_ == 0x2710 + 0x64) {
                var4->unknown_4_ = 0x1901;
            }
        }
    }

    func_0205e330(var2, &var3, 0);
}
