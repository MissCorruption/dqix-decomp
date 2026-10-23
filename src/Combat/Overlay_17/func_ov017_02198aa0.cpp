#include <globaldefs.h>
#include "World/ZoneLifecycle.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/MessageSystem.h"
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

struct Struct_0203402c;
struct Struct_02015ef4;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_ov017_02198aa0 { int unknown_0_,unknown_4_,unknown_8_; };
struct Struct_ov017_02198aa0_2 { unsigned char unknown_0_[8]; signed char unknown_8_; unsigned char unknown_9_[3]; int unknown_c_; Struct_ov017_02198aa0 unknown_10_; };
struct Struct_ov017_02198aa0_3 { unsigned char unknown_0_; unsigned char unknown_1_[19]; };
struct Struct_ov017_02198aa0_4 { unsigned short unknown_0_; unsigned char unknown_2_[5]; unsigned char unknown_7_; unsigned char unknown_8_[4]; unsigned char unknown_c_; unsigned char unknown_d_[15]; unsigned short unknown_1c_; };
extern "C" void* func_020100bc(GameState*);
extern "C" int func_020421a0();
extern "C" void* func_0202ae18();
extern "C" void* func_02012fe4();
extern "C" int func_020535c8(signed char*);
extern "C" int func_0203402c(Struct_0203402c*);
extern "C" int func_0202b7d8(int*);
extern "C" int func_0202c540(void*);
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" void func_ov017_0219b33c(void*, Struct_ov017_02198aa0_3*);
extern "C" int func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" void* func_0200fd0c(GameState*);
extern "C" void func_02070378(char*);
extern "C" void func_ov017_0219e310(unsigned char*, int);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
extern "C" void func_ov017_021be0a0(unsigned char*);

// USA: func_ov017_02198aa0
extern "C" ARM void func_ov017_02198aa0(GameResources* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    void* var2 = func_020100bc(var0);
    GameResources* var3 = GetGameResources();
    Struct_02021b84* var4 = (Struct_02021b84*)func_020421a0();
    void* var5 = func_0202ae18();
    void* var6 = func_02012fe4();
    GrottoStruct* var7 = var0->GetGrottoStruct();
    unsigned char var8 = var7->activeMapData.GetDiscoveryState();
    unsigned char var9 = var7->activeMapData.GetMapType();
    unsigned char var10 = var7->activeEnviron;
    if (func_020535c8((signed char*)var1) || !var7->unknown_0[0]) return;
    if (((Struct_ov017_02198aa0_2*)var7)->unknown_c_ != var1->obj3D_.GetField06() || var4->unknown_9a0_) return;
    if (IsBrightnessTransitionActive(var3)) return;
    if (func_0203402c((Struct_0203402c*)var1)) return;
    if (var8 != 2 && var8 != 3 && func_0202b7d8((int*)var5) && func_0202c540(var5)) return;
    Struct_ov017_02198aa0 var11 = ((Struct_ov017_02198aa0_2*)var7)->unknown_10_;
    int var12 = 0;
    if (var11.unknown_0_ - 0x2666 < var1->obj3D_.position_.x && var1->obj3D_.position_.x < var11.unknown_0_ + 0x2666 &&
          var11.unknown_8_ - 0x2666 < var1->obj3D_.position_.z && var1->obj3D_.position_.z < var11.unknown_8_ + 0x2666 &&
          var11.unknown_4_ - 0x1000 < var1->obj3D_.position_.y && var1->obj3D_.position_.y < var11.unknown_4_ + 0x1000) var12 = 1;
    if (!var12) return;
    Struct_ov017_02198aa0_3 var13;
    func_ov017_0219a674((unsigned char*)&var13);
    var13.unknown_0_ = 4;
    func_ov017_0219b33c(arg0, &var13);
    int var14 = 0;
    if (g_keyManager.TestKeysPressed(1)) var14 = 1;
    int var15 = -1;
    int var16 = -1;
    if (g_touchInput.released_ && (unsigned int)g_touchInput.prevTimeHeld_ < 10) { var15 = g_touchInput.prevX_; var16 = g_touchInput.prevY_; }
    {
        int var17, var18;
        func_0202ec84(var2, (Struct_02015ef4*)&var1->obj3D_.position_, &var17, &var18);
        if (var15 > 0x70 && var15 < 0x90 && var16 > 0x28 && var16 < 0x60) var14 = 1;
        else if (var17 - 12 < var15 && var15 < var17 + 12 && var18 - 12 < var16 && var16 < var18 + 12) var14 = 0;
    }
    if (!var14) return;
    if ((unsigned char)(var8 + 254) <= 1) {
        func_0201bfd4(static_cast<Zone3D*>(var6));
        Struct_ov017_02198aa0_4* var19 = (Struct_ov017_02198aa0_4*)func_0200fd0c(var0);
        func_02070378((char*)var19);
        var19->unknown_7_ = 1;
        var19->unknown_c_ = 1;
        if (var9 == 2) {
            switch (var10) {
            case 1: var19->unknown_0_ = 0xa08d; break;
            case 2: var19->unknown_0_ = 0xa0f1; break;
            case 3: var19->unknown_0_ = 0xa155; break;
            case 4: var19->unknown_0_ = 0xa1b9; break;
            case 5: var19->unknown_0_ = 0xa21d; break;
            default: var19->unknown_0_ = 0xa08d; break;
            }
            unsigned short var20 = ((Struct_ov017_02198aa0_2*)var7)->unknown_8_;
            var19->unknown_0_ += var20;
            var19->unknown_1c_ = 0x323d;
        } else {
            var19->unknown_0_ = 0x9c41;
        }
        func_0200fcfc(var0, var19);
        Struct_0201bdac_2* var21 = (Struct_0201bdac_2*)var3->unknown_ptr_array_36fc[0];
        unsigned char* var22 = (unsigned char*)var3->unknown_ptr_array_36fc[4];
        func_ov017_0219e310(var22, 0);
        func_020469b4(var21, (Struct_0201bdac*)var22);
    } else {
        Struct_0201bdac_2* var23 = (Struct_0201bdac_2*)arg0->unknown_ptr_array_36fc[0];
        unsigned char* var24 = (unsigned char*)var3->unknown_ptr_array_3afc[26];
        func_ov017_021be0a0(var24);
        func_020469b4(var23, (Struct_0201bdac*)var24);
    }
}
