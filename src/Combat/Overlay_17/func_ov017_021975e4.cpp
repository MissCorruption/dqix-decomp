#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "World/Zone3D.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

typedef Struct_020134e0::Struct_02018300 Struct_02018300;

struct Struct_0203402c;
struct Struct_02038598_5;

extern "C" void* func_02012fe4(void);
extern "C" unsigned int* func_020d6c00();
extern "C" int func_020535c8(signed char* arg0);
extern "C" int func_0203402c(Struct_0203402c* arg0);
extern "C" int func_02046b60(Struct_02038598_5* arg0, int arg1);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" int func_02094b9c(Struct_02018300* arg0, Vector3i* arg1);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);

// USA: func_ov017_021975e4
extern "C" ARM void func_ov017_021975e4(GameResources* arg0) {
    GameState* var0 = GameState::GetInstance();
    Zone3D* var1 = (Zone3D*)func_02012fe4();
    unsigned int* var2 = func_020d6c00();
    GameObject* var3 = var0->GetUnknownGameObject();
    Vector3i var4 = var3->obj3D_.position_;
    Struct_02037d10* var5 = func_020399a8(var3);
    GameResources* var6 = GetGameResources();
    Struct_02038598_5* var7 = (Struct_02038598_5*)var6->unknown_ptr_array_36fc[0];

    if (g_keyManager.TestKeysHeld(0x402)) return;
    if (func_020535c8((signed char*)var3) || var5->unknown_0_) return;
    if (func_0203402c((Struct_0203402c*)var3)) return;
    if (func_02046b60(var7, 0xc)) return;
    if (func_02046b60(var7, 0x2d)) return;
    if (func_02046b60(var7, 0x26)) return;
    if (func_02046b60(var7, 0x35)) return;
    int var8 = ((unsigned char*)var3)[0xbe] == 0 ? 1 : 0;
    if (var8 == 1) return;

    Struct_02018300* var9 = (Struct_02018300*)func_0201e838((unsigned char*)&var1->substruct_6c_, 9);
    while (var9 != 0) {
        Struct_02037d10 var10;
        func_02038508(&var10);
        if (func_02094b9c(var9, &var4)) {
            Vector3i var11;
            int var12 = fix32cos(var9->unknown_20_);
            var11.x = fix32sin(var9->unknown_20_);
            var11.y = 0;
            var11.z = var12;
            Vector3fix_Normalize(&var11, &var11);

            short var13 = *(short*)((char*)var3 + 0xae);
            Vector3i var14;
            var12 = fix32cos(var13);
            var14.x = fix32sin(var13);
            var14.y = 0;
            var14.z = var12;
            Vector3fix_Normalize(&var14, &var14);

            Vector3i var15 = *(Vector3i*)(var6->unknown_4420_ + 0x18);
            int var16 = Vector3fix_InnerProduct(&var11, &var14);
            int var17 = Vector3fix_InnerProduct(&var11, &var15);
            Vector3i var18;
            Vector3fix_Subtract(&var4, &var9->unknown_8_.unknown1_0_, &var18);

            if (var9->unknown_2c_.unknown5_0_.unknown_5_ & 1) {
                if (var16 >= 0) {
                    var9 = var9->unknown_70_;
                    continue;
                }
            } else {
                if (var16 <= 0) {
                    var9 = var9->unknown_70_;
                    continue;
                }
            }

            int var19 = 0;
            if ((*(short*)(arg0->unknown_42e3_ + 0xb)) <= 1) {
                if (((unsigned char*)var3)[0xbe] == 1 && (var17 < -0xccc || var17 > 0xccc || var16 < -0xccc || var16 > 0xccc)) {
                    (*(short*)(arg0->unknown_42e3_ + 0xb))++;
                } else {
                    (*(short*)(arg0->unknown_42e3_ + 0xb)) = 0;
                }
            } else if ((*(short*)(arg0->unknown_42e3_ + 0xb)) > 1) {
                (*(short*)(arg0->unknown_42e3_ + 0xb)) = 0;
                var19 = 1;
            }
            if (!var19) {
                var9 = var9->unknown_70_;
                continue;
            }

            Struct_02018300* var20 = func_0201e6d4(&var1->substruct_6c_, var9->unknown_2c_.unknown5_0_.unknown_2_);
            if (!var20) return;

            var10.unknown_0_ = 1;
            var10.unknown_6_ = var9->unknown_20_;
            if (var9->unknown_2c_.unknown5_0_.unknown_5_ & 1) {
                var10.unknown_5c_ = var9;
                var10.unknown_58_ = var20;
                var10.unknown_c_.unknown1_0_ = var20->unknown_8_.unknown1_0_;
                var10.unknown_18_.unknown1_0_ = var9->unknown_8_.unknown1_0_;
                var10.unknown_30_.unknown1_0_ = var20->unknown_8_.unknown1_0_;
                var10.unknown_3c_.unknown1_0_ = var9->unknown_8_.unknown1_0_;
                var10.unknown_8_ = var20->unknown_20_;
                var10.unknown_a_ = var9->unknown_20_;
                var10.unknown_3_ = 1;
                var10.unknown_3c_.unknown1_0_.x += var11.x;
                var10.unknown_3c_.unknown1_0_.z += var11.z;
                var10.unknown_30_.unknown1_0_.x += -var11.x >> 2;
                var10.unknown_30_.unknown1_0_.z += -var11.z >> 2;
                var10.unknown_18_.unknown1_0_.y -= 0x1000;
                var10.unknown_8_ -= 0x3243;
                if (var10.unknown_8_ < 0) var10.unknown_8_ += 0x6487;
            } else {
                var10.unknown_5c_ = var20;
                var10.unknown_58_ = var9;
                var10.unknown_c_.unknown1_0_ = var9->unknown_8_.unknown1_0_;
                var10.unknown_18_.unknown1_0_ = var20->unknown_8_.unknown1_0_;
                var10.unknown_30_.unknown1_0_ = var9->unknown_8_.unknown1_0_;
                var10.unknown_3c_.unknown1_0_ = var20->unknown_8_.unknown1_0_;
                var10.unknown_8_ = var9->unknown_20_;
                var10.unknown_a_ = var20->unknown_20_;
                var10.unknown_3_ = 0;
                var10.unknown_3c_.unknown1_0_.x += var11.x;
                var10.unknown_3c_.unknown1_0_.z += var11.z;
                var10.unknown_30_.unknown1_0_.x += -var11.x >> 2;
                var10.unknown_30_.unknown1_0_.z += -var11.z >> 2;
                var10.unknown_18_.unknown1_0_.y -= 0x1000;
                var10.unknown_8_ -= 0x3243;
                if (var10.unknown_8_ < 0) var10.unknown_8_ += 0x6487;
            }
            func_020398b4(var3, &var10);
            func_020466e4(var2, 0x400);
        }
        var9 = var9->unknown_70_;
    }
}
