#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_020a75ec {
    Object3D unknown_0_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[4];
    short unknown_b4_;
    char unknown_b6_[0x7a];
    unsigned int unknown_130_;
    char unknown_134_[8];
    unsigned short unknown_13c_;
    short unknown_13e_;
    int unknown_140_;
    Vector3i unknown_144_;
    unsigned char unknown_150_;
    char unknown_151_[3];
    unsigned char unknown_154_;
    char unknown_155_[5];
    unsigned char unknown_15a_;
};
struct Struct_020a75ec_2 { Object3D unknown_0_; unsigned short unknown_ac_; };
struct Struct_02038598_5;
struct Struct_02010604;
struct Struct_02015ef4;
extern short data_020e9450[];
extern "C" Zone3D* func_02012fe4();
extern "C" void func_020332ac(Struct_020a75ec*);
extern "C" void func_020a78dc(Struct_020a75ec*);
extern "C" int func_02046b60(Struct_02038598_5*, int);
extern "C" void* func_02010828(GameState*);
extern "C" void* func_020100bc(GameState*);
extern "C" int func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" void* func_0205ec34();
extern "C" int func_02046b08(void**);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" int func_02033b88(Struct_02010604*, int);
extern "C" void func_ov017_021a93f0(GameResources*, int, int);

#if defined(jpn)
enum { Enum_020a75ec_10100 = 0x27b4, Enum_020a75ec_10112 = 0x27c0 };
#else
enum { Enum_020a75ec_10100 = 0x2774, Enum_020a75ec_10112 = 0x2780 };
#endif

// USA: func_020a75ec
extern "C" ARM void func_020a75ec(Struct_020a75ec* arg0) {
    GameState* var0 = GameState::GetInstance();
    Zone3D* var1 = func_02012fe4();
    short var2 = arg0->unknown_b4_;
    func_020332ac(arg0);
    arg0->unknown_b4_ = var2;
    func_020a78dc(arg0);
    arg0->unknown_13c_ += var0->GetTickCount() * 364;
    arg0->unknown_140_ = data_020e9450[((arg0->unknown_13c_ >> 4) * 2 + 1)] >> 4;
    if (var1->currentZoneID_ != 10000) return;
    Vector3i var3;
    int var4 = 0;
    var3 = arg0->unknown_0_.position_;
    arg0->unknown_130_ = 0;
    if (var3.x >= 0x90000) {
        var3.x -= 0x120000;
        arg0->unknown_130_ |= 1;
        var4 = 1;
    } else if (var3.x < -0x90000) {
        var3.x += 0x120000;
        arg0->unknown_130_ |= 2;
        var4 = 1;
    }
    if (var3.z >= 0x70000) {
        var3.z -= 0xe0000;
        arg0->unknown_130_ |= 4;
        var4 = 1;
    } else if (var3.z < -0x70000) {
        var3.z += 0xe0000;
        arg0->unknown_130_ |= 8;
        var4 = 1;
    }
    if (var4) {
        arg0->unknown_0_.position_ = var3;
        arg0->unknown_144_ = var3;
    }
    GameResources* var5 = GetGameResources();
    void* var6 = var5->unknown_ptr_array_36fc[0];
    if (!func_02046b60((Struct_02038598_5*)var6, 3) && !func_02046b60((Struct_02038598_5*)var6, 1)) {
        unsigned char* var7 = (unsigned char*)func_02010828(var0);
        for (int var8 = 0; var8 < var7[0xf7c]; var8++) {
            Struct_020a75ec_2* var9 = (Struct_020a75ec_2*)var0->GetPartyMemberByIndex(*(var7 + 0xf78 + var8));
            if (var9) {
                var9->unknown_0_.position_ = arg0->unknown_0_.position_;
                var9->unknown_ac_ = 0;
            }
        }
        *(Vector3i*)((char*)var1 + Enum_020a75ec_10100) = arg0->unknown_0_.position_;
        *(int*)((char*)var1 + Enum_020a75ec_10112) = arg0->unknown_ae_;
    }
    int var10;
    int var11;
    void* var12 = func_020100bc(var0);
    int var13 = 0;
    if (func_0202ec84(var12, (Struct_02015ef4*)&arg0->unknown_0_.position_, &var10, &var11) == 0) {
        int var14;
        int var15;
        if (g_touchInput.released_ && (unsigned int)g_touchInput.prevTimeHeld_ < 10) {
            var14 = g_touchInput.prevX_;
            var15 = g_touchInput.prevY_;
        }
        if (var10 - 16 < var14 && var14 < var10 + 16 && var11 - 20 < var15 && var15 < var11 + 8) var13 = 1;
    }
#if !defined(jpn)
    unsigned char* var16 = (unsigned char*)func_0205ec34();
#endif
    if (g_keyManager.TestKeysPressed(2) || var13) {
        if (func_02046b08((void**)var6)
#if !defined(jpn)
            && func_0206dfb0((int)var16, var16 + 0x8c, 43)
#endif
        ) {
            arg0->unknown_15a_ = 0;
            arg0->unknown_154_ = 0;
            func_02033b88((Struct_02010604*)arg0, 0);
            func_ov017_021a93f0(var5, 0, 1);
        }
    }
}
