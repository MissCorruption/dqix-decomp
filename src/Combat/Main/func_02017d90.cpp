#include <globaldefs.h>
#include "World/Object3D.h"
#include "NitroSDK/Matrix.h"
#include "World/Zone3D.h"

struct Struct_02017d90 {
    short unknown_0_[96][12];
    int unknown_900_;
    int unknown_904_;
    Vector3i unknown_908_;
    int unknown_914_;
    int unknown_918_;
};
struct Struct_02017d90_2 { Vector3i unknown_0_; Vector3i unknown_c_; };
extern "C" long long func_020c32f8(int);
extern "C" long long func_020c3260(int);
extern "C" float func_0200c700(long long);
extern "C" int func_0204c030(void*, Struct_02017d90*, Struct_02017d90_2);

// USA: func_02017d90
extern "C" ARM int func_02017d90(Zone3D* arg0, int arg1, Struct_02017d90* arg2, Struct_02017d90_2 arg3, Object3D* arg4) {
    if (arg0->isInMainGrottoFloor_23b8_) {
        if (!arg4) return 0;
        FloorMap* var0 = &arg0->grotto_.floorMap_;
        Struct_02016874_2* var1;
        int var2, var3, var4;
        if (arg1 < 256) {
            Struct_02013490* var5 = &arg0->grottoTileMapData_420_[arg1];
            if (var5->unknown_0_) var1 = var5->unknown_0_->unknown_44_->unknown_2c_;
            else return 0;
            var2 = var5->unknown_3c_.x;
            var3 = var5->unknown_3c_.z;
            var4 = var5->unknown_38_;
        } else {
            if (func_020196fc(arg0, 4))
                var1 = func_020196fc(arg0, 4)->unknown_44_->unknown_2c_;
            else return 0;
            var2 = var0->upStairWorldX;
            var3 = var0->upStairWorldZ;
            var4 = var0->fpUpStairRotation;
        }
        if (!var1) return 0;
        if (!var1->unknown_24_) return 0;
        if (var1->unknown_2_ & 4) return 0;
        Struct_02016874_2* var6 = var1->unknown_28_;
        while (var6) {
            if (var6->unknown_2_ & 4) return 0;
            var6 = var6->unknown_28_;
        }
        void* var7 = var1->unknown_24_->unknown_4_;
        if (!var7) return 0;
        Struct_02017d90_2 var8;
        Vector3i var9;
        Matrix3x3 var10;
        var8.unknown_0_ = arg4->position_;
        func_020130a8(&var9, var2, 0, var3);
        Vector3fix_Subtract(&var8.unknown_0_, &var9, &var8.unknown_0_);
        int var11 = -(var4 - 25735);
        int var12 = (int)(4096.0f * (func_0200c700(func_020c32f8(var11)) / 4294967296.0f));
        int var13 = (int)(4096.0f * (func_0200c700(func_020c3260(var11)) / 4294967296.0f));
        Mat3x3_WriteRotationY(&var10, var13, var12);
        Mat3x3_ApplyToVector(&var8.unknown_0_, &var10, &var8.unknown_0_);
        var8.unknown_c_ = var8.unknown_0_;
        var8.unknown_0_.x += arg4->GetRadius() / 2;
        var8.unknown_0_.y += arg4->GetHeight();
        var8.unknown_0_.z += arg4->GetRadius() / 2;
        var8.unknown_c_.x -= arg4->GetRadius() / 2;
        var8.unknown_c_.y -= 0xa000;
        var8.unknown_c_.z -= arg4->GetRadius() / 2;
        int var14 = func_0204c030(var7, arg2, var8);
        arg2->unknown_908_ = var9;
        arg2->unknown_918_ = var4;
        return var14;
    }
    Struct_02016874_2* var15 = arg0->unknown_824_[arg1];
    if (!var15->unknown_24_) return 0;
    if (var15->unknown_2_ & 4) return 0;
    Struct_02016874_2* var16 = var15->unknown_28_;
    while (var16) {
        if (var16->unknown_2_ & 4) return 0;
        var16 = var16->unknown_28_;
    }
    if (var15->unknown_2_ & 1) return 0;
    void* var17 = var15->unknown_24_->unknown_4_;
    if (!var17) return 0;
    Vector3i var18 = var15->unknown_8_;
    Vector3fix_Subtract(&arg3.unknown_0_, &var18, &arg3.unknown_0_);
    Vector3fix_Subtract(&arg3.unknown_c_, &var18, &arg3.unknown_c_);
    arg3.unknown_c_.x -= var15->unknown_58_.x;
    arg3.unknown_c_.y -= var15->unknown_58_.y;
    arg3.unknown_c_.z -= var15->unknown_58_.z;
    arg3.unknown_0_.x += var15->unknown_64_.x;
    arg3.unknown_0_.y += var15->unknown_64_.y;
    arg3.unknown_0_.z += var15->unknown_64_.z;
    int var19 = func_0204c030(var17, arg2, arg3);
    Vector3fix_Add(&arg2->unknown_908_, &var18, &arg2->unknown_908_);
    int var20 = var15->unknown_6_;
    float var21;
    if ((float)var20 / 4096.0f > 0) var21 = 0.5f + 4096.0f * ((float)var20 / 4096.0f);
    else var21 = 4096.0f * ((float)var20 / 4096.0f) - 0.5f;
    arg2->unknown_918_ = (int)var21;
    return var19;
}
