#include <globaldefs.h>

#if defined(jpn)
#define SCENE_NODES_021b790c 0x4ec
#define SCENE_NODE_021b790c 0x93c
#define SCENE_ID_BASE_021b790c 0x4200
#define SCENE_ID_OFFSET_021b790c 0x12
#define SCENE_EVENT_FLAG_021b790c 0xc2
#define SCENE_COMBATANT_FLAGS_021b790c 0x180
#define SCENE_ZONE_LOCKS_021b790c 0x444
#define SCENE_ZONE_FLAG_021b790c 0x125
#define SCENE_COMBATANT_ID_021b790c 0x1a6
extern "C" char data_ov017_021d8358[];
extern "C" char data_ov017_021d8395[];
extern "C" char data_ov017_021d83c0[];
#else
#define SCENE_NODES_021b790c 0x6fc
#define SCENE_NODE_021b790c 0xb5c
#define SCENE_ID_BASE_021b790c 0x4400
#define SCENE_ID_OFFSET_021b790c 0xc2
#define SCENE_EVENT_FLAG_021b790c 0x2e2
#define SCENE_COMBATANT_FLAGS_021b790c 0x18c
#define SCENE_ZONE_LOCKS_021b790c 0x424
#define SCENE_ZONE_FLAG_021b790c 0x105
#define SCENE_COMBATANT_ID_021b790c 0x1b2
#endif
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Filesystem/BackgroundLoader.h"
#include "World/Zone3D.h"
#include "Graphics/LightingManager.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_020469f8;
struct Struct_020469f8_2;
struct Struct_02038598_5;
struct Struct_02109bf4_3;
struct Struct_02109bf4_4;
struct Struct_02010604;
struct Struct_020a0810;
struct Struct_020a01ec;
struct Struct_0205859c;
struct Struct_020a27cc;
struct Struct_020a2800;
struct Struct_02070900_2;
struct Struct_02070900;
struct Struct_020707c8;

struct Struct_ov017_021b790c {
    char unknown_0_[0x8e14];
    signed char unknown_8e14_;
};

struct Struct_ov017_021b790c_2 {
    void* unknown_0_;
#if defined(jpn)
    char unknown_4_[0x868 - 0x4];
    int unknown_998_;
    char unknown_86c_[0x1789 - 0x86c];
    unsigned char unknown_195b_;
    char unknown_178a_[0x17e1 - 0x178a];
#else
    char unknown1_4_[0x998 - 0x4];
    int unknown_998_;
    char unknown_99c_[0x195b - 0x99c];
    unsigned char unknown_195b_;
    char unknown_195c_[0x19b1 - 0x195c];
#endif
    unsigned char unknown_19b1_;
    unsigned char unknown_19b2_;
};

struct Struct_ov017_021b790c_3 {
    char unknown_0_[0xfc0];
    int unknown_fc0_;
};

struct Struct_ov017_021b790c_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[0x1c - 0x2];
    unsigned char unknown_1c_[0x24 - 0x1c];
    unsigned short unknown_24_;
    char unknown_26_[0x28 - 0x26];
    int unknown_28_;
    char unknown_2c_[0x3e - 0x2c];
    unsigned short unknown_3e_;
    char unknown_40_[0x46 - 0x40];
    unsigned char unknown_46_;
    char unknown_47_;
    int unknown_48_;
    char unknown_4c_[0x6ac - 0x4c];
    void* unknown_6ac_;
    Struct_ov017_021b790c* unknown_6b0_;
    unsigned short unknown_6b4_;
    unsigned short unknown_6b6_;
    unsigned int unknown_6b8_;
    char unknown_6bc_[0x6c6 - 0x6bc];
    unsigned char unknown_6c6_;
    unsigned char unknown_6c7_;
    unsigned short unknown_6c8_;
};

struct Struct_ov017_021b790c_5 {
    char unknown_0_[0x68];
    char unknown_68_[0xb0 - 0x68];
};

struct Struct_ov017_021b790c_6 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_ov017_021b790c_7 {
    char unknown_0_[0xc];
    unsigned char unknown_c_0_ : 5;
    unsigned char unknown_c_5_ : 2;
    unsigned char unknown_c_7_ : 1;
};

struct Struct_02064a08 {
    char unknown_0_[0x18];
    int unknown_18_;
    char unknown_1c_[0x34 - 0x1c];
};

struct Struct_ov017_021b790c_8 {
    char unknown_0_[0xc];
};

struct Struct_01ff87a4_2 {
#if defined(jpn)
    char unknown_0_[0x97];
#else
    char unknown1_0_[0x9b];
#endif
    unsigned char unknown_9b_;
    void inline_ov017_021b790c(unsigned char arg0) { unknown_9b_ = arg0; }
};

static inline Struct_01ff87a4_2* inline_ov017_021b790c_2(GameResources* arg0) {
    return (Struct_01ff87a4_2*)arg0->unknown_ptr_array_371c[6];
}

extern char data_02109bf4[];

extern "C" Struct_ov017_021b790c_3* func_0202ae18(void);
extern "C" Struct_ov017_021b790c_2* func_020421a0(void);
extern "C" unsigned int* func_020d6c00(void);
extern "C" void func_020a1df8(int arg0);
extern "C" void func_020a1edc();
extern "C" void func_ov017_021b71d8(Struct_ov017_021b790c_4* arg0);
extern "C" void func_ov017_021b7284(Struct_ov017_021b790c_4* arg0);
extern "C" int func_0209ca68(char* arg0);
extern "C" void func_ov017_021b621c(void* arg0, void* arg1, void* arg2);
extern "C" void func_020469f8(Struct_020469f8* arg0, Struct_020469f8_2* arg1);
extern "C" void func_ov000_02160620(void* arg0);
extern "C" int func_ov000_02161264(void* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void func_02054248(void* arg0);
extern "C" unsigned char func_02010750(char* arg0);
extern "C" void func_0201075c(char* arg0, unsigned char arg1);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_ov017_021aa4cc(void* arg0, int arg1);
extern "C" int func_020ac4c0(void* arg0);
extern "C" void func_020a0810(Struct_020a0810* arg0, unsigned int arg1);
extern "C" void func_020a01ec(Struct_020a01ec* arg0, unsigned int arg1);
extern "C" int func_020ac494(void* arg0);
extern "C" unsigned char* func_02012fe4(void);
extern "C" void func_0201bf98(unsigned char* arg0, int arg1, int arg2);
extern "C" int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov017_021959b4(void);
extern "C" void* func_0205ec34(void);
extern "C" int func_02064a24(void*, Struct_02064a08*);
extern "C" int func_02064a08(void*, Struct_02064a08*);
extern "C" void func_0206f81c(void* arg0);
extern "C" int func_020a3694(int* arg0);
extern "C" void func_02010604(GameState* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0209c530(void* arg0);
extern "C" int func_02046b60(Struct_02038598_5* arg0, int arg1);
extern "C" void func_0209c20c(Struct_02109bf4_3* arg0);
extern "C" void func_0209c678(Struct_02109bf4_4* arg0, int arg1);
extern "C" int func_0202c540(void* arg0);
extern "C" void func_02048150(GameObject* arg0, int arg1, int arg2);
extern "C" int func_02033b88(Struct_02010604* arg0, int arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov017_021cedf4(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_02191108(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_02015438(void* arg0);
extern "C" Struct_0205859c* func_02057924(void);
extern "C" void func_0205859c(Struct_0205859c* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27cc(Struct_020a27cc* arg0);
extern "C" void func_020a2800(Struct_020a2800* arg0);
extern "C" void func_020a2830(void* arg0);
void SetMainBrightness(GameResources* res, int level, int b);
extern "C" void func_ov017_021c98f4(int arg0, int arg1);
extern "C" void func_ov017_021b6f9c(Struct_ov017_021b790c_4* arg0);
extern "C" void* func_020d7a50(void);
extern "C" void func_02046380(void* arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_020e4c74(void* arg0, GameObject* arg1);
extern "C" int func_020e51cc(int arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" void func_02046608(void* arg0, int arg1, char* arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" int abs(int arg0);
extern "C" void* func_020704fc(void);
extern "C" void func_02070900(Struct_02070900_2* arg0, Struct_02070900* arg1, unsigned int arg2);
extern "C" void func_020707c8(Struct_020707c8* arg0);
#if defined(jpn)
extern "C" void func_0204500c(void* arg0, char* arg1, int arg2);
#else
extern "C" void func_0204500c(void* arg0, char* arg1, int arg2, int arg3);
#endif
extern "C" void func_02042b3c(void* arg0);
#if defined(jpn)
extern "C" void func_020d7e10(void* arg0, char* arg1, int arg2, int arg3, int arg4);
#else
extern "C" void func_020d7e10(void* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5);
#endif
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_ov017_021cbf18(unsigned char arg0, unsigned short arg1);
extern "C" void func_ov017_021b86f8(Struct_ov017_021b790c_4* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov017_02195658(void* arg0);
extern "C" void func_020a367c(unsigned char* arg0, int arg1);
extern "C" void func_02039758(void* arg0, int arg1);
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(void* arg0);
extern "C" int func_020100b0(GameState* arg0);
extern "C" void func_020e4bf4(void* arg0, int arg1);
extern "C" int func_02039888(void* arg0);

// USA: func_ov017_021b790c
extern "C" ARM void func_ov017_021b790c(Struct_ov017_021b790c_4* arg0, Struct_02038598_5* arg1) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)GetGameResources();
    GameObject* var2 = var0->GetUnknownGameObject();
    Struct_ov017_021b790c_2* var3 = func_020421a0();
    Struct_ov017_021b790c_3* var4 = func_0202ae18();
    unsigned int* var5 = func_020d6c00();

    if (!(arg0->unknown_6b6_ & 0x100)) {
        func_020a1df8(0);
        func_020a1edc();
        arg0->unknown_6b6_ |= 0x800;
        func_ov017_021b71d8(arg0);
        func_ov017_021b7284(arg0);
    }

    unsigned short var6 = arg0->unknown_6b4_;
    if (var6 == 6) {
        if (func_0209ca68(data_02109bf4) != 2) {
            Struct_020469f8* var7 = *(Struct_020469f8**)(var1 + 0x3000 + SCENE_NODES_021b790c);
            Struct_020469f8_2* var8 = *(Struct_020469f8_2**)(var1 + 0x3000 + SCENE_NODE_021b790c);
            func_ov017_021b621c(var8, 0, 0);
            *(unsigned short*)((char*)var8 + 0xfe) = arg0->unknown_28_;
            func_020469f8(var7, var8);
        }
        arg0->unknown_6b4_ = 0;
    } else if (var6 == 0) {
        func_ov000_02160620(arg0->unknown_6ac_);
        if (func_ov000_02161264(arg0->unknown_6ac_) == 0) return;
        void* var9 = func_0202ae18();
        arg0->unknown_6b6_ |= 0x1000;
        *(unsigned short*)(var1 + SCENE_ID_BASE_021b790c + SCENE_ID_OFFSET_021b790c) = arg0->unknown_24_;
        Struct_ov017_021b790c_6* var10 = (Struct_ov017_021b790c_6*)func_02010828(var0);
        GameState* var11 = GameState::GetInstance();
        int var12;
        for (var12 = 0; var12 < 4; var12++) {
            GameObject* var13 = func_0200ff1c(var11, var12);
            if (var13 != NULL) {
                func_02054248(var13);
            }
        }
        if (arg0->unknown_6b0_->unknown_8e14_ == 2) {
            if (func_02010750((char*)var0) == 0) {
                func_0201075c((char*)var0, 1);
                for (var12 = 0; var12 < 4; var12++) {
                    GameObject* var14 = var0->GetPartyMemberByIndex(var12);
                    if (var14 != NULL && !(**(int**)((char*)var14 + 0x130) & 1) &&
                        func_020a35e0(arg0->unknown_1c_, var12) == 0) {
                        func_0201075c((char*)var0, 0);
                    }
                }
            }
            if (func_02010750((char*)var0) == 0) {
                func_ov017_021aa4cc(var1, 1);
            }
        }
        int var15 = 1;
        for (int var16 = 0; var16 < var10->unknown_f7c_; var16++) {
            GameObject* var17 = var0->GetPartyMemberByIndex(var10->unknown_f78_[var16]);
            if (var17 != NULL && !(**(int**)((char*)var17 + 0x130) & 1)) {
                var15 = 0;
            }
        }
        if (var15) {
            Struct_ov017_021b790c_5 var18;
            func_020ac4c0(&var18);
            func_020a0810((Struct_020a0810*)&var18, 1);
            func_020a01ec((Struct_020a01ec*)var18.unknown_68_, 1);
            func_020ac494(&var18);
            func_0201bf98(func_02012fe4(), 3, 1);
        }
        short var19[4];
        int var20 = func_ov000_0215e9fc(arg0->unknown_6b0_, var19, 4, 0);
        for (int var21 = 0; var21 < var20; var21++) {
            GameObject* var22 = var0->GetPartyMemberByIndex(var19[var21]);
            if (var22 != NULL) {
                *((unsigned char*)var22 + 0xc3) = 0x96;
            }
        }
        if (arg0->unknown_28_ >= 0 && func_ov017_021959b4() == 0) {
            void* var23 = func_0205ec34();
            Struct_02064a08 var24;
            memset(&var24, 0, sizeof(var24));
            var24.unknown_18_ = arg0->unknown_28_;
            if (arg0->unknown_6b0_->unknown_8e14_ == 2) {
                if (func_02064a24(var23, &var24)) {
                    func_0206f81c(&var24);
                }
            } else {
                if (func_02064a08(var23, &var24)) {
                    func_0206f81c(&var24);
                }
            }
        }
        if (func_02010750((char*)var0) != 0) {
            if (func_020a3694((int*)arg0->unknown_1c_)) {
                func_02010604(var0, 1, 1, arg0->unknown_3e_);
                arg0->unknown_6b6_ |= 0x2000;
            } else {
                func_02010604(var0, 1, 1, 0);
                arg0->unknown_6b6_ |= 0x2000;
            }
        }
        func_0209c530(data_02109bf4);
        if (arg0->unknown_6b0_->unknown_8e14_ == 2 || func_02046b60(arg1, 4) != 0) {
            func_0209c20c((Struct_02109bf4_3*)data_02109bf4);
        }
        if (func_02046b60(arg1, 4) != 0) {
            arg0->unknown_6b6_ &= ~0x1000;
            inline_ov017_021b790c_2((GameResources*)var1)->inline_ov017_021b790c(1);
            func_0209c678((Struct_02109bf4_4*)data_02109bf4, 0);
            if (var15 && arg0->unknown_28_ >= 0 && func_0202c540(var9) != 0) {
                GameObject* var25 = var0->GetProtagonist();
                if (var25 != NULL && (**(int**)((char*)var25 + 0x130) & 1)) {
                    func_02048150(var25, 0, 1);
                    *(unsigned short*)(*(char**)((char*)var25 + 0x130) + 4) = 1;
                    *(unsigned int*)((char*)var25 + SCENE_COMBATANT_FLAGS_021b790c) &= ~1;
                    func_02033b88((Struct_02010604*)var25, 0);
                }
                unsigned char var26 = func_020100a8(var0);
                func_ov017_021cedf4(var26, 1, 0);
                func_ov017_021c9e00(var26, 0, 0, 1);
            }
        }
        func_ov017_02191108(var1, 1, 1, 1, 1);
        if (var2 != NULL) {
            func_020397c0(var2);
        }
        unsigned char* var27 = func_02012fe4();
        if (arg0->unknown_6b6_ & 0x400) {
            BackgroundLoader* var28 = BackgroundLoader::GetInstance();
            ((Zone3D*)var27)->SwitchZone(*(unsigned short*)var27, 0);
            while (*(int*)(var27 + SCENE_ZONE_LOCKS_021b790c) != 0) {
                var28->RemoveAllLocks();
                func_02015438(var27);
            }
        }
        func_0205859c(func_02057924());
        var27[SCENE_ZONE_FLAG_021b790c] &= ~1;
        int var29 = func_020100f8((char*)var0);
        switch ((*(Struct_ov017_021b790c_7**)(var27 + 8))->unknown_c_5_) {
        case 0:
            func_020a27cc((Struct_020a27cc*)var29);
            break;
        case 1:
            func_020a2800((Struct_020a2800*)var29);
            break;
        case 2:
            func_020a2830((void*)var29);
            break;
        default:
            func_020a2800((Struct_020a2800*)var29);
            break;
        }
        char* var30 = (char*)LightingManager::GetInstance();
        *(float*)(var30 + 0x94) = var0->GetDayTimer();
        *(int*)(var30 + 0x98) = var0->GetTimeOfDay();
        ((LightingManager*)var30)->RecomputeAdvancedLighting();
        ((LightingManager*)var30)->SubmitToRenderConfig();
        arg0->unknown_6b4_ = 5;
    } else if (var6 == 5) {
        if (arg0->unknown_6b6_ & 0x1000) {
            if (func_02046b60(*(Struct_02038598_5**)(var1 + 0x3000 + SCENE_NODES_021b790c), 3) == 0) {
                SetMainBrightness((GameResources*)var1, 0, 0x1e);
            }
        }
        func_ov017_021c98f4(*(unsigned short*)((char*)var0->GetUnknownGameObject() + SCENE_COMBATANT_ID_021b790c), 0);
        func_ov017_021b6f9c(arg0);
        arg0->unknown_1_ = 1;
    } else if (var6 == 2) {
        unsigned short var31 = arg0->unknown_6b8_;
        if (arg0->unknown_6b8_ < 500) {
            arg0->unknown_6b8_ += var0->GetEffectiveDeltaTime();
        }
        if (var31 < 500 && arg0->unknown_6b8_ >= 500) {
            GameObject* var32 = var0->GetUnknownGameObject();
            void* var33 = func_020d7a50();
#if defined(jpn)
            char var34[0x64];
            __clear(var34, sizeof(var34));
            if (var32 != NULL) {
                sprintf(var34, data_ov017_021d8358, *(char**)((char*)var32 + 0x134));
            }
#else
            func_02046380(var3);
            char var35[0x64];
            char var36[0x64];
            __clear(var35, sizeof(var35));
            __clear(var36, sizeof(var36));
            if (var32 != NULL) {
                Struct_ov017_021b790c_8 var37;
                func_020e4c74(&var37, var0->GetUnknownGameObject());
                var3->unknown_0_ = &var37;
                sprintf(var36, (const char*)func_020e51cc(0x20));
                func_02046608(var3, 0xc, var36, var35, 0xe3, 0, 1);
            }
#endif
            if (abs(GetBrightness((GameResources*)var1, false)) == 0x10) {
                void* var38 = func_020704fc();
                Struct_ov017_021b790c_8 var39;
                __clear(&var39, sizeof(var39));
                SetMainBrightness((GameResources*)var1, 0, 1);
                func_02070900((Struct_02070900_2*)var38, (Struct_02070900*)&var39, 0);
                func_020707c8((Struct_020707c8*)var38);
#if defined(jpn)
                func_0204500c(var3, var34, 0);
#else
                func_0204500c(var3, var35, 0, 0xe3);
#endif
                var3->unknown_998_ = 1;
                func_02042b3c(var3);
            } else {
#if defined(jpn)
                func_020d7e10(var33, var34, 0, 0, 1);
#else
                func_020d7e10(var33, var35, 0, 0, 1, 1);
#endif
            }
            if (func_020a3694((int*)arg0->unknown_1c_)) {
                func_020466e4(var5, 0x200);
            }
        }
        if (arg0->unknown_6c7_ == 0) {
            func_ov017_021cbf18(0, arg0->unknown_24_);
            arg0->unknown_6c7_ = 1;
            arg0->unknown_6c8_ = 0;
        } else if (arg0->unknown_6c7_ != 0 && var4->unknown_fc0_ == 0) {
            arg0->unknown_6c8_ += var0->GetEffectiveDeltaTime();
            if (arg0->unknown_6c8_ > 3000) {
                if (arg0->unknown_6c7_ == 1) {
                    func_ov017_021b86f8(arg0, arg0->unknown_24_, 1, 0);
                }
                if (arg0->unknown_6c7_ == 2) {
                    arg0->unknown_6c7_ = 0;
                }
            }
        }
        int var40 = func_ov017_02195658(var1);
        if (var40 >= 0) {
            func_020a367c(arg0->unknown_1c_, (unsigned char)var40);
        }
        if (*(unsigned char*)(var1 + 0x4000 + SCENE_EVENT_FLAG_021b790c) != 0) {
            func_ov017_021b86f8(arg0, arg0->unknown_24_, 0, 0);
            func_02039758(var2, 0);
            func_ov017_021b6f9c(arg0);
            arg0->unknown_1_ = 1;
        }
    } else if (var6 == 3) {
        if (var3->unknown_998_ == 0) return;
        func_020397c0(var2);
        func_02039758(var2, 0);
        func_ov017_021b6f9c(arg0);
        arg0->unknown_1_ = 1;
    } else if (var6 == 1) {
        if (*(unsigned char*)(var1 + 0x4000 + SCENE_EVENT_FLAG_021b790c) != 0) {
            func_ov017_021b6f9c(arg0);
            arg0->unknown_1_ = 1;
        }
        int var41 = func_ov017_02195658(var1);
        if (var41 >= 0) {
            func_020a367c(arg0->unknown_1c_, (unsigned char)var41);
        }
    } else if (var6 == 4) {
        if (arg0->unknown_6c6_ != 0) {
            Struct_ov017_021b790c_2* var42 = func_020421a0();
            func_02043204((char*)var42);
            func_02043124(var42);
            unsigned char var43;
            unsigned char var44;
            var44 = arg0->unknown_48_;
            var43 = arg0->unknown_46_;
#if defined(jpn)
            char var45[0x64];
            __clear(var45, sizeof(var45));
            if (var44 != 0) {
                GameObject* var46 = func_0200ff1c(var0, func_020100b0(var0));
                if (var46 != NULL) {
                    sprintf(var45, data_ov017_021d8395, *(char**)((char*)var46 + 0x134));
                }
            } else {
                GameObject* var47 = var0->GetPartyMemberByIndex(var43);
                if (var47 != NULL) {
                    GameObject* var48 = var0->GetPartyMemberByIndex(func_02039888(var47));
                    if (var48 != NULL) {
                        sprintf(var45, data_ov017_021d83c0, *(char**)((char*)var48 + 0x134));
                    }
                }
            }
            func_0204500c(var42, var45, 0);
#else
            char var49[0x100];
            Struct_ov017_021b790c_8 var50;
            __clear(var49, sizeof(var49));
            if (var44 != 0) {
                if (func_0200ff1c(var0, func_020100b0(var0)) != NULL) {
                    func_020e4bf4(&var50, func_020100b0(var0));
                    var42->unknown_0_ = &var50;
                    sprintf(var49, (const char*)func_020e51cc(0x21));
                }
            } else {
                GameObject* var51 = var0->GetPartyMemberByIndex(var43);
                if (var51 != NULL) {
                    GameObject* var52 = var0->GetPartyMemberByIndex(func_02039888(var51));
                    if (var52 != NULL) {
                        func_020e4bf4(&var50, var52->obj3D_.unknown_4_);
                        var42->unknown_0_ = &var50;
                        sprintf(var49, (const char*)func_020e51cc(0x22));
                    }
                }
            }
            func_0204500c(var42, var49, 0, 0xe3);
            func_02042b3c(var42);
#endif
            var42->unknown_998_ = 1;
            var42->unknown_19b2_ = 1;
            var42->unknown_19b1_ = 0;
            var42->unknown_195b_ |= 2;
            arg0->unknown_6c6_ = 0;
        }
        arg0->unknown_6b8_ += var0->GetEffectiveDeltaTime();
        if (arg0->unknown_6b8_ > 1000) {
            func_02043204((char*)var3);
            func_02043124(var3);
            arg0->unknown_6b4_ = 6;
        }
    }
}
