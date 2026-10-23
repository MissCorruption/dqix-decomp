#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_02049ee8(unsigned char* arg0);
extern "C" int func_ov000_021681f8(int arg0, int arg1);
extern "C" int func_ov000_02167b5c(int arg0, int arg1);
extern "C" void func_ov000_02167b54(int* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02049b20(unsigned char* arg0, int* arg1);
extern "C" void func_02049bac(unsigned char* arg0, int* arg1);
extern "C" void func_ov000_0216f718(void* arg0, int arg1);
extern "C" void func_ov000_0216f720(void* arg0, int arg1);

struct Struct_ov000_021677fc_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    char unknown_2_[2];
    unsigned short unknown_4_;
    unsigned char unknown_6_[8];
    unsigned char unknown_e_0_ : 4;
    unsigned char unknown_e_4_ : 4;
    char unknown_f_[0x18 - 0xf];
};

struct Struct_ov000_021677fc_3 {
    struct Struct_ov000_021677fc_2 unknown_0_[3];
};

struct Struct_ov000_021677fc_4 {
    char unknown_0_[0x81b0];
    struct Struct_ov000_021677fc_3 unknown_81b0_;
    char unknown_81f8_[0x8de0 - 0x81b0 - sizeof(struct Struct_ov000_021677fc_3)];
    int unknown_8de0_[8];
};

struct Struct_ov000_021677fc {
#if defined(jpn)
    char unknown_0_[0x218];
    struct Struct_ov000_021677fc_4* unknown_29c_;
    char unknown_21c_[0x394 - 0x21c];
    char unknown_394_[0x57cc - 0x394];
#else
    char unknown1_0_[0x18];
    char unknown_18_[0x284];
    struct Struct_ov000_021677fc_4* unknown_29c_;
    char unknown_2a0_[0x55dc - 0x2a0];
#endif
    int unknown_55dc_;
    int unknown_55e0_;
};

static inline int inline_ov000_021677fc(int arg0, int arg1) { return (int)(((long long)arg0 * arg1 + 0x800) >> 12); }

// USA: func_ov000_021677fc
extern "C" ARM void func_ov000_021677fc(Struct_ov000_021677fc* arg0) {
    struct Struct_ov000_021677fc_2* var0;
    struct Struct_ov000_021677fc_3* var1;
    int var2;
    char* var3;
    GameState* var4 = GameState::GetInstance();
    GetGameResources();
    struct Struct_ov000_021677fc_4* var5 = arg0->unknown_29c_;
    arg0->unknown_55dc_ = 0;
    arg0->unknown_55e0_ = 0;
#if defined(jpn)
    var3 = arg0->unknown_394_ + 0x800;
#else
    var3 = arg0->unknown_18_ + 0xc00;
#endif
    var1 = &var5->unknown_81b0_;
    for (var2 = 0; var2 < var1->unknown_0_[0].unknown_1_4_; var2++) {
        var0 = &var1->unknown_0_[var2];
        for (int var6 = 0; var6 < var0->unknown_e_0_; var6++) {
            int var7 = var0->unknown_6_[var6] + 0xc0;
            GameObject* var8 = var4->GetCombatantByIndex(var7);
            if (var8 != 0 && func_02049ee8((unsigned char*)var8) != 0) {
                int var9;
                struct Struct_ov000_021677fc_4* var10 = arg0->unknown_29c_;
                int var11 = 0;
                for (; var11 < 8; var11++) {
                    if (var7 == (var10->unknown_8de0_[var11] & 0xff)) {
                        var9 = 1;
                        goto done;
                    }
                }
                var9 = 0;
done:
                if (!var9) {
                    int var12 = -1;
                    for (int var13 = 0; var13 < 8; var13++) {
                        GameObject* var14 = var4->GetCombatantByIndex(arg0->unknown_29c_->unknown_8de0_[var13] & 0xff);
                        if (var14 == 0 || func_02049ee8((unsigned char*)var14) == 0) {
                            var12 = var13;
                            break;
                        }
                    }
                    if (var12 != -1) {
                        arg0->unknown_29c_->unknown_8de0_[var12] = var7;
                    }
                }
            }
        }
    }
    int var15 = 0;
    for (int var16 = 0; var16 < 8; var16++) {
        if (var4->GetCombatantByIndex(arg0->unknown_29c_->unknown_8de0_[var16] & 0xff) != 0) {
            var15++;
        }
    }
    for (int var17 = 0; var17 < 8; var17++) {
        GameObject* var18 = var4->GetCombatantByIndex(arg0->unknown_29c_->unknown_8de0_[var17] & 0xff);
        if (var18 != 0) {
            int var19 = var18->obj3D_.GetRadius();
            int var20 = var18->obj3D_.GetHeight();
            int var21 = func_ov000_021681f8(var18->obj3D_.unknown_2_, var15);
            arg0->unknown_55dc_ += inline_ov000_021677fc(var19, var21);
            if (arg0->unknown_55e0_ < var20) {
                arg0->unknown_55e0_ = var20;
            }
        }
    }
    arg0->unknown_55e0_ += 0x800;
    int var22 = func_ov000_02167b5c(arg0->unknown_55dc_, var15 & 0xff);
    arg0->unknown_55dc_ += var22 * (var15 - 1);
    int var23 = -(arg0->unknown_55dc_ / 2);
    for (int var24 = 0; var24 < 8; var24++) {
        GameObject* var25 = var4->GetCombatantByIndex(arg0->unknown_29c_->unknown_8de0_[var24] & 0xff);
        if (var25 != 0) {
            int var26 = var25->obj3D_.GetRadius();
            int var27 = func_ov000_021681f8(var25->obj3D_.unknown_2_, var15);
            int var28 = inline_ov000_021677fc(var26, var27);
            int var29 = var28 / 2;
            int var30[3];
            int var31[3];
            var23 += var29;
            func_ov000_02167b54(var30, var23, 0xcc, -0x2800);
            func_02049b20((unsigned char*)var25, var30);
            func_ov000_02167b54(var31, 0, 0, 0);
            func_02049bac((unsigned char*)var25, var31);
            var23 += var29;
            var23 += var22;
        }
    }
    func_ov000_0216f718(var3, arg0->unknown_55dc_);
    func_ov000_0216f720(var3, arg0->unknown_55e0_);
}
