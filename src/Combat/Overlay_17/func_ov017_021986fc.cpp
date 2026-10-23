#include <globaldefs.h>
#include "Combat/LootPointEvent.h"
#include "Combat/LootPickupEvent.h"
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Input/Input.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct_ov017_021986fc_2 {
    unsigned int unknown_0_0_ : 16;
    unsigned int unknown_2_0_ : 7;
    unsigned int unknown_2_7_ : 9;
    unsigned int unknown_4_0_ : 17;
    unsigned int unknown_6_1_ : 4;
    unsigned int unknown_6_5_ : 8;
    unsigned int unknown_7_5_ : 3;
    Struct_0208ec78* unknown_8_;
    Vector3fix unknown_c_[8];
    struct Struct_ov017_021986fc_2* unknown_6c_;
};

struct Struct_0208e7d0 {
    char unknown_0_[4];
    struct Struct_ov017_021986fc_2* unknown_4_;
};

struct Struct_ov017_021986fc_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[19];
};

struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_02015ef4;
struct Struct_0208f3b4;
struct Struct_0202c1a4;

extern "C" Zone3D* func_02012fe4(void);
extern "C" Struct_0208e7d0* func_0208e0a8(void);
extern "C" int func_0208e824(void*, char*);
extern "C" int func_020535c8(signed char*);
extern "C" Struct_0208f3b4* func_0208e9e8(void);
extern "C" void* func_020100bc(GameState*);
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" void func_ov017_0219b33c(void*, Struct_ov017_021986fc_3*);
extern "C" int func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" Struct_0202c1a4* func_0202ae18(void);
extern "C" int func_0202c1a4(Struct_0202c1a4*);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_0208f3b4(Struct_0208f3b4*, int);
extern "C" int func_0208e7d0(Struct_0208e7d0*);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);

// USA: func_ov017_021986fc
extern "C" ARM void func_ov017_021986fc(GameResources* arg0) {
    Zone3D* var0 = func_02012fe4();
    Zone3D_StructPtr_8* var1 = var0->pUnknownStruct_8_;
    Struct_0208e7d0* var2 = func_0208e0a8();
    if (!func_0208e824(var2, var1->mapShortName_)) return;
    GameState* var3 = GameState::GetInstance();
    GameObject* var4 = var3->GetUnknownGameObject();
    if (func_020535c8((signed char*)var4)) return;
    func_0208e9e8();
    Struct_ov017_021986fc_2* var5 = var2->unknown_4_;
    void* var6 = func_020100bc(var3);

    int var7 = 0;
    unsigned int var8 = 0;
    unsigned char var9 = 0;
    unsigned char var10 = 0;
    for (; var5 != NULL; var5 = var5->unknown_6c_, var9++) {
        if (var5->unknown_8_ != NULL) {
            for (unsigned int var11 = 0; var11 < var5->unknown_6_1_; var11++) {
                unsigned int var12 = 1 << var11;
                if ((var5->unknown_6_5_ & var12) == 0) continue;
                if (var5->unknown_c_[var11].x - 2867 >= var4->obj3D_.position_.x) continue;
                if (var5->unknown_c_[var11].x + 2867 <= var4->obj3D_.position_.x) continue;
                if (var5->unknown_c_[var11].z - 2867 >= var4->obj3D_.position_.z) continue;
                if (var5->unknown_c_[var11].z + 2867 <= var4->obj3D_.position_.z) continue;
                var10 = var11 + var9 * 8;
                var7 = 1;
                var8 = var12;
                Struct_ov017_021986fc_3 var13;
                func_ov017_0219a674((unsigned char*)&var13);
                var13.unknown_0_ = 3;
                func_ov017_0219b33c(arg0, &var13);
                break;
            }
            if (var7) break;
        }
    }
    if (!var7) return;

    int var14 = 0;
    if (g_keyManager.TestKeysPressed(1)) var14 = 1;
    int var15 = -1;
    int var16 = -1;
    if (g_touchInput.released_ && (unsigned int)g_touchInput.prevTimeHeld_ < 10) { var15 = g_touchInput.prevX_; var16 = g_touchInput.prevY_; }
    int var17, var18;
    func_0202ec84(var6, (Struct_02015ef4*)&var4->obj3D_.position_, &var17, &var18);
    if (var15 > 0x70 && var15 < 0x90 && var16 > 0x28 && var16 < 0x60) var14 = 1;
    else if (var17 - 12 < var15 && var15 < var17 + 12 && var18 - 12 < var16 && var16 < var18 + 12) var14 = 1;
    if (!var14) return;

    func_ov017_021d38f8(1, func_0202c1a4(func_0202ae18()), var8, var5->unknown_2_0_, var5->unknown_8_);
    var5->unknown_8_->unknown_0_.unknown_2_1_ = ~var8 & var5->unknown_8_->unknown_0_.unknown_2_1_;
    var5->unknown_6_5_ = ~var8 & var5->unknown_6_5_;
    var5->unknown_8_->unknown_0_.unknown_0_0_ = var5->unknown_8_->unknown_0_.unknown_3_1_ * 30;
    void* var19 = func_0205ec34();
    func_0206df6c(var19, (unsigned char*)var19 + 0x8c, var5->unknown_2_0_ + 0xc12, 1);
    func_0208f3b4(func_0208e9e8(), var10);
    if (var5->unknown_2_0_ >= 0x62) var5->unknown_0_0_ = func_0208e7d0(var2);
    func_ov017_021ae800(((Struct_ov017_021986fc*)arg0->unknown_ptr_array_3afc[11]));
    ((Struct_ov017_021986fc*)arg0->unknown_ptr_array_3afc[11])->unknown_c_ = var5->unknown_0_0_;
    ((Struct_ov017_021986fc*)arg0->unknown_ptr_array_3afc[11])->unknown_14_ = var4->obj3D_.position_;
    ((Struct_ov017_021986fc*)arg0->unknown_ptr_array_3afc[11])->unknown_20_ = 0;
    ((Struct_ov017_021986fc*)arg0->unknown_ptr_array_3afc[11])->unknown_24_ = 0x1f;
    func_020469b4((Struct_0201bdac_2*)arg0->unknown_ptr_array_36fc[0], (Struct_0201bdac*)((Struct_ov017_021986fc*)arg0->unknown_ptr_array_3afc[11]));
}
