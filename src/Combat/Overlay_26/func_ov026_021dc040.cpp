#include <globaldefs.h>
#include <GameState/GameState.h>
#include "GameState/Field3b0.h"
#include <Graphics/Vector.h>
#include <Memory/SafeAllocator.h>
#include <std_library_functions.h>

struct Struct_ov000_02161e30;
struct Struct_ov000_0217e870_2;
struct Struct_0204a438;
struct Struct_02033834;
struct Struct_02010604;
struct Struct_02012050;
struct Struct_ov026_021daec8;
#if defined(jpn)
struct Struct_ov000_02160da0 { char unknown_0_[0x7902]; signed char unknown_7712_; };
#else
struct Struct_ov000_02160da0 { char unknown_0_[0x7712]; signed char unknown_7712_; };
#endif

struct Struct_ov026_021dc040 {
    char unknown_0_[0x3c];
    unsigned int unknown_3c_0_ : 30;
    unsigned int unknown_3f_6_ : 1;
    unsigned int unknown_3f_7_ : 1;
    unsigned short inline_ov026_021dc040() { return unknown_3f_6_; }
};
extern "C" Object3D* func_0204a438(Struct_0204a438*);
extern "C" int func_ov000_0215fc60(char*);
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_02033b88(Struct_02010604*, int);
extern "C" void func_020100c4(GameState*, int);
extern "C" void func_ov000_0216118c(void*, int);
extern "C" void func_ov000_02167e6c(unsigned char*);
extern "C" void func_0200fd48(GameState*, int);
extern "C" void func_02012050(Struct_02012050*);
extern "C" {
int func_ov000_0215e9fc(Struct_ov000_02161e30*, short*, int, int);
int func_ov000_02160f14(Struct_ov000_02160da0*);
void func_ov026_021daec8(Struct_ov000_02161e30*, Struct_ov026_021daec8*, int);
void func_ov000_021626a0(Struct_ov000_02160da0*, int, int);
void __clear(void*, int);
}
struct Struct_ov026_021de6a0_2 { signed char unknown_0_[2]; };
extern const Struct_ov026_021de6a0_2 data_ov026_021de6a0;
extern const char data_ov026_021dee57[];

// USA: func_ov026_021dc040
extern "C" ARM int func_ov026_021dc040(SafeAllocator* arg0, Struct_ov000_02160da0* arg1, Struct_ov000_02161e30* arg2, Struct_ov000_0217e870_2* arg3) {
    GameState* var0 = GameState::GetInstance();
    Struct_0204a438* var1 = (Struct_0204a438*)func_020100bc(var0);
    if (!var1) return 1;
    Object3D* var2 = func_0204a438(var1);
    if (!var2) return 1;
    GameObject* var3 = var0->GetGameObjectByIndex(0xcf);
    if (!var3) return 1;
    var3->obj3D_.MaybeUpdateBonePositions();
    Model3D* var4 = var3->obj3D_.pModel_;
    if (var4) {
        short var5[4];
        int var6 = func_ov000_0215e9fc(arg2, var5, 4, 0);
        if (func_ov000_0215fc60((char*)arg2)) var6 = 1;
        if (var6 > 0) {
            Vector3fix var7 = {};
            int var8[2] = {};
            for (int var9 = 0; var9 < var6; ++var9) {
                if (func_020a35e0((unsigned char*)arg3, var5[var9])) {
                    GameObject* var10 = func_0200ff1c(var0, var5[var9]);
                    if (var10 && var10->obj3D_.pModel_) {
                        Struct_ov026_021dc040* var11 = (Struct_ov026_021dc040*)var10->baseStats_;
                        ++var8[var11->inline_ov026_021dc040()];
                        Struct_ov026_021de6a0_2 var12 = data_ov026_021de6a0;
                        char var13[6];
                        int var14 = ((Struct_ov026_021dc040*)var10->baseStats_)->inline_ov026_021dc040();
                        sprintf(var13, data_ov026_021dee57, var12.unknown_0_[var14], var8[var14]);
                        Object3D::TrackedBoneMatrix* var15 = var3->obj3D_.GetTrackedBoneMatrix(var4->GetBoneIndex(var13));
                        if (var15) {
                            Vector3fix var16;
                            var16.x = var15->matrix.translation.x;
                            var16.y = var15->matrix.translation.y;
                            var16.z = var15->matrix.translation.z;
                            Vector3fixMultiplyScalar(&var16, 266, &var16);
                            var10->obj3D_.position_ = var16;
                            func_02033874((Struct_02033834*)var10, fix32_Atan2(var15->matrix.rotation.rows[2].x, var15->matrix.rotation.rows[2].z));
                            Vector3fix_Add(&var7, &var16, &var7);
                        }
                    }
                }
            }
            Vector3fixMultiplyScalar(&var7, (int)(4096.0f * (1.0f / (float)var6)), &var7);
            int var17 = -var7.x;
            for (int var18 = 0; var18 < var6; ++var18) {
                if (func_020a35e0((unsigned char*)arg3, var5[var18])) {
                    GameObject* var19 = func_0200ff1c(var0, var5[var18]);
                    if (var19) {
                        Vector3fix var20 = var19->obj3D_.position_;
                        var20.x += var17;
                        var20.y = 204;
                        var19->obj3D_.position_ = var20;
                    }
                }
            }
        }
    }
    if (arg1->unknown_7712_ == 0 && !var2->HasAnimationStopped()) return 0;
    if (arg1->unknown_7712_ != 6) {
        for (int var21 = 0; var21 < 4; ++var21) {
            if (func_020a35e0((unsigned char*)arg3, var21)) {
                GameObject* var22 = func_0200ff1c(var0, var21);
                if (var22) {
                    var22->obj3D_.RemoveAnimationPackageByID(3);
                    func_02033b88((Struct_02010604*)var22, 0);
                    func_02033874((Struct_02033834*)var22, 0x3244);
                }
            }
        }
        func_020100c4(var0, func_ov000_02160f14(arg1));
        func_ov000_0216118c(arg1, 1);
        func_ov000_02167e6c((unsigned char*)arg1);
        func_ov026_021daec8(arg2, (Struct_ov026_021daec8*)func_ov000_02160f14(arg1), 1);
        func_ov000_021626a0(arg1, 0x26, 0);
        func_ov000_021626a0(arg1, 0x27, 1);
        arg0->Reset();
        func_0200fd48(var0, 0xcf);
        func_02012050((Struct_02012050*)var0);
    }
    return 1;
}
