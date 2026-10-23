#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"

struct Struct_020312bc {
    Vector3fix unknown_0_[3];
    Vector3fix unknown_24_;
};

struct Struct_02033f6c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_ov017_02192b48_5 {
    int unknown_0_;
};

struct Struct_ov017_02192b48_6 {
    Struct_ov017_02192b48_5* unknown_0_;
    unsigned char unknown_4_[0x10];
    Struct_02033f6c* unknown_14_;
};

struct Struct_ov017_02192b48_7 {
    int unknown_0_;
    Struct_ov017_02192b48_6* unknown_4_;
};

struct Struct_ov017_02192b48_8 {
    unsigned char unknown_0_[0x24];
    Struct_ov017_02192b48_7* unknown_24_;
};

struct Struct_ov017_02193dc4_3 {
#if defined(jpn)
    unsigned char unknown_0_[0x844];
#else
    unsigned char unknown1_0_[0x824];
#endif
    Struct_ov017_02192b48_8** unknown_824_;
    unsigned char unknown_828_[0x4];
    int unknown_82c_;
};

struct Struct_ov017_02193dc4_4 {
    short unknown_0_[96][12];
    int unknown_900_;
    int unknown_904_;
    Vector3i unknown_908_;
    int unknown_914_;
    int unknown_918_;
    int unknown_91c_;
    unsigned char unknown_920_[96];
};

struct Struct_ov017_02193dc4 {
    Vector3i unknown_0_;
    Vector3i unknown_c_;
};

class Struct_ov017_02193dc4_2 : public Object3D {
public:
    short unknown_ac_;
};

extern "C" void* func_02012fe4(void);
extern "C" void func_02031188(Struct_020312bc* arg0, short* arg1);
extern "C" long long func_020c32f8(int);
extern "C" long long func_020c3260(int);
extern "C" float func_0200c700(long long);
extern "C" int func_020312bc(Struct_020312bc* arg0, int arg1, Vector3fix* arg2, Vector3fix* arg3, Vector3fix* arg4);
extern "C" int func_02017d90(Struct_ov017_02193dc4_3* arg0, int arg1, Struct_ov017_02193dc4_4* arg2, Struct_ov017_02193dc4 arg3, Struct_ov017_02193dc4_2* arg4);
extern "C" void func_02033f2c(struct Struct_02033f2c* arg0);
extern "C" void func_02033f6c(void* arg0, Struct_02033f6c* arg1);

// USA: func_ov017_02193dc4
extern "C" ARM int func_ov017_02193dc4(Struct_ov017_02193dc4_2* arg0) {
    Struct_ov017_02193dc4_4 var0;
    Struct_020312bc var1[96];
    Struct_ov017_02193dc4_3* var2;
    int var3;
    int var4;

    GameState::GetInstance();
    GetGameResources();
    var2 = (Struct_ov017_02193dc4_3*)func_02012fe4();
    Struct_ov017_02193dc4 var5;
    Vector3i var6 = arg0->position_;
    var3 = 0;
    var5.unknown_0_ = var6;
    var5.unknown_c_ = var6;
    var5.unknown_0_.x += arg0->GetRadius() / 2;
    var5.unknown_0_.y += arg0->GetHeight();
    var5.unknown_0_.z += arg0->GetRadius() / 2;
    var5.unknown_c_.x -= arg0->GetRadius() / 2;
    var5.unknown_c_.y -= 0x28000;
    var5.unknown_c_.z -= arg0->GetRadius() / 2;
    func_02033f2c((Struct_02033f2c*)arg0);
    for (var4 = 0; var4 < var2->unknown_82c_; var4++) {
        int var7 = func_02017d90(var2, var4, &var0, var5, arg0);
        if (var7 > 0) {
            var3 += var7;
            for (int var8 = 0; var8 < var7; var8++) {
                func_02031188(&var1[var8], var0.unknown_0_[var8]);
                Vector3fixMultiplyScalar(&var1[var8].unknown_0_[0], var0.unknown_904_ << 12, &var1[var8].unknown_0_[0]);
                Vector3fixMultiplyScalar(&var1[var8].unknown_0_[1], var0.unknown_904_ << 12, &var1[var8].unknown_0_[1]);
                Vector3fixMultiplyScalar(&var1[var8].unknown_0_[2], var0.unknown_904_ << 12, &var1[var8].unknown_0_[2]);
            }
            Vector3i var9 = var6;
            Matrix3x3 var10;
            Vector3i var11;
            Vector3i var12;
            Vector3i var13;
            Vector3fix_Subtract(&var9, &var0.unknown_908_, &var9);
            int var14 = -(var0.unknown_918_ - 25735);
            int var15 = (int)(4096.0f * (func_0200c700(func_020c32f8(var14)) / 4294967296.0f));
            int var16 = (int)(4096.0f * (func_0200c700(func_020c3260(var14)) / 4294967296.0f));
            Mat3x3_WriteRotationY(&var10, var16, var15);
            Mat3x3_ApplyToVector(&var9, &var10, &var9);
            var11 = var9;
            var11.y += 0x800;
            var12 = var9;
            var12.y -= 0x28000;
            int var17 = func_020312bc(var1, var7, &var11, &var12, &var13);
            if (var17 != -1) {
                var13.y += 0x199;
                Vector3fix_Add(&var13, &var0.unknown_908_, &var13);
                Struct_ov017_02192b48_8* var18 = var2->unknown_824_[var4];
                Struct_ov017_02192b48_7* var19;
                Struct_ov017_02192b48_6* var20;
                if (var18 != NULL && (var19 = var18->unknown_24_) != NULL && (var20 = var19->unknown_4_) != NULL) {
                    if (var20->unknown_0_->unknown_0_ == 3) {
                        Struct_02033f6c var21 = var20->unknown_14_[var0.unknown_920_[var17]];
                        func_02033f6c(arg0, &var21);
                    }
                }
            }
        }
    }
    arg0->unknown_ac_ = 0;
    return var3;
}
