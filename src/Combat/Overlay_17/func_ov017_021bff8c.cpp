#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150* arg0, int arg1);
extern "C" void* func_020421a0(void);
extern "C" void* func_ov017_021b8478(void* arg0);
struct Struct_02038598_5;
extern "C" int func_02046b60(Struct_02038598_5* arg0, int arg1);
extern "C" int func_02046b08(void** arg0);
extern "C" int func_020535c8(signed char* arg0);
extern "C" int func_02039820(void* arg0);
extern "C" int func_02039d7c(char* arg0);
extern "C" void func_ov017_021cf4b0(int arg0, int arg1);
extern "C" void func_0200fb40(void* arg0);
extern "C" int* func_020936f8(void);
extern "C" void func_02094030(int*, short, short, int);
struct Struct_ov017_021c0124;
extern "C" void func_ov017_021c0124(Struct_ov017_021c0124* arg0, unsigned char arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

struct Struct_ov017_021bff8c {
#if defined(jpn)
    char unknown_0_[0x34ec];
#else
    char unknown1_0_[0x36fc];
#endif
    Struct_0201bdac_2* unknown_36fc_;
    char unknown_3700_[0x3718 - 0x3700];
    void* unknown_3718_;
#if defined(jpn)
    char unknown_350c_[0x38fc - 0x350c];
#else
    char unknown_371c_[0x3b1c - 0x371c];
#endif
    Struct_ov017_021c0124* unknown_3b1c_;
};

// USA: func_ov017_021bff8c
extern "C" ARM void func_ov017_021bff8c(Struct_ov017_021bff8c* arg0, unsigned char arg1) {
#if defined(jpn)
 enum {Enum_ov017_021bff8c_434=0x1a6,Enum_ov017_021bff8c_2456=0x868};
#else
 enum {Enum_ov017_021bff8c_434=0x1b2,Enum_ov017_021bff8c_2456=0x998};
#endif
    if (func_02086ef0((Struct_02048150*)func_02010828(GameState::GetInstance()), 0) == 0) {
        int var0 = 0;
        int var1 = 0;
        GameState* var2 = GameState::GetInstance();
        GameObject* var3 = var2->GetPartyMemberByIndex(0);
        GameObject* var4 = var2->GetProtagonist();
        char* var5 = (char*)func_020421a0();
        Struct_ov017_021bff8c* var6 = (Struct_ov017_021bff8c*)GetGameResources();
        void* var7 = NULL;
        if (var6 != NULL) {
            var7 = var6->unknown_3718_;
        }
        if (var7 != NULL) {
            func_ov017_021b8478(var7);
        }
        unsigned short var8 = *(unsigned short*)((char*)var4 + Enum_ov017_021bff8c_434);
        if (var8 != 0) {
            if (*(unsigned short*)((char*)var3 + Enum_ov017_021bff8c_434) == var8) {
                var0 = 1;
            } else {
                var1 = 1;
            }
        } else if (func_02046b60((Struct_02038598_5*)arg0->unknown_36fc_, 3)) {
            var1 = 1;
        }
        if (func_02046b08((void**)arg0->unknown_36fc_) == 0) {
            var1 = 1;
        } else if (func_020535c8((signed char*)var4) != 0) {
            var1 = 1;
        } else if (func_02039820(var4) == 0) {
            var1 = 1;
        } else if (*(int*)(var5 + Enum_ov017_021bff8c_2456) != 0) {
            var1 = 1;
        } else if (func_02039d7c((char*)var4) != 0) {
            var1 = 1;
        }
        unsigned char var9 = var4->obj3D_.unknown_4_;
        if (var0) {
            func_ov017_021cf4b0(var9, 5);
            func_0200fb40(var2);
            return;
        }
        if (var1) {
            func_ov017_021cf4b0(var9, 4);
            func_0200fb40(var2);
            return;
        }
        func_ov017_021cf4b0(var9, 1);
        func_02094030(func_020936f8(), 0x2712, -1, arg1);
    }
    func_ov017_021c0124(arg0->unknown_3b1c_, arg1);
    func_020469b4(arg0->unknown_36fc_, (Struct_0201bdac*)arg0->unknown_3b1c_);
}
