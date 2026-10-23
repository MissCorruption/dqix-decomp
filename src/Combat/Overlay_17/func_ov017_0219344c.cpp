#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

struct Struct_02015438;
struct Struct_02033f2c;
struct Struct_02033f44;
struct Struct_02010604;
struct Struct_02018300_3;
struct Struct_02017098;
struct Struct_ov009_0218aa28;

class Struct_ov017_0219344c_2 : public Object3D {
public:
    short unknown_ac_;
    unsigned char unknown_ae_[0xc1 - 0xae];
    unsigned char unknown_c1_0_ : 3;
    unsigned char unknown_c1_3_ : 1;
    unsigned char unknown_c1_4_ : 4;
#if defined(jpn)
    unsigned char unknown_c2_[0x180 - 0xc2];
#else
    unsigned char unknown1_c2_[0x18c - 0xc2];
#endif
    unsigned int unknown_18c_;
};

struct Struct_ov017_0219344c_3 {
    unsigned short unknown_0_;
#if defined(jpn)
    unsigned char unknown_2_[0x84c - 0x2];
#else
    unsigned char unknown1_2_[0x82c - 0x2];
#endif
    int unknown_82c_;
    unsigned char unknown_830_[0x23b8 - 0x830];
    unsigned char unknown_23b8_;
};

struct Struct_ov017_0219344c_4 {
    Vector3i unknown_0_;
    Vector3i unknown_c_;
};

struct Struct_ov017_0219344c_5 {
    unsigned char unknown_0_[0x980];
};

struct Struct_ov017_0219344c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};

extern "C" void* func_02012fe4(void);
extern "C" int func_02046b24(Struct_02015438** arg0);
extern "C" void func_02033f2c(Struct_02033f2c* arg0);
extern "C" int func_ov017_0218df50(void* arg0, void* arg1);
extern "C" int func_ov017_0218dfd8(Struct_ov017_0219344c_2* arg0);
extern "C" int func_02033f44(Struct_02033f44* arg0);
extern "C" int func_02039dcc(unsigned char* arg0);
extern "C" int func_ov017_02193290(Struct_ov017_0219344c_4* arg0, Struct_ov017_0219344c_2* arg1, Vector3i* arg2, Vector3i* arg3, int* arg4, int* arg5, int arg6);
extern "C" int func_02017d90(Struct_ov017_0219344c_3* arg0, int arg1, Struct_ov017_0219344c_5* arg2, Struct_ov017_0219344c_4 arg3, Struct_ov017_0219344c_2* arg4);
extern "C" int func_ov017_02192b48(Struct_ov017_0219344c_5* arg0, Struct_ov017_0219344c_4* arg1, int arg2, Struct_ov017_0219344c_2* arg3, int arg4, Vector3i* arg5, Vector3i* arg6, int* arg7, int* arg8, int arg9, int* arg10, int arg11, int arg12, int arg13);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" int func_02033b88(Struct_02010604* arg0, int arg1);
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" void func_020531f0(GameObject* arg0);
extern "C" unsigned char* func_020177a8(unsigned char* arg0, int arg1);
extern "C" void func_ov017_0218daa8(void* arg0, Struct_ov009_0218aa28* arg1, int arg2, int arg3, unsigned char arg4);
extern "C" unsigned char* func_0201777c(Struct_02017098* arg0, int arg1);

#define SETUP_PROBE()                                          \
    do {                                                       \
        var22.unknown_0_ = var23;                                       \
        var22.unknown_c_ = var23;                                    \
        var22.unknown_0_.x += arg0->GetRadius() / 2;                  \
        var22.unknown_0_.y += arg0->GetHeight();                      \
        var22.unknown_0_.z += arg0->GetRadius() / 2;                  \
        var22.unknown_c_.x -= arg0->GetRadius() / 2;               \
        var22.unknown_c_.y -= 0xa000;                              \
        var22.unknown_c_.z -= arg0->GetRadius() / 2;               \
    } while (0)

// USA: func_ov017_0219344c
extern "C" ARM int func_ov017_0219344c(Struct_ov017_0219344c_2* arg0, int arg1, Vector3i* arg2, int arg3, int* arg4, int* arg5) {
    Struct_ov017_0219344c_5 var0;
    int var1;
    int var2;
    int var3;
    GameState* var4;
    Struct_ov017_0219344c_3* var5;
    int var6;
    int var7;
    int var8;
    int var9;
    int var10;
    int var11;
    int var12;
    int var13;
    int var14;
    int var15;
    int var16;
    int var17;
    int var18;

    var4 = GameState::GetInstance();
    GameResources* var19 = GetGameResources();
    var5 = (Struct_ov017_0219344c_3*)func_02012fe4();
    var6 = 0;
    Struct_02015438** var20 = (Struct_02015438**)var19->unknown_ptr_array_36fc[0];
    var17 = var5->unknown_0_;
    Vector3i var21 = arg0->position_;
    var18 = arg0->unknown_ac_;
    var7 = arg0->GetFlags() & 0x4000000;
    arg0->DisableFlag(0x4000000);
    var8 = 1;
    if (TestFlags00(var19, 0x400) != 0 && g_keyManager.TestKeysHeld(1) != 0) {
        var8 = 0;
    }
    if ((arg0->unknown_0_ & 0x100) && (arg0->unknown_18c_ & 1)) {
        var8 = 0;
    }
    Struct_ov017_0219344c_4 var22;
    Vector3i var23 = arg0->position_;
    Vector3i var24;
    Vector3i var25;
    SETUP_PROBE();
    var1 = 1;
    if (func_02046b24(var20) != 3 || arg0->unknown_c1_3_) {
        arg0->unknown_ac_ += 0x51;
    }
    if (arg0->unknown_ac_ > 0x1000) {
        arg0->unknown_ac_ = 0x1000;
    }
    func_02033f2c((Struct_02033f2c*)arg0);
    var10 = 1;
    var11 = var5->unknown_23b8_;
    if (var11 != 0) {
        var9 = (int)(((float)(arg0->position_.x + 0x4000) / 4096.0f) / 8.0f)
             + ((int)(((float)(arg0->position_.z + 0x4000) / 4096.0f) / 8.0f) << 4);
    }
    var2 = arg0->position_.y - 0xa000;
    var3 = arg0->position_.y;

    if (arg3 == 2 && arg2 != NULL) {
        arg3 = 2;
        Vector3fix_Subtract(&var23, arg2, &var24);
        Vector3fixMultiplyScalar(&var24, 0x800, &var24);
        Vector3i var26 = *arg2;
        Vector3fix_Add(&var26, &var24, &var26);
        arg0->position_ = var26;
        var23 = var26;
    } else {
        arg3 = 1;
    }

    Vector3i* var27 = arg2;
    var12 = 0;
    var13 = 0;
    var15 = 0;
    var16 = 0;
    for (int var28 = 0; var28 < arg3; var28++) {
        if (arg3 == 2 && var28 == 0 && arg4 != NULL && arg5 != NULL) {
            var25 = arg0->position_;
            var27 = &var25;
            var15 |= func_ov017_0218df50(arg0, 0);
            var16 |= var15;
            var16 |= func_ov017_0218dfd8(arg0);
            Vector3i var29 = arg0->position_;
            var23 = var29;
            *arg4 = var15;
            *arg5 = var16;
            SETUP_PROBE();
        }
        if (var28 == 1) {
            var25 = arg0->position_;
            var27 = &var25;
            if (arg4 != NULL && arg5 != NULL) {
                if (func_02033f44((Struct_02033f44*)arg0) && !func_02039dcc((unsigned char*)arg0) && var16 != 0) {
                    arg0->position_ = *arg2;
                    break;
                }
                if (func_02033f44((Struct_02033f44*)arg0)) {
                    *arg4 |= func_ov017_0218df50(arg0, 0);
                    *arg5 |= *arg4;
                    *arg5 |= func_ov017_0218dfd8(arg0);
                    if (*arg5 != 0) {
                        arg0->position_ = *arg2;
                        break;
                    }
                }
            }
            Vector3i var30 = arg0->position_;
            Vector3fix_Add(&var30, &var24, &var30);
            arg0->position_ = var30;
            if (arg4 != NULL && arg5 != NULL) {
                *arg4 |= func_ov017_0218df50(arg0, 0);
                *arg5 |= *arg4;
                *arg5 |= func_ov017_0218dfd8(arg0);
                if (func_02033f44((Struct_02033f44*)arg0) && *arg5 != 0) {
                    arg0->position_ = *arg2;
                    break;
                }
            }
            var23 = arg0->position_;
            SETUP_PROBE();
        }
        var14 = 0;
        var12 = 0;
        if (var8 != 0) {
            var12 += func_ov017_02193290(&var22, arg0, var27, &var23, &var3, &var2, var7);
        }
        for (int var31 = 0; var31 < var5->unknown_82c_; var31++) {
            if (var11 != 0) {
                if (var31 == 0x100) {
                    var10 = 0;
                } else if (var31 != var9) {
                    continue;
                }
            }
            int var32 = func_02017d90(var5, var31, &var0, var22, arg0);
            if (var32 > 0) {
                var6 += var32;
                var14 += func_ov017_02192b48(&var0, &var22, var32, arg0, arg1, var27, &var23, &var3, &var2, var8, &var1, var10, var31, var7);
            }
        }
        if (var27 != NULL && var14 != 0) {
            short var33 = arg0->unknown_4_;
            if (var33 != func_020100b0(var4)) {
                continue;
            }
            var13 = func_ov017_02193290(&var22, arg0, var27, &var23, &var3, &var2, var7);
            if (var13 != 0) {
                var23.x = var27->x;
                var23.z = var27->z;
                arg0->position_ = *arg2;
                break;
            }
        }
    }

    GameObject* var34 = var4->GetUnknownGameObject();
    if (var34->obj3D_.GetFlag(0x8000000)) {
        var1 = 0;
    }
    if (var17 == 10000) {
        var1 = 1;
    }
    if (var1 != 0) {
        if (var18 != 0 && var34->obj3D_.unknown_4_ == arg0->unknown_4_) {
            func_020397c0(var34);
        }
        arg0->unknown_ac_ = 0;
    } else if (var18 == 0) {
        func_02033b88((Struct_02010604*)arg0, 0);
        if (var34->obj3D_.unknown_4_ == arg0->unknown_4_) {
            func_020397cc((Struct_02018300_3*)var34, 1);
            if (!var34->obj3D_.GetFlag(0x1000)) {
                func_020531f0(var34);
            }
        }
    }

    GameResources* var35 = GetGameResources();
    unsigned char* var36 = (unsigned char*)func_02012fe4();
    Vector3i var37 = arg0->position_;
    Struct_ov017_0219344c* var38 = (Struct_ov017_0219344c*)var35->unknown_36b4_;
    if (var38 != NULL && !(var21.x == var37.x && var21.y == var37.y && var21.z == var37.z)) {
        if (var38->unknown_0_ == 2) {
            unsigned char* var39 = func_020177a8(var36, var38->unknown_2_);
            if (var39 != NULL) {
                func_ov017_0218daa8(var35, (Struct_ov009_0218aa28*)var39, 0xccc, 0, 0);
            }
        } else if (var12 == 0 && var13 == 0 && var38->unknown_0_ == 5) {
            unsigned char* var40 = func_0201777c((Struct_02017098*)var36, var38->unknown_2_);
            if (var40 != NULL) {
                func_ov017_0218daa8(var35, (Struct_ov009_0218aa28*)(var40 + 0x24), 0xc51, 0, 0);
            }
        }
    }
    return var6;
}
