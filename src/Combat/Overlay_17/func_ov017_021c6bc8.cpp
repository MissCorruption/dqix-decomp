#if defined(jpn)
enum { Enum_ov017_021c6bc8_1816 = 0x508 };
#else
enum { Enum_ov017_021c6bc8_1816 = 0x718 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c6bc8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_ov017_021c6bc8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021c6bc8 unknown_4_;
};

// USA: func_ov017_021c6bc8
extern "C" ARM void func_ov017_021c6bc8() {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = *(unsigned char**)((char*)GetGameResources() + 0x3000 + Enum_ov017_021c6bc8_1816);
    unsigned char* var2 = (unsigned char*)func_ov017_021b8478(var1);
    void* var3 = func_0202ae24();

    struct Struct_ov017_021c6bc8_2 var4;
    var4.unknown_0_ = 0x6e;
    struct Struct_ov017_021c6bc8* var5 = &var4.unknown_4_;

    for (int var6 = 0; var6 < 4; var6++) {
        if (!func_020a35e0(var2, var6)) {
            continue;
        }
        GameObject* var7 = var0->GetCombatantByIndex(var6);
        if (*(unsigned char*)(*(char**)((char*)var7 + 0x138) + 0x26) == 0) {
            continue;
        }
        var5->unknown_0_ = *(unsigned short*)(var2 + 0x8);
        var5->unknown_2_ = (unsigned short)var6;
        var5->unknown_4_ = *(unsigned short*)(*(char**)((char*)var7 + 0x138) + 0x0);
        var5->unknown_6_ = *(unsigned short*)(*(char**)((char*)var7 + 0x138) + 0x2);
        var5->unknown_8_ = *(int*)(*(char**)((char*)var7 + 0x138) + 0x14);
        var5->unknown_c_ = *(int*)(*(char**)((char*)var7 + 0x138) + 0x18);
        func_0205e330(var3, &var4, 0);
    }
}
