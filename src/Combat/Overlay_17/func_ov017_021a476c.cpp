#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Graphics/Vector.h"
#include "World/ZoneFeatures.h"
#include "Resource/Brightness.h"

struct Struct_0203dce4_2;
struct Struct_0203e0a0;
struct Struct_0203de84;
struct Struct_0203de84_2;
struct Struct_0203402c;
struct Struct_ov009_0218aa28 {
    int unknown_0_, unknown_4_, unknown_8_;
};

#if defined(jpn)
enum { Enum_ov017_021a476c_22308 = 0x54c4 };
#else
enum { Enum_ov017_021a476c_22308 = 0x5724 };
#endif

struct Struct_ov017_021a476c_8 {
    unsigned char unknown_0_;
};

struct Struct_ov017_021a476c_9 {
#if defined(jpn)
    char unknown_0_[0x34ec];
    void* unknown_36fc_;
    char unknown_34f0_[0x416c - 0x34f0];
    Struct_ov017_021a476c_8* unknown_441c_;
    char unknown_4170_[0x41e1 - 0x4170];
#else
    char unknown1_0_[0x36fc];
    void* unknown_36fc_;
    char unknown_3700_[0x441c - 0x3700];
    Struct_ov017_021a476c_8* unknown_441c_;
    char unknown_4420_[0x4491 - 0x4420];
#endif
    unsigned char unknown_4491_;
};

struct Struct_ov017_021a476c_10 {
    Object3D unknown_0_;
#if defined(jpn)
    char unknown_ac_[0x180 - 0xac];
    unsigned int unknown_18c_;
    char unknown_184_[0x1a6 - 0x184];
#else
    char unknown1_ac_[0x18c - 0xac];
    unsigned int unknown_18c_;
    char unknown_190_[0x1b2 - 0x190];
#endif
    unsigned short unknown_1b2_;
};

struct Struct_ov017_021a476c {
    char unknown_0_[0xc];
    unsigned char unknown_c_0_ : 4;
    unsigned char unknown_c_4_ : 1;
};

struct Struct_ov017_021a476c_2 {
    unsigned short unknown_0_;
    char unknown_2_[0x8 - 0x2];
    Struct_ov017_021a476c* unknown_8_;
};

struct Struct_ov017_021a476c_3 {
    unsigned int unknown_0_;
};

struct Struct_ov017_021a476c_4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};

struct Struct_ov017_021a476c_5 {
    char unknown_0_[0xa];
    unsigned char unknown_a_0_ : 3;
    unsigned char unknown_a_3_ : 3;
    char unknown_b_[0x10 - 0xb];
    Vector3fix unknown_10_;
};

struct Struct_ov017_021a476c_6 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
    int unknown_c_;
    short unknown_10_;
    short unknown_12_;
};

struct Struct_ov017_021a476c_7 {
    char unknown_0_[0x8c];
    unsigned char unknown_8c_[1];
};

signed char data_ov017_021d76d8 = -1;
short data_ov017_021d76da = -1;
unsigned short data_ov017_021d83a8;

extern "C" void* func_0203cf4c(void);
extern "C" int func_020421a0(void);
extern "C" Struct_ov017_021a476c_2* func_02012fe4(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_02046b08(void** arg0);
extern "C" int func_ov017_021a4e88(int arg0, unsigned short* arg1);
extern "C" int func_0202b7d8(int* arg0);
extern "C" Struct_ov017_021a476c_3* func_0203dce4(Struct_0203dce4_2* arg0, int arg1);
extern "C" Struct_ov017_021a476c_4* func_02040528(int* arg0);
extern "C" Struct_ov017_021a476c_5* func_02040538(Struct_0203e0a0* arg0);
extern "C" unsigned char func_02039d7c(char* arg0);
extern "C" int func_020535c8(signed char* arg0);
extern "C" int func_0203402c(Struct_0203402c* arg0);
extern "C" void func_ov017_0219a674(unsigned char* arg0);
extern "C" void func_020406f8(Struct_0203de84* arg0, Struct_0203de84_2* arg1);
extern "C" short func_ov017_021a4700(Struct_ov009_0218aa28* arg0, int arg1, Struct_ov009_0218aa28* arg2);
extern "C" int func_ov017_0218daa8(void* arg0, Struct_ov009_0218aa28* arg1, int arg2, int arg3, unsigned char arg4);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_0219b33c(Struct_ov017_021a476c_9* arg0, Struct_ov017_021a476c_6* arg1);
extern "C" int func_02039860(void* arg0);
extern "C" unsigned int func_02039de8(unsigned char* arg0);
extern "C" Struct_ov017_021a476c_7* func_0205ec34(void);
extern "C" int func_ov017_0218d4ec(void* arg0, int arg1);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

// USA: func_ov017_021a476c
extern "C" ARM void func_ov017_021a476c(Struct_ov017_021a476c_9* arg0) {
    Struct_ov017_021a476c_6 var0;
    Struct_ov017_021a476c_6 var1;
    Vector3fix var2;
    GameState* var3 = GameState::GetInstance();
    void* var4 = func_0203cf4c();
    func_020100bc(var3);
    func_020421a0();
    Struct_ov017_021a476c_10* var5 = (Struct_ov017_021a476c_10*)var3->GetUnknownGameObject();
    GameResources* var6 = GetGameResources();
    Struct_ov017_021a476c_2* var7 = func_02012fe4();
    void* var8 = func_0202ae18();

    data_ov017_021d76da = -1;
    data_ov017_021d83a8 = 0;
    data_ov017_021d76d8 = -1;
    *(int*)((char*)var3 + Enum_ov017_021a476c_22308) = -1;

    if (arg0->unknown_4491_ == 0 && !func_02046b08((void**)arg0->unknown_36fc_)) {
        func_ov017_021a4e88(0, &data_ov017_021d83a8);
        return;
    }
    if (func_0202b7d8((int*)var8) && arg0->unknown_441c_->unknown_0_ != 0) {
        return;
    }
    data_ov017_021d76da = func_ov017_021a4e88(1, &data_ov017_021d83a8);
    if (data_ov017_021d76da >= 0) {
        Struct_ov017_021a476c_3* var9 = func_0203dce4((Struct_0203dce4_2*)var4, data_ov017_021d76da);
        if (var9 != NULL) {
            Struct_ov017_021a476c_4* var10 = func_02040528((int*)var9);
            Struct_ov017_021a476c_5* var11 = func_02040538((Struct_0203e0a0*)var9);
            if (var9->unknown_0_ & 0x200) {
                return;
            }
            if (func_02039d7c((char*)var5) != 0 || var6->unknown_4080_ != 0) {
                return;
            }
            if (IsBrightnessOutsideValidRange(var6, false)) {
                return;
            }
            if (func_020535c8((signed char*)var5)) {
                return;
            }
            if (func_0203402c((Struct_0203402c*)var5)) {
                return;
            }
            if (var10 != NULL && var11 != NULL) {
                int var12 = 0x1922;
                func_ov017_0219a674((unsigned char*)&var0);
                var0.unknown_0_ = 0;
                func_020406f8((Struct_0203de84*)&var2, (Struct_0203de84_2*)var9);
                var0.unknown_10_ = fix32abs(func_ov017_021a4700((Struct_ov009_0218aa28*)&var5->unknown_0_.position_, (short)var5->unknown_0_.rotation_.y, (Struct_ov009_0218aa28*)&var2));
                if (var7->unknown_0_ == 0x1901 && var10->unknown_0_ == 0x6a) {
                    var12 = 0x25b3;
                    func_ov017_0218daa8(arg0, (Struct_ov009_0218aa28*)&var11->unknown_10_, 0xccc, -0x199, 0);
                }
                if (var0.unknown_10_ < var12) {
                    int var13 = 0;
                    int var14 = 0;
                    int var15 = var11->unknown_a_3_;
                    if (var15 == 0) {
                        if (var10->unknown_2_ == 1) {
                            var0.unknown_1_ = 3;
                            var13 = 1;
                        }
                    } else if (var15 == 1) {
                        var0.unknown_1_ = 3;
                        var13 = 1;
                    } else if (var15 == 2) {
                        var0.unknown_1_ = 4;
                        var13 = 1;
                    } else if (var15 == 3) {
                        if (func_0202c508(func_0202ae18())) {
                            var0.unknown_1_ = 0xf;
                        } else {
                            var0.unknown_1_ = 2;
                        }
                    } else if (var15 == 4) {
                        var14 = 1;
                    }
                    if (!var13) {
                        var0.unknown_2_ = data_ov017_021d76da;
                    }
                    if (!var14) {
                        func_ov017_0219b33c(arg0, &var0);
                    }
                }
            }
        }
    } else {
        Struct_ov017_021a476c_10* var16;
        Struct_ov017_021a476c_7* var17;
        int var18;
        int var19;
        int var20;
        int var21;
        Struct_ov017_021a476c_10* var22;
        int var23;
        int var24;
        int var25;
        int var26;
        int var27;
        int var28;
        Struct_ov017_021a476c_10* var29;
        GameState* var30;
        Struct_ov017_021a476c_2* var31;
        void* var32;
        GameResources* var33;
        if (!func_0202b7d8((int*)func_0202ae18())) {
            goto none;
        }
        var33 = GetGameResources();
        var32 = var33->unknown_ptr_array_36fc[0];
        var31 = func_02012fe4();
        if (IsBrightnessOutsideValidRange(var33, false)) {
            var28 = -1;
            goto done;
        }
        if (var31->unknown_8_->unknown_c_4_) {
            var28 = -1;
            goto done;
        }
        if (func_02046b08((void**)var32) == 0) {
            var28 = -1;
            goto done;
        }
        var30 = GameState::GetInstance();
        var29 = (Struct_ov017_021a476c_10*)var30->GetUnknownGameObject();
        var28 = -1;
        var27 = -1;
        var26 = 0;
        var25 = 0;
        var24 = 0;
        for (var23 = 0; var23 <= 3; var23++) {
            var22 = (Struct_ov017_021a476c_10*)var30->GetPartyMemberByIndex(var23);
            if (var22 == NULL || var22 == var29) {
                continue;
            }
            if (var29->unknown_0_.GetField06() != var22->unknown_0_.GetField06()) {
                continue;
            }
            if (var22->unknown_0_.unknown_0_ & 0x1000) {
                continue;
            }
            if (var22->unknown_18c_ & 1) {
                continue;
            }
            if (func_02039860(var22) >= 0) {
                continue;
            }
            if (func_02039de8((unsigned char*)var22)) {
                continue;
            }
            if (!var22->unknown_0_.IsVisible()) {
                continue;
            }
            Struct_02014900 var34;
            Struct_02014900 var35;
            var35 = *(Struct_02014900*)&var29->unknown_0_.position_;
            var34 = *(Struct_02014900*)&var22->unknown_0_.position_;
            var21 = fix32abs(var35.unknown1_0_.x - var34.unknown1_0_.x);
            var20 = fix32abs(var35.unknown1_0_.z - var34.unknown1_0_.z);
            var19 = fix32abs(var35.unknown1_0_.y - var34.unknown1_0_.y);
            var18 = var21 + var20;
            if (var27 == -1 || var18 < var27) {
                var28 = var22->unknown_0_.unknown_4_;
                var27 = var18;
                var26 = var21;
                var25 = var20;
                var24 = var19;
            }
        }
        if (var26 < 0x1800 && var25 < 0x1800 && var24 < 0xb33) {
            goto done;
        }
    none:
        var28 = -1;
    done:
        data_ov017_021d76d8 = var28;
        if (data_ov017_021d76d8 >= 0) {
            var16 = (Struct_ov017_021a476c_10*)var3->GetPartyMemberByIndex(data_ov017_021d76d8);
            var17 = func_0205ec34();
            if (var16->unknown_1b2_ == 0) {
                if (!func_ov017_0218d4ec(arg0, data_ov017_021d76d8) ||
                    !func_0206dfb0((int)var17, var17->unknown_8c_, 0x799)) {
                    func_ov017_0219a674((unsigned char*)&var1);
                    var1.unknown_0_ = 0xa;
                    var1.unknown_10_ = fix32abs(func_ov017_021a4700((Struct_ov009_0218aa28*)&var5->unknown_0_.position_, (short)var5->unknown_0_.rotation_.y, (Struct_ov009_0218aa28*)&var16->unknown_0_.position_));
                    if (var1.unknown_10_ < 0x1922) {
                        var1.unknown_2_ = data_ov017_021d76d8;
                        func_ov017_0219b33c(arg0, &var1);
                    }
                }
            }
        }
    }
    arg0->unknown_4491_ = 0;
}
