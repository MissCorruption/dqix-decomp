#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021b58b8_1804 = 0x4fc };
#else
enum { Enum_ov017_021b58b8_1804 = 0x70c };
#endif

#include "Resource/GameResources.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Struct_02018300_3;
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27a0(void* arg0);
extern "C" void func_020a2794(void* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_ov017_0218d5ac(void* arg0);
struct Struct_02046b38;
struct Struct_02046b38_2;
extern "C" int func_02046b38(Struct_02046b38* arg0, Struct_02046b38_2* arg1);
extern "C" void func_ov017_021b5a30(void* arg0);

typedef int (*Type_ov017_021b58b8)(void*);
struct Struct_ov017_021d6c04 { Type_ov017_021b58b8 unknown_0_[7]; };
extern Struct_ov017_021d6c04 data_ov017_021d6c04;

struct Struct_ov017_021b58b8 {
    unsigned char unknown_0_[0x1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[0x6];
    int unknown_8_;
    unsigned char unknown_c_[0xc];
    unsigned short unknown_18_;
    unsigned char unknown_1a_[0x3a];
    unsigned char unknown_54_;
};

// USA: func_ov017_021b58b8
extern "C" ARM void func_ov017_021b58b8(Struct_ov017_021b58b8* arg0, Struct_02046b38_2* arg1) {
    if (arg0->unknown_18_ != 0) {
        GameState* var0 = GameState::GetInstance();
        GameObject* var1 = var0->GetUnknownGameObject();
        if (var1 != 0) {
            unsigned int var2 = (unsigned int)var0->GetEffectiveDeltaTime();
            if (var2 < arg0->unknown_18_) {
                func_020397cc((Struct_02018300_3*)var1, 1);
                *(unsigned short*)((char*)var1 + 0xb2) = 0;
                arg0->unknown_18_ = arg0->unknown_18_ - var2;
                int var3 = func_020100f8((char*)var0);
                if (var3 != 0) {
                    func_020a27a0((void*)var3);
                }
                GameResources* var4 = GetGameResources();
                if (var4 != 0) {
                    SetFlags04(var4, 0x80);
                }
            } else if (arg0->unknown_54_ == 0) {
                func_020397c0((void*)var1);
                arg0->unknown_18_ = 0;
                int var5 = func_020100f8((char*)var0);
                if (var5 != 0) {
                    func_020a2794((void*)var5);
                }
                GameResources* var6 = GetGameResources();
                if (var6 != 0) {
                    ClearFlags04(var6, 0x80);
                }
            }
        }
    }

    GameResources* var7 = GetGameResources();
    if (var7 != 0) {
        func_ov017_0218d5ac((void*)var7);
    }

    Struct_ov017_021d6c04 var8 = data_ov017_021d6c04;
    Type_ov017_021b58b8 var9 = var8.unknown_0_[arg0->unknown_8_];
    if (var9 != 0) {
        arg0->unknown_8_ = var9(arg0);
    }

    if (func_02046b38((Struct_02046b38*)arg1, *(Struct_02046b38_2**)((char*)var7 + 0x3000 + Enum_ov017_021b58b8_1804)) != 0) {
        arg0->unknown_1_ = 1;
        func_ov017_021b5a30(arg0);
    }
    if (arg0->unknown_1_ != 0) {
        ClearFlags04(var7, 0x40);
    }
}
