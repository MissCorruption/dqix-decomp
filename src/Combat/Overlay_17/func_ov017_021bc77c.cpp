#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021bc77c_29156 = 0x6fa4, Enum_ov017_021bc77c_29168 = 0x6fb0, Enum_ov017_021bc77c_29172 = 0x6fb4, Enum_ov017_021bc77c_14104 = 0x3508, Enum_ov017_021bc77c_17580 = 0x41fc, Enum_ov017_021bc77c_268 = 0x108, Enum_ov017_021bc77c_276 = 0x110, Enum_ov017_021bc77c_17122 = 0x40c2 };
#else
enum { Enum_ov017_021bc77c_29156 = 0x71e4, Enum_ov017_021bc77c_29168 = 0x71f0, Enum_ov017_021bc77c_29172 = 0x71f4, Enum_ov017_021bc77c_14104 = 0x3718, Enum_ov017_021bc77c_17580 = 0x44ac, Enum_ov017_021bc77c_268 = 0x10c, Enum_ov017_021bc77c_276 = 0x114, Enum_ov017_021bc77c_17122 = 0x42e2 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/LightingManager.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

enum { Enum_ov017_021bc77c_m1 = -1 };

struct AllocatorUnion;

extern "C" void* func_0202ae18();
extern "C" void* func_020100f8(char*);
extern "C" unsigned short* func_02012fe4();
extern "C" unsigned char* func_0205ec34();
extern "C" unsigned int* func_020d6c00();
extern "C" void func_02019678(unsigned short* arg0, int arg1);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" Object3D* func_ov017_021bdbc0(unsigned char*);
extern "C" int func_0201bfc0(unsigned char*, int);
extern "C" void func_020e1154(void*);
extern "C" void func_020a2794(void* arg0);
extern "C" void func_020a2744(char*);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_ov017_0219b624(void* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_ov017_021a2fa0(void* arg0);
extern "C" int func_0202b7d8(int*);
struct Struct_02011590;
extern "C" int func_02011590(Struct_02011590*);
extern "C" void func_020115f4(void*, unsigned short);
extern "C" void func_ov017_021bb27c(void* arg0);
extern "C" void func_ov017_021bb0c4(unsigned char*);
extern "C" int func_020649b0(void*, int, void*);
extern "C" void func_0206f81c(void* arg0);
extern "C" int func_0202c540(void* arg0);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" unsigned char* func_ov017_021b8478(unsigned char* arg0);
extern "C" void func_02046a8c(void* arg0, unsigned char* arg1);
extern "C" int func_0209ca68(char*);
extern "C" void func_0209c530(void* arg0);
extern "C" unsigned char* func_0200fd0c(GameState* arg0);
extern "C" void* func_020e3808();
extern "C" int func_020100a8(GameState* arg0);
struct Struct_020e385c;
extern "C" void func_020e3a50(Struct_020e385c*, int, int, int);
extern "C" void func_020e3994(Struct_020e385c*, int, int);
struct Struct_02040774_2;
extern "C" void func_020407b4(Struct_02040774_2*, int, int, int);
struct Struct_02033834;
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_02039d48(unsigned char*);
void SetBrightness(GameResources*, int, int);
extern "C" int func_0209cd50(unsigned short arg0);
struct Struct_0209c3b4_2;
extern "C" void func_0209c3b4(Struct_0209c3b4_2*, int);
extern "C" void func_ov017_021bd704(void* arg0);
void SetMainBrightness(GameResources*, int, int);
extern "C" void func_ov017_021cdd70(unsigned short arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3, unsigned short arg4, unsigned short arg5, unsigned char arg6);
extern "C" void func_ov017_021b6728(void* arg0, int arg1, int arg2);
extern "C" void func_020397c0(void*);
extern "C" void func_02039830(void*);
extern "C" int func_ov017_0219bddc(unsigned char* arg0);
extern "C" void func_ov017_0219bf04(int arg0, int arg1);
extern "C" void func_ov017_021c178c(unsigned char* arg0);
extern "C" void func_ov017_021b8bb0(unsigned short arg0);
extern "C" void func_02070378(char*);
extern "C" void func_02017d68(void* arg0);
extern "C" int func_020a1eb0();
#if defined(jpn)
extern "C" void func_ov001_02156b20(void*);
#else
extern "C" void func_ov000_02156b20(GameObject*);
#endif
extern "C" void func_ov017_021a01bc(unsigned char*);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_0219bcac(unsigned char arg0);

extern AllocatorUnion data_02114e20;
extern char data_02109bf4[];

struct Struct_ov017_021bc77c {
    int unknown_0_[0x11];
    unsigned short unknown_44_;
    short unknown_46_;
    unsigned char unknown_48_[0x20];
};

struct Struct_ov017_021bc77c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_[0x28];
};

struct Struct_ov017_021bc77c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    Struct_ov017_021bc77c unknown_c_;
    #if defined(jpn)
    unsigned char unknown_74_[0x18];
#else
    unsigned char unknown1_74_[0x1c];
#endif
    int unknown_90_;
    unsigned char unknown_94_[6];
    unsigned char unknown_9a_;
    unsigned char unknown_9b_;
    unsigned char unknown_9c_;
    unsigned char unknown_9d_[3];
    signed char unknown_a0_;
    unsigned char unknown_a1_;
    unsigned short unknown_a2_;
    unsigned char unknown_a4_[0x18];
    Vector3i unknown_bc_;
    short unknown_c8_;
    unsigned char unknown_ca_[2];
    unsigned char unknown_cc_;
    unsigned char unknown_cd_[2];
    unsigned char unknown_cf_;
    unsigned char unknown_d0_[0x2d];
    unsigned char unknown_fd_;
    unsigned char unknown_fe_[0xd];
    unsigned char unknown_10b_;
    unsigned char unknown_10c_[8];
    unsigned short unknown_114_;
    unsigned char unknown_116_[4];
    unsigned short unknown_11a_;
    unsigned char unknown_11c_[0x1c];
    SafeAllocator* unknown_138_;
    unsigned char unknown_13c_;
    unsigned char unknown_13d_[3];
    unsigned short unknown_140_;
    unsigned short unknown_142_;
    unsigned char unknown_144_;
    unsigned char unknown_145_;
    unsigned short unknown_146_;
    unsigned short unknown_148_;
    unsigned char unknown_14a_[2];
    unsigned short unknown_14c_;
    unsigned short unknown_14e_;
    unsigned char unknown_150_[0x34];
    unsigned short unknown_184_;
};

struct Struct_ov017_021bc77c_4 {
    #if defined(jpn)
    unsigned char unknown_0_[0x420];
#else
    unsigned char unknown1_0_[0x630];
#endif
    int unknown_630_;
    unsigned char unknown_634_[0xd8];
    unsigned char* unknown_70c_;
    unsigned char* unknown_710_;
    unsigned char unknown_714_[4];
    unsigned char* unknown_718_;
    unsigned char unknown_71c_[0x18];
    unsigned char* unknown_734_;
    #if defined(jpn)
    unsigned char unknown_528_[0x410];
#else
    unsigned char unknown_738_[0x420];
#endif
    unsigned char* unknown_b58_;
};

struct Struct_01ff91ac_25 {
    unsigned char unknown_0_[0xc4];
    SafeAllocator unknown_c4_;
};

struct Struct_ov017_021bc77c_5 {
    unsigned char unknown_0_[0x3000];
    Struct_ov017_021bc77c_4 unknown_3000_;
};

#define RES_PTR(res, off) (((Struct_ov017_021bc77c_5*)(res))->unknown_3000_.unknown_##off##_)

static inline SafeAllocator* inline_ov017_021bc77c(GameResources* arg0, int arg1) {
    return &arg0->allocator_array_38[arg1];
}

static inline void inline_01ff91ac_2(SafeAllocator* arg0, unsigned int arg1) {
    arg0->CreateTypeA(func_02012d88(&data_02114e20, arg1), arg1);
}

static inline Vector3i inline_ov017_021bc77c_2(GameState* arg0) {
    return *(Vector3i*)((unsigned char*)arg0 + Enum_ov017_021bc77c_29156);
}

// USA: func_ov017_021bc77c
extern "C" ARM int func_ov017_021bc77c(Struct_ov017_021bc77c_3* arg0, void* arg1) {
    if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() > 0) {
        return arg0->unknown_a_;
    }
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    void* var2 = func_0202ae18();
    GameObject* var3 = var0->GetUnknownGameObject();
    GameObject* var4 = var0->GetPartyMemberByIndex(0);
    void* var5 = func_020100f8((char*)var0);
    unsigned short* var6;
    GameState* var7;
    GameResources* var8;
    unsigned char* var9;
    unsigned char* var10;
    unsigned char* var11;
    unsigned short* var12 = func_02012fe4();
    unsigned char* var13 = func_0205ec34();
    var10 = RES_PTR(var1, 710);
    unsigned char* var14 = RES_PTR(var1, 718);
    var11 = RES_PTR(var1, b58);
    func_020d6c00();
    {
        Struct_ov017_021bc77c var15 = arg0->unknown_c_;
        unsigned char var16 = arg0->unknown_9c_;
        var7 = GameState::GetInstance();
        GameResources* var17 = GetGameResources();
        var6 = func_02012fe4();
        func_0202ae18();
        if (!(var15.unknown_44_ & 0x400)) {
            func_02019678(var6, var16);
        }
        for (int var18 = 0; var18 < 0x20; var18++) {
            GameObject* var19 = var7->GetGameObjectByIndex(var18 + 0xa0);
            if (var19 != 0) {
                var19->obj3D_.Destroy();
                func_0200fd48(var7, var18 + 0xa0);
            }
        }
        ((Struct_ov017_021bc77c_5*)var17)->unknown_3000_.unknown_630_ = 0;
        Object3D* var20 = func_ov017_021bdbc0((unsigned char*)var17);
        if (var20 != 0) {
            var20->MakeVisible();
        }
        if (func_0201bfc0((unsigned char*)var6, 1) || func_0201bfc0((unsigned char*)var6, 0)) {
            func_020e1154((void*)0x1388);
        }
    }
    func_020a2794(var5);
    func_020a2744((char*)var5);
    if (arg0->unknown_c_.unknown_46_ > Enum_ov017_021bc77c_m1) {
        func_0206df6c(var13, var13 + 0x8c, arg0->unknown_c_.unknown_46_ + 0x38e, 1);
    }
    if (arg0->unknown_a0_ > Enum_ov017_021bc77c_m1 && arg0->unknown_9c_) {
        func_0206df6c(var13, var13 + 0x8c, arg0->unknown_a0_ + 0xbea, 1);
    }
    if (arg0->unknown_9a_) {
        func_ov017_0219b624(var1);
    }
    if (arg0->unknown_138_) {
        SignedAllocatorHeader* var21 = arg0->unknown_138_->GetSignedAllocator();
        if (var21) {
            arg0->unknown_138_->Destroy();
            func_02012da4(&data_02114e20, var21);
        }
        arg0->unknown_138_ = 0;
    }
    if (!TestFlags00(var1, 0x1000) || arg0->unknown_11a_ == 0) {
        int var22 = arg0->unknown_90_;
        if (var22) {
            SafeAllocator* var23 = inline_ov017_021bc77c(var1, 7);
            var23->CreateTypeA(func_02012d88(&data_02114e20, var22), var22);
            func_ov017_021a2fa0(var1);
            arg0->unknown_90_ = 0;
        } else if (arg0->unknown_c_.unknown_44_ & 4) {
            func_ov017_021a2fa0(var1);
        }
    }
    if (!func_0202b7d8((int*)var2) && func_02011590((Struct_02011590*)var0)) {
        if (arg0->unknown_11a_) {
            func_020115f4(var0, arg0->unknown_11a_);
        }
        func_ov017_021bb27c(arg0);
        arg0->unknown_1_ = 1;
        return arg0->unknown_a_;
    }
    if (arg0->unknown_11a_) {
        arg0->unknown_8_ = arg0->unknown_11a_;
        arg0->unknown_fd_ = 1;
        func_ov017_021bb0c4((unsigned char*)arg0);
        return 0;
    }
    if (*((unsigned char*)var1 + Enum_ov017_021bc77c_17122) == 0) {
        Struct_ov017_021bc77c_2 var24;
        var24.unknown_8_ = arg0->unknown_8_;
        if (func_020649b0(var13, 0xb, &var24)) {
            func_0206f81c(&var24);
        }
        if (func_0202c540(var2)) {
            int var25 = 0;
            if (arg0->unknown_13c_ == 2) {
                if (var14[2]) var25 = 1;
            } else if (arg0->unknown_13c_ == 1) {
                if (var14[2] && !func_0206dfb0((int)var13, var13 + 0x8c, arg0->unknown_148_ + 0x38e)) {
                    if (arg0->unknown_148_ == 0xffff) {
                        if (arg0->unknown_14c_ != *(unsigned short*)((unsigned char*)arg0 + 0x18)) var25 = 1;
                    } else {
                        var25 = 1;
                    }
                }
            } else if (arg0->unknown_13c_ == 0) {
                if (var14[2]) {
                    int var26 = *(int*)(func_ov017_021b8478(var14) + 0xc);
                    if (var26 != (short)arg0->unknown_146_) var25 = 1;
                }
            }
            if (var25) {
                func_02046a8c(arg1, var14);
                if (func_0209ca68((char*)data_02109bf4) == 2) {
                    func_0209c530(data_02109bf4);
                }
                ClearFlags04(var1, 4);
                ClearFlags04(var1, 0x10);
                ClearFlags04(var1, 2);
                ClearFlags00(var1, 4);
                ClearFlags00(var1, 0x800);
            }
        }
    } else {
        arg0->unknown_13c_ = 2;
    }
    unsigned char* var27 = func_0200fd0c(var0);
    void* var28 = func_020e3808();
    if (var14[2]) {
        func_020e3a50((Struct_020e385c*)var28, func_020100a8(var0), 1, *(unsigned short*)((unsigned char*)arg0 + 0x18));
    } else if (*(int*)(var27 + 0x20) <= 0 || var27[2] == 0) {
        func_020e3994((Struct_020e385c*)var28, 1, *(unsigned short*)((unsigned char*)arg0 + 0x18));
    }
    if (arg0->unknown_cc_ && arg0->unknown_cf_ == 3) {
        func_020407b4((Struct_02040774_2*)var3, 0x48cc, 0x199, -0x733);
        func_02033874((Struct_02033834*)var3, 0);
        for (int var29 = 1; var29 < 4; var29++) {
            GameObject* var30 = var0->GetPartyMemberByIndex(var29);
            if (var30) {
                func_020407b4((Struct_02040774_2*)var30, 0x48cc, 0x199, -0x733);
                func_02033874((Struct_02033834*)var30, 0x3244);
                func_02039d48((unsigned char*)var30);
            }
        }
    }
    if (var27[2]) {
        SetBrightness(var1, -16, 0);
    } else if (var10[2]) {
        func_0209c3b4((Struct_0209c3b4_2*)data_02109bf4, func_0209cd50(*var12));
        func_ov017_021bd704(&arg0->unknown_c_);
        SetMainBrightness(var1, 0, 0x28);
    } else if (var14[2]) {
        SetBrightness(var1, -16, 0);
        *(unsigned short*)(var14 + 0x6c4) = arg0->unknown_184_;
        if (func_0202c540(var2)) {
            arg0->unknown_14e_ = *(int*)(func_ov017_021b8478(*(unsigned char**)((unsigned char*)var1 + Enum_ov017_021bc77c_14104)) + 0xc);
            func_ov017_021cdd70(arg0->unknown_14e_, 0, 0, 0, 0, 0, 0);
            unsigned char* var31 = RES_PTR(var1, 70c);
            if (var31[2]) {
                func_02046a8c(arg1, var31);
            }
            return 5;
        }
    } else if (arg0->unknown_cc_) {
        if (arg0->unknown_cc_ == 1) {
            func_ov017_021b6728(var1, arg0->unknown_cf_, -1);
        }
        if (arg0->unknown_cf_ == 2) {
            func_020397c0(var3);
            func_02039830(var3);
        }
        SetMainBrightness(var1, 0, 0x28);
        func_ov017_021bb27c(arg0);
        arg0->unknown_1_ = 1;
        return arg0->unknown_a_;
    } else {
        int var32;
        unsigned short var33;
        {
            unsigned short* var34;
            unsigned short var35 = arg0->unknown_8_;
            void* var36 = func_0202ae18();
            var34 = func_02012fe4();
            var9 = func_0205ec34();
            var8 = GetGameResources();
            unsigned char* var37 = RES_PTR(var8, 734);
            unsigned char var38 = 0;
            unsigned short var39 = *var34;
            if (!func_0202c540(var36)) { var32 = 0; goto checked; }
            if (arg0->unknown_13c_ != 1) { var32 = 0; goto checked; }
            if (arg0->unknown_140_ != var39 && arg0->unknown_142_ != var39) { var32 = 0; goto checked; }
            if (!arg0->unknown_144_) { var32 = 0; goto checked; }
            if (func_0206dfb0((int)var9, var9 + 0x8c, arg0->unknown_148_ + 0x38e)) { var32 = 0; goto checked; }
            unsigned short var40 = arg0->unknown_146_;
            if (var40 == var35) { var32 = 0; goto checked; }
            if (var35 == 0x733c || var35 == 0x733f || var35 == 0x7342 || var35 == 0x7345 || var35 == 0x7348) {
                if (var40 == 0x733d || var40 == 0x7340 || var40 == 0x7343 || var40 == 0x7346 || var40 == 0x7349 || var40 == 0x721a ||
                    var40 == 0x7080) {
                    var32 = 0;
                    goto checked;
                }
            }
            int var41 = func_ov017_0219bddc(&var38);
            if (var41) {
                func_ov017_0219bf04(0, 1);
                var37[Enum_ov017_021bc77c_268] = 1;
            }
            unsigned char* var42 = RES_PTR(var8, b58);
            if (var42[2]) {
                if (var41) {
                    func_ov017_021c178c(var42);
                    var32 = 0;
                    goto checked;
                }
                if (arg0->unknown_14c_) {
                    *(unsigned short*)(var37 + Enum_ov017_021bc77c_276) = arg0->unknown_14c_;
                } else {
                    *(unsigned short*)(var37 + Enum_ov017_021bc77c_276) = arg0->unknown_146_;
                }
                var32 = 0;
                goto checked;
            }
            if (!var41) {
                ClearFlags00(var8, 0x10);
            }
            var32 = var41 == 0;
        }
    checked:
        if (var32) {
        if (arg0->unknown_14c_) {
            arg0->unknown_8_ = arg0->unknown_14c_;
        } else {
            arg0->unknown_8_ = arg0->unknown_146_;
        }
        func_ov017_021bb0c4((unsigned char*)arg0);
        return 0;
    } else if (func_0202b7d8((int*)var2) && func_0202c540(var2) && var4 && (var33 = *var12, var33 == var4->obj3D_.GetField06()) &&
               arg0->unknown_13c_ == 0 && (short)arg0->unknown_146_ >= 0) {
        func_ov017_021b8bb0((short)arg0->unknown_146_);
    } else if (arg0->unknown_9c_ && arg0->unknown_a2_ != *var12) {
        func_02070378((char*)var27);
        var27[2] = 1;
        *(unsigned short*)var27 = arg0->unknown_a2_;
        var27[7] = 1;
        *(Vector3i*)(var27 + 0x10) = arg0->unknown_bc_;
        *(short*)(var27 + 0x1c) = arg0->unknown_c8_;
        SetBrightness(var1, -16, 0);
    } else if (*(int*)((unsigned char*)var0 + Enum_ov017_021bc77c_29172) > 0) {
        func_02070378((char*)var27);
        var27[2] = 1;
        *(unsigned short*)var27 = *(int*)((unsigned char*)var0 + Enum_ov017_021bc77c_29172);
        var27[7] = 1;
        *(Vector3i*)(var27 + 0x10) = inline_ov017_021bc77c_2(var0);
        *(short*)(var27 + 0x1c) = *(int*)((unsigned char*)var0 + Enum_ov017_021bc77c_29168);
        *(int*)((unsigned char*)var0 + Enum_ov017_021bc77c_29172) = 0;
        SetBrightness(var1, -16, 0);
        func_02017d68(func_02012fe4());
    } else {
        if (func_020a1eb0() == 1) {
#if defined(jpn)
            func_ov001_02156b20(arg0);
#else
            func_ov000_02156b20((GameObject*)arg0);
#endif
        }
        func_0209c3b4((Struct_0209c3b4_2*)data_02109bf4, func_0209cd50(*var12));
        func_ov017_021bd704(&arg0->unknown_c_);
        func_ov017_021a01bc((unsigned char*)var1);
        if (var11[2]) {
            SetBrightness(var1, -16, 0);
        } else if (!arg0->unknown_10b_) {
            SetMainBrightness(var1, 0, 0x28);
        }
        func_020397c0(var3);
        func_02039830(var3);
        func_0209c2e0(data_02109bf4, 0x7f, 0);
        if (arg0->unknown_114_) {
            *(unsigned short*)((unsigned char*)var1 + Enum_ov017_021bc77c_17580) = arg0->unknown_114_;
            arg0->unknown_114_ = 0;
        }
        if (arg0->unknown_8_ == 0x6013) {
            LightingManager* var43 = LightingManager::GetInstance();
            int var44 = var0->GetTimeOfDay();
            if (var44 != var43->timeOfDayIndex_) {
                if (var11[2]) {
                    var11[9] = 1;
                }
                SetBrightness(var1, -16, 0);
                func_ov017_0219bcac(0);
            }
        }
    }
    }
    *(int*)((unsigned char*)var0 + Enum_ov017_021bc77c_29172) = 0;
    func_ov017_021bb27c(arg0);
    arg0->unknown_1_ = 1;
    return arg0->unknown_a_;
}
