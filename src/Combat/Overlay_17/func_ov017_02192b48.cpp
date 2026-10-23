#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"

struct Struct_020312bc {
    Vector3fix unknown_0_[3];
    Vector3fix unknown_24_;
};

struct Struct_02033edc {
    Vector3fix unknown_0_[3];
    Vector3fix unknown_24_;
};

struct Struct_02033edc_2;

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

struct Struct_ov017_02192b48_9 {
    unsigned char unknown_0_[0x2c];
    Struct_ov017_02192b48_8* unknown_2c_;
};

struct Struct_ov017_02192b48_10 {
    unsigned char unknown_0_[0x44];
    Struct_ov017_02192b48_9* unknown_44_;
};

struct Struct_ov017_02192b48 {
    Struct_ov017_02192b48_10* unknown_0_;
    unsigned char unknown_4_[0x44];
};

struct Struct_ov017_02192b48_2 {
    unsigned short unknown_0_;
#if defined(jpn)
    unsigned char unknown_2_[0x440 - 0x2];
#else
    unsigned char unknown1_2_[0x420 - 0x2];
#endif
    Struct_ov017_02192b48* unknown_420_;
    unsigned char unknown_424_[0x824 - 0x424];
    Struct_ov017_02192b48_8** unknown_824_;
    unsigned char unknown_828_[0x23b8 - 0x828];
    unsigned char unknown_23b8_;
};

struct Struct_02017d90 {
    short unknown_0_[96][12];
    int unknown_900_;
    int unknown_904_;
    Vector3i unknown_908_;
    int unknown_914_;
    int unknown_918_;
    int unknown_91c_;
    unsigned char unknown_920_[96];
};

struct Struct_ov017_02192b48_3 {
    Vector3i unknown_0_;
    Vector3i unknown_c_;
};

class Struct_ov017_02192b48_4 : public Object3D {
public:
    short unknown_ac_;
    unsigned char unknown_ae_[0xd4 - 0xae];
    Vector3i unknown_d4_;
    unsigned char unknown_e0_;
};

extern int data_ov017_021d62d8[8];
extern int data_ov017_021d62f8[8];

extern "C" void* func_02012fe4(void);
extern "C" void func_02031188(Struct_020312bc* arg0, short* arg1);
extern "C" long long func_020c32f8(int);
extern "C" long long func_020c3260(int);
extern "C" float func_0200c700(long long);
extern "C" int func_020312bc(Struct_020312bc* arg0, int arg1, Vector3fix* arg2, Vector3fix* arg3, Vector3fix* arg4);
extern "C" int func_020315b8(Struct_020312bc* arg0, int arg1, Vector3fix* arg2, fix32_t arg3, Vector3fix* arg4, Vector3i* arg5);
extern "C" void func_02033f6c(void* arg0, Struct_02033f6c* arg1);
extern "C" void func_02033fa8(void* arg0, Struct_02033f6c* arg1);
extern "C" void func_02033edc(Struct_02033edc_2* arg0, Struct_02033edc* arg1);

// USA: func_ov017_02192b48
extern "C" ARM int func_ov017_02192b48(Struct_02017d90* arg0, Struct_ov017_02192b48_3* arg1, int arg2, Struct_ov017_02192b48_4* arg3, unsigned char arg4, Vector3i* arg5, Vector3i* arg6, int* arg7, int* arg8, int arg9, int* arg10, unsigned char arg11, int arg12, int arg13) {
    Struct_020312bc var0[96];
    GameState* var1;
    Struct_ov017_02192b48_2* var2;
    int var3;
    int var4;
    int var5;

    var1 = GameState::GetInstance();
    GetGameResources();
    var2 = (Struct_ov017_02192b48_2*)func_02012fe4();
    var3 = 0;
    for (var5 = 0; var5 < arg2; var5++) {
        func_02031188(&var0[var5], arg0->unknown_0_[var5]);
        Vector3fixMultiplyScalar(&var0[var5].unknown_0_[0], arg0->unknown_904_ << 12, &var0[var5].unknown_0_[0]);
        Vector3fixMultiplyScalar(&var0[var5].unknown_0_[1], arg0->unknown_904_ << 12, &var0[var5].unknown_0_[1]);
        Vector3fixMultiplyScalar(&var0[var5].unknown_0_[2], arg0->unknown_904_ << 12, &var0[var5].unknown_0_[2]);
    }
    Vector3i var6 = *arg6;
    Matrix3x3 var7;
    Vector3i var8;
    Vector3i var9;
    Vector3i var10;
    Vector3fix_Subtract(&var6, &arg0->unknown_908_, &var6);
    int var11 = -(arg0->unknown_918_ - 25735);
    int var12 = (int)(4096.0f * (func_0200c700(func_020c32f8(var11)) / 4294967296.0f));
    int var13 = (int)(4096.0f * (func_0200c700(func_020c3260(var11)) / 4294967296.0f));
    Mat3x3_WriteRotationY(&var7, var13, var12);
    Mat3x3_ApplyToVector(&var6, &var7, &var6);
    var8 = var6;
    var8.y += 0x1800;
    var9 = var6;
    var9.y -= 0xa000;

    if (!(arg3->GetFlags() & 0x100)) {
        int var14 = func_020312bc(var0, arg2, &var8, &var9, &var10);
        if (var14 != -1) {
            var10.y += 0x199;
            Vector3fix_Add(&var10, &arg0->unknown_908_, &var10);
            if (*arg8 < var10.y) {
                var4 = 0x800;
                if (var2->unknown_0_ == 0x1131) {
                    unsigned int var15 = var1->GetTickCount();
                    if (var15 > 10) {
                        var15 = 10;
                    }
                    var4 = (int)(4096.0f * (0.1f + 0.25f * (float)var15));
                }
                if (*arg7 - var10.y < var4 || (arg13 && *arg7 - var10.y < 0x1800)) {
                    if (var10.y < *arg7 || fix32abs(*arg7 - var10.y) < 0x1000 || arg13) {
                        *arg10 = 1;
                        arg6->y = *arg7;
                        arg3->position_ = *arg6;
                        *arg8 = var10.y;
                        if (fix32abs(*arg7 - var10.y) > 0x28) {
                            arg6->y = var10.y;
                            arg3->position_ = *arg6;
                        }
                        if (arg13) {
                            arg3->unknown_d4_ = *arg6;
                            arg3->unknown_e0_ |= 0x20;
                        }
                        arg3->unknown_ac_ = 0;
                        if (arg11) {
                            Struct_ov017_02192b48_8* var16;
                            if (var2->unknown_23b8_ == 0) {
                                var16 = var2->unknown_824_[arg12];
                            } else {
                                var16 = var2->unknown_420_[arg12].unknown_0_->unknown_44_->unknown_2c_;
                            }
                            Struct_ov017_02192b48_7* var17;
                            Struct_ov017_02192b48_6* var18;
                            if (var16 != NULL && (var17 = var16->unknown_24_) != NULL && (var18 = var17->unknown_4_) != NULL) {
                                if (var18->unknown_0_->unknown_0_ == 3) {
                                    Struct_02033f6c var19 = var18->unknown_14_[arg0->unknown_920_[var14]];
                                    func_02033f6c(arg3, &var19);
                                }
                            }
                        }
                    }
                } else {
                    int var20 = 1;
                    for (int var21 = 0; var21 < 8 && var20; var21++) {
                        int var22 = data_ov017_021d62d8[var21];
                        int var23 = data_ov017_021d62f8[var21];
                        Vector3i var24 = var8;
                        var24.x += var22;
                        var24.z += var23;
                        Vector3i var25 = var9;
                        var25.x += var22;
                        var24.z += var23;
                        Vector3i var26;
                        if (func_020312bc(var0, arg2, &var24, &var25, &var26) != -1) {
                            var26.y += 0x199;
                            Vector3fix_Add(&var26, &arg0->unknown_908_, &var26);
                            if (*arg7 > var26.y && *arg7 - var26.y < var4) {
                                var20 = 0;
                            }
                        }
                    }
                    if (var20) {
                        *arg10 = 0;
                    }
                }
            }
        }
    }

    if (arg9 && !(arg3->GetFlags() & 0x80)) {
        Vector3i var27 = var6;
        var27.y += 0x800;
        int var28 = 0x800;
        if (arg3->unknown_0_ & 0x20) {
            int var29 = arg3->GetRadius() >> 2;
            if (var29 > 0x800) {
                var28 = var29;
            }
        }
        int var30 = func_020315b8(var0, arg2, &var27, var28, &var10, arg5);
        if (var30 >= 0) {
            Mat3x3_Invert(&var7, &var7);
            Mat3x3_ApplyToVector(&var10, &var7, &var10);
            arg6->x = var10.x + arg0->unknown_908_.x;
            arg6->z = var10.z + arg0->unknown_908_.z;
            arg3->position_ = *arg6;
            var3++;
            Struct_02033edc var31;
            Vector3fix_Add(&var0[var30].unknown_0_[0], &arg0->unknown_908_, &var31.unknown_0_[0]);
            Vector3fix_Add(&var0[var30].unknown_0_[1], &arg0->unknown_908_, &var31.unknown_0_[1]);
            Vector3fix_Add(&var0[var30].unknown_0_[2], &arg0->unknown_908_, &var31.unknown_0_[2]);
            var31.unknown_24_ = var0[var30].unknown_24_;
            func_02033edc((Struct_02033edc_2*)arg3, &var31);
            if (arg4 && arg11) {
                Struct_ov017_02192b48_8* var32;
                if (var2->unknown_23b8_ == 0) {
                    var32 = var2->unknown_824_[arg12];
                } else {
                    var32 = var2->unknown_420_[arg12].unknown_0_->unknown_44_->unknown_2c_;
                }
                Struct_ov017_02192b48_7* var33;
                Struct_ov017_02192b48_6* var34;
                if (var32 != NULL && (var33 = var32->unknown_24_) != NULL && (var34 = var33->unknown_4_) != NULL) {
                    if (var34->unknown_0_->unknown_0_ == 3) {
                        Struct_02033f6c var35 = var34->unknown_14_[arg0->unknown_920_[var30]];
                        func_02033fa8(arg3, &var35);
                    }
                }
            }
        }
    }
    return var3;
}
