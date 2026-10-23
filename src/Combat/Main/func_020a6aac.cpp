#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "World/Zone3D.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define data_020e909c data_020e91a8
#endif

extern "C" void* func_02012fe4(void);
extern "C" void* func_0202ae18(void);
extern "C" void* func_0205ec34(void);
extern "C" void* func_020100f8(char* arg0);

struct Struct_0200ffc0
{
    char unknown_0_[0x32c];
    void* unknown_32c_;
};
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);

extern "C" void* func_0200fd0c(GameState*);

extern "C" void func_020da77c(void* arg0, int arg1, void* arg2);

extern "C" void func_020a2770(void* arg0, short arg1);

extern "C" void func_0203db34(unsigned char* arg0, int arg1, int arg2, int arg3);

extern "C" int func_0202c508(void* arg0);
extern "C" int func_0202c540(void* arg0);

extern "C" void func_ov017_021d1a18(int arg0, short arg1, short arg2, unsigned char arg3);

struct Struct_02033834;
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

extern "C" void* func_0201b678(void* arg0, void* arg1);
struct Struct_020a6aac;
extern "C" int func_02018fbc(Struct_020a6aac*, Vector3fix*);
extern "C" void func_ov017_0219c598(int* arg0, short* arg1, int arg2);

extern "C" void* func_0201b754(void* arg0, int arg1);
extern "C" void func_0200fd48(GameState*, int);

struct Struct_02017a94;
struct Struct_0201b600;
struct Struct_02013380;
extern "C" struct Struct_0201b600* func_0201b600(Struct_02017a94*, int, unsigned short);
extern "C" void func_02013380(struct Struct_02013380* arg0, int arg1, int arg2);
extern "C" void func_0201b8c8(struct Struct_02017a94* arg0, int arg1, int arg2, int arg3);

extern "C" void func_020da244(void* arg0);

extern "C" void func_020a6aa4(Vector3i* arg0, int arg1, int arg2, int arg3);

struct Struct_ov017_021d82fc_2;
extern Struct_ov017_021d82fc_2 data_ov017_021d82fc;
extern Vector3i data_020e909c;

struct Struct_020a6aac_2
{
    unsigned char unknown_0_[0x1f8];
    unsigned char unknown_1f8_;
    unsigned char unknown_1f9_[7];
    float unknown_200_;
    int unknown_204_;
};
struct Struct_020a6aac_3
{
    Object3D unknown_0_;
    unsigned char unknown_ac_[0x144 - 0xac];
    Vector3i unknown_144_;
    unsigned char unknown_150_[4];
    unsigned char unknown_154_;
};
struct Struct_020a6aac_4
{
    unsigned char unknown_0_[5];
    unsigned char unknown_5_;
    unsigned char unknown_6_[0x20 - 6];
    int unknown_20_;
};
struct Struct_020a6aac_5
{
    unsigned char unknown_0_[8];
    Vector3i unknown_8_;
    unsigned char unknown_14_[0x20 - 0x14];
    short unknown_20_;
    unsigned char unknown_22_[0x2c - 0x22];
    unsigned short unknown_2c_;
    short unknown_2e_;
    Vector3i unknown_30_;
    unsigned char unknown_3c_[4];
    Vector3i unknown_40_;
};
struct Struct_ov017_021d82fc_2
{
    unsigned char unknown_0_[0xe];
    unsigned char unknown_e_;
};

struct Struct_020a6aac_6
{
    int unknown_0_;
    unsigned char unknown_4_;
};

// JPN: func_020a8850
// USA: func_020a6aac
extern "C" ARM void func_020a6aac(unsigned int* arg0, int arg1, int arg2)
{
    GameState* var0 = GameState::GetInstance();
    Zone3D* var1 = (Zone3D*)func_02012fe4();
    LightingManager::GetInstance();
    void* var2 = func_0202ae18();
    func_0205ec34();
    Struct_020a6aac_2* var3 = (Struct_020a6aac_2*)func_020100f8((char*)var0);
    Struct_020a6aac_3* var4 = (Struct_020a6aac_3*)func_0200ffc0((struct Struct_0200ffc0*)var0);
    GameObject* var5 = var0->GetUnknownGameObject();
    Struct_020a6aac_4* var6 = (Struct_020a6aac_4*)func_0200fd0c(var0);

    if ((unsigned int)(arg1 - 0x170c) <= 3) {
        var3->unknown_1f8_ = 1;
        var3->unknown_200_ = 1.0f;
        var3->unknown_204_ = 0x1000;
    } else {
        var3->unknown_1f8_ = 0;
    }

    if (arg1 == 0x2710) {
        Struct_020a6aac_4* var7 = (Struct_020a6aac_4*)func_0200fd0c(var0);
        int var8 = 0;
        if (var7->unknown_20_ == 0x25f1)
        {
            var8 = 1;
        }
        struct Struct_020a6aac_6 var9;
        var9.unknown_0_ = -1;
        var9.unknown_4_ = 0;
        if (var8) {
            var9.unknown_0_ = 0xa0;
            func_020da77c(&data_ov017_021d82fc, 2, &var9);
        } else {
            var9.unknown_0_ = 0xc9;
            func_020da77c(&data_ov017_021d82fc, 1, &var9);
        }
        func_020a2770(var3, 0xc9);
        var4->unknown_0_.DisableFlag(0x100);
        var4->unknown_0_.MakeVisible();
        var4->unknown_154_ = 1;
        var4->unknown_0_.SetScale(0xa0, 0xa0, 0xa0);
        SetFlags04((GameResources*)arg0, 0x10004);
        Struct_020236dc_3* var10 = var1->inline_020a6728();
        var4->unknown_0_.position_ = var10->unknown_0_;
        var10 = var1->inline_020a6728();
        var4->unknown_144_ = var10->unknown_0_;
        int var11 = var1->unknown_2774_.unknown_c_;
        func_0203db34((unsigned char*)var4, 0, var11, 0);
        if (func_0202c508(var2) != 0 && var8 == 0) {
            var1->unknown_2774_.unknown_14_ = 1;
            func_ov017_021d1a18(1, -1, 1, 0);
        }
        if (func_0202c540(var2) != 0) {
            var4->unknown_0_.position_.x = 0x19000;
            var4->unknown_0_.position_.y = 0x199;
            var4->unknown_0_.position_.z = 0x38ccc;
            func_02033874((struct Struct_02033834*)var4, 0);
        }
    } else if (arg1 == 0x2774) {
        var4->unknown_154_ = 0;
        var4->unknown_0_.MakeVisible();
    } else if (arg1 >= 0x4e20 && arg1 <= 0x752f) {
        if (var4 == 0)
        {
            return;
        }
        {
            var4->unknown_154_ = 0;
            var4->unknown_0_.SetScale(0x180, 0x180, 0x180);
            if (arg2 == 0x2710) {
                Struct_020a6aac_5* var12 = (Struct_020a6aac_5*)func_0201b678(var1, &var1->unknown_2774_.unknown_0_);
                if (var12 != 0) {
                    Vector3i var13 = var12->unknown_30_;
                    var13.y = func_02018fbc((Struct_020a6aac*)var1, &var13);
                    if (var6->unknown_5_ == 0) {
                        var5->obj3D_.position_ = var13;
                        func_0203db34((unsigned char*)var5, 0, var12->unknown_2e_, 0);
                        func_ov017_0219c598(&var13.x, &var12->unknown_2e_, 0);
                    }
                    var1->unknown_2774_.unknown_10_ = var12->unknown_2c_;
                    var1->unknown_2774_.unknown_12_ = (unsigned short)arg1;
                }
                func_020a2770(var3, var5->obj3D_.unknown_4_);
                ClearFlags04((GameResources*)arg0, 0x10004);
                var1->unknown_2774_.unknown_14_ = 0;
                short var14 = (short)var1->unknown_2774_.unknown_12_;
                short var15 = var1->unknown_2774_.unknown_10_;
                func_ov017_021d1a18(var14, var15, 0, 0);
            } else if (arg2 == 0x170c) {
                short var16 = var1->unknown_2774_.unknown_10_;
                Struct_020a6aac_5* var17 = (Struct_020a6aac_5*)func_0201b754(var1, var16);
                if (var17 != 0) {
                    Vector3i var18 = var17->unknown_30_;
                    var18.y = func_02018fbc((Struct_020a6aac*)var1, &var18);
                    if (var6->unknown_5_ == 0) {
                        var5->obj3D_.position_ = var18;
                        func_ov017_0219c598(&var18.x, &var17->unknown_2e_, 0);
                    }
                }
                func_020a2770(var3, var5->obj3D_.unknown_4_);
                ClearFlags04((GameResources*)arg0, 0x10004);
            }
            unsigned short var19 = var1->unknown_2774_.unknown_12_;
            if (arg1 == var19) {
                short var20 = var1->unknown_2774_.unknown_10_;
                Struct_020a6aac_5* var21 = (Struct_020a6aac_5*)func_0201b754(var1, var20);
                if (var21 != 0) {
                    var4->unknown_0_.EnableFlag(0x100);
                    var4->unknown_0_.position_ = var21->unknown_8_;
                    var4->unknown_144_ = var21->unknown_8_;
                    func_02033874((struct Struct_02033834*)var4, var21->unknown_20_);
                    Vector3i var22 = var21->unknown_40_;
                    var1->unknown_2774_.unknown_0_ = var22;
                }
                var4->unknown_0_.MakeVisible();
            } else {
                var4->unknown_0_.MakeHidden();
            }
        }
    } else if (arg1 == 0x170c) {
        if (arg2 == 0x2710) {
            GameObject* var23 = var0->GetUnknownGameObject();
            func_020a2770(var3, var23->obj3D_.unknown_4_);
            ClearFlags04((GameResources*)arg0, 0x10004);
            func_0200fd48(var0, 0xc9);
            if (func_0202c540(var2) != 0) {
                if (var1->unknown_2774_.unknown_14_ == 0) {
                    func_0201b8c8((struct Struct_02017a94*)var1, 0, 1, 0);
                } else {
                    func_0201b8c8((struct Struct_02017a94*)var1, 1, 0, 1);
                }
            } else {
                func_0201b8c8((struct Struct_02017a94*)var1, 1, 0, 1);
                var1->unknown_2774_.unknown_14_ = 1;
                func_ov017_021d1a18(1, -1, 1, 0);
            }
        } else {
            if (var1->unknown_2774_.unknown_14_ != 0) {
                func_0201b8c8((struct Struct_02017a94*)var1, 1, 0, 1);
                func_ov017_021d1a18(1, -1, 1, 0);
            } else {
                func_0201b8c8((struct Struct_02017a94*)var1, 0, 1, 0);
                short var24 = (short)var1->unknown_2774_.unknown_12_;
                short var25 = var1->unknown_2774_.unknown_10_;
                func_ov017_021d1a18(var24, var25, 0, 0);
            }
        }
    } else if (arg1 == 0x76c) {
        Zone3D* var26 = (Zone3D*)func_02012fe4();
        if (arg2 == 0x2710) {
            GameObject* var27 = var0->GetUnknownGameObject();
            Vector3i var28 = data_020e909c;
            short var29 = 0x570;
            var27->obj3D_.position_ = var28;
            func_02033874((struct Struct_02033834*)var27, var29);
            func_ov017_0219c598(&var28.x, &var29, 0);
            var26->unknown_2774_.unknown_14_ = 0;
            func_ov017_021d1a18((short)arg1, -1, 0, 0);
            var26->unknown_2774_.unknown_10_ = 0;
            var26->unknown_2774_.unknown_12_ = (unsigned short)arg1;
            short var30 = var0->GetUnknownGameObject()->obj3D_.unknown_4_;
            func_020a2770(var3, var30);
            ClearFlags04((GameResources*)arg0, 0x10004);
            struct Struct_0201b600* var31 = func_0201b600((struct Struct_02017a94*)var26, 0, 4);
            if (var31 != 0)
            {
                func_02013380((struct Struct_02013380*)var31, 0, 1);
            }
            struct Struct_0201b600* var32 = func_0201b600((struct Struct_02017a94*)var26, 0, 0x28);
            if (var32 != 0)
            {
                func_02013380((struct Struct_02013380*)var32, 0, 1);
            }
        } else {
            unsigned short var33 = var26->unknown_2774_.unknown_12_;
            if (var33 == 0x76c) {
                struct Struct_0201b600* var34 = func_0201b600((struct Struct_02017a94*)var26, 0, 4);
                if (var34 != 0)
                {
                    func_02013380((struct Struct_02013380*)var34, 0, 1);
                }
                struct Struct_0201b600* var35 = func_0201b600((struct Struct_02017a94*)var26, 0, 0x28);
                if (var35 != 0)
                {
                    func_02013380((struct Struct_02013380*)var35, 0, 1);
                }
            } else {
                struct Struct_0201b600* var36 = func_0201b600((struct Struct_02017a94*)var26, 0, 4);
                if (var36 != 0)
                {
                    func_02013380((struct Struct_02013380*)var36, 0, 0);
                }
                struct Struct_0201b600* var37 = func_0201b600((struct Struct_02017a94*)var26, 0, 0x28);
                if (var37 != 0)
                {
                    func_02013380((struct Struct_02013380*)var37, 0, 0);
                }
            }
        }
        func_0200fd48(var0, 0xc9);
    } else {
        if (arg2 == 0x2710) {
            ClearFlags04((GameResources*)arg0, 0x10004);
            func_0200fd48(var0, 0xc9);
            short var38 = var0->GetUnknownGameObject()->obj3D_.unknown_4_;
            func_020a2770(var3, var38);
            short var39 = (short)var1->unknown_2774_.unknown_12_;
            short var40 = var1->unknown_2774_.unknown_10_;
            unsigned char var41 = var1->unknown_2774_.unknown_14_;
            func_ov017_021d1a18(var39, var40, var41, 1);
            unsigned char var42 = data_ov017_021d82fc.unknown_e_;
            if (!(var42 != 1 && var42 != 2)) {
                func_020da244(&data_ov017_021d82fc);
            }
        }
    }

    Vector3i var43 = var1->unknown_2774_.unknown_0_;
    if (var43.x == 0 && var43.z == 0) {
        func_020a6aa4(&var43, 0x19000, 0x199, 0x38ccc);
        var1->unknown_2774_.unknown_0_ = var43;
    }
}
