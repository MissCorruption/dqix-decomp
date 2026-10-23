#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include <GameState/GameState.h>
#include <Graphics/Vector.h>
#include <Resource/GameResources.h>
#include "World/Zone3D.h"
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_020ad61c_10168 = 0x27f8, Enum_020ad61c_10180 = 0x2804 };
#else
enum { Enum_020ad61c_10168 = 0x27b8, Enum_020ad61c_10180 = 0x27c4 };
#endif

struct Struct_020ad61c_3 {
    Object3D unknown_0_;
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_[0x80];
    int unknown_130_;
    unsigned char unknown_134_[8];
    int unknown_13c_;
    int unknown_140_;
    int unknown_144_;
    int unknown_148_;
    unsigned short unknown_14c_;
    unsigned short unknown_14e_;
    int unknown_150_;
    unsigned char unknown_154_[16];
    Vector3i unknown_164_;
    int unknown_170_;
    Vector3i unknown_174_;
    int unknown_180_;
};
struct Struct_02015438;
struct Struct_ov017_021d82fc_5 {
    unsigned char unknown_0_[13];
    unsigned char unknown_d_;
};
struct Struct_02015ef4 {
    unsigned int unknown_0_[3];
};
struct Struct_020ad61c;
struct Struct_020ad61c_2;
extern "C" Zone3D* func_02012fe4(void);
extern "C" void func_020332ac(Struct_020ad61c_3*);
extern "C" void func_020adda4(Struct_020ad61c_3*);
extern "C" void func_020adaac(Struct_020ad61c_3*);
extern "C" void func_020ae398(Struct_020ad61c*);
extern "C" void func_020ae3f4(Struct_020ad61c_2*);
extern "C" int func_02046b24(Struct_02015438**);
extern "C" void func_020397c0(void*);
extern "C" int func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" int func_02018fbc(Zone3D*, Struct_02015ef4*);
extern "C" int func_02046b08(void**);
extern "C" void func_ov017_021a72f4(GameResources*, int);
extern short data_020e9450[];
extern Struct_ov017_021d82fc_5 data_ov017_021d82fc;

// USA: func_020ad61c
extern "C" ARM void func_020ad61c(Struct_020ad61c_3* arg0) {
    Zone3D* var0;
    int var1;
    int var2;
    GameState* var3 = GameState::GetInstance();
    var0 = func_02012fe4();
    int var4 = arg0->unknown_144_;
    int var5 = arg0->unknown_148_;
    func_020332ac(arg0);
    func_020adda4(arg0);
    switch (arg0->unknown_13c_) {
    case 0:
        func_020adaac(arg0);
        *(Vector3i*)((char*)var0 + Enum_020ad61c_10168) = arg0->unknown_0_.position_;
        *(int*)((char*)var0 + Enum_020ad61c_10180) = arg0->unknown_ae_;
        arg0->unknown_140_ = 0;
        break;
    case 1:
        func_020ae398((Struct_020ad61c*)arg0);
        break;
    case 2:
        func_020ae3f4((Struct_020ad61c_2*)arg0);
        break;
    }
    arg0->unknown_144_ = var4;
    arg0->unknown_148_ = var5;
    arg0->unknown_14c_ += var3->GetTickCount() * 364;
    arg0->unknown_150_ = data_020e9450[(arg0->unknown_14c_ >> 4) * 2 + 1] >> 4;
    if (var0->currentZoneID_ != 10100) return;
    Vector3i var6;
    var6 = arg0->unknown_0_.position_;
    arg0->unknown_130_ = 0;
    if (var6.x >= 0x90000) {
        arg0->unknown_130_ |= 1;
        var6.x -= 0x120000;
        arg0->unknown_164_.x -= 0x120000;
        arg0->unknown_174_.x -= 0x120000;
    } else if (var6.x < -0x90000) {
        arg0->unknown_130_ |= 2;
        var6.x += 0x120000;
        arg0->unknown_164_.x += 0x120000;
        arg0->unknown_174_.x += 0x120000;
    }
    if (var6.z >= 0x70000) {
        arg0->unknown_130_ |= 4;
        var6.z -= 0xe0000;
        arg0->unknown_164_.z -= 0xe0000;
        arg0->unknown_174_.z -= 0xe0000;
    } else if (var6.z < -0x70000) {
        arg0->unknown_130_ |= 8;
        var6.z += 0xe0000;
        arg0->unknown_164_.z += 0xe0000;
        arg0->unknown_174_.z += 0xe0000;
    }
    arg0->unknown_0_.position_ = var6;
    GameResources* var7 = GetGameResources();
    void* var8;
    int var9;
    Struct_02015438** var10 = (Struct_02015438**)var7->unknown_ptr_array_36fc[0];
    GameObject* var11 = var3->GetUnknownGameObject();
    if (var11 && func_02046b24(var10) != 3) {
        var11->obj3D_.position_ = arg0->unknown_0_.position_;
        func_020397c0(var11);
    }
    var8 = func_020100bc(var3);
    int var12 = 0;
    var9 = 0;
    int var13[3];
    int var14[3];
    Struct_02015ef4 var15[3] = {};
    var15[0] = *(Struct_02015ef4*)&arg0->unknown_0_.position_;
    var15[1] = *(Struct_02015ef4*)&arg0->unknown_164_;
    var15[2] = *(Struct_02015ef4*)&arg0->unknown_174_;
    for (int var16 = 0; var16 < 3; var16++) func_0202ec84(var8, &var15[var16], &var13[var16], &var14[var16]);
    if (g_touchInput.released_ && (unsigned int)g_touchInput.prevTimeHeld_ < 10) {
        var1 = g_touchInput.prevX_;
        var2 = g_touchInput.prevY_;
    }
    for (int var17 = 0; var17 < 3; var17++) {
        if (var13[var17] - 16 < var1 && var1 < var13[var17] + 16 &&
            var14[var17] - 24 < var2 && var2 < var14[var17] + 8) {
            var12 = 1;
            break;
        }
    }
    if (!var12) {
        for (int var18 = 0; var18 < 3; var18++) {
            var15[var18].unknown_0_[1] = func_02018fbc(var0, &var15[var18]);
            func_0202ec84(var8, &var15[var18], &var13[var18], &var14[var18]);
            if (var13[var18] - 16 < var1 && var1 < var13[var18] + 16 &&
                var14[var18] - 24 < var2 && var2 < var14[var18] + 8) {
                var9 = 1;
                break;
            }
        }
    }
    if (func_02046b08((void**)var10) && arg0->unknown_13c_ == 0) {
        if (g_keyManager.TestKeysPressed(1) || var9) {
            func_ov017_021a72f4(var7, 1);
        } else if (g_keyManager.TestKeysPressed(2) || var12) {
            func_ov017_021a72f4(var7, 0);
        } else if (g_keyManager.TestKeysPressed(256)) {
            if (!(data_ov017_021d82fc.unknown_d_ & 16)) data_ov017_021d82fc.unknown_d_ |= 16;
        }
    }
}
