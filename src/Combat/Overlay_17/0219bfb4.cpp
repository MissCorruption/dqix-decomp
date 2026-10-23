#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_0219bfb4_9196 = 0x240c, Enum_ov017_0219bfb4_610 = 0x282, Enum_ov017_0219bfb4_10118 = 0x27c6, Enum_ov017_0219bfb4_10116 = 0x27c4, Enum_ov017_0219bfb4_10120 = 0x27c8, Enum_ov017_0219bfb4_10100 = 0x27b4, Enum_ov017_0219bfb4_10164 = 0x27f4, Enum_ov017_0219bfb4_10166 = 0x27f6, Enum_ov017_0219bfb4_92 = 0x28, Enum_ov017_0219bfb4_2400 = 0x800 };
#else
enum { Enum_ov017_0219bfb4_9196 = 0x23ec, Enum_ov017_0219bfb4_610 = 0x262, Enum_ov017_0219bfb4_10118 = 0x2786, Enum_ov017_0219bfb4_10116 = 0x2784, Enum_ov017_0219bfb4_10120 = 0x2788, Enum_ov017_0219bfb4_10100 = 0x2774, Enum_ov017_0219bfb4_10164 = 0x27b4, Enum_ov017_0219bfb4_10166 = 0x27b6, Enum_ov017_0219bfb4_92 = 0x5c, Enum_ov017_0219bfb4_2400 = 0x960 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/OverlayId.h"
#include "World/Object3D.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_02013fb4;
struct Struct_020a8170;
struct Struct_020a83fc;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_020727d8;
struct Struct_0206f81c_2;
struct Struct_0206f81c_3;
struct Struct_0206f81c_4;
struct Struct_0206f81c_5;
struct Struct_ov017_0219bfb4;

struct Struct_020a83fc_2 {
    char unknown_0_[0x1a];
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
    char unknown_1e_[2];
    int unknown_20_;
    int unknown_24_;
};

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" int func_0202c540(void* arg0);
extern "C" int func_0206e558(void* arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void __clear(void* arg0, unsigned int arg1);
extern "C" void func_020a8170(Struct_020a8170* arg0);
extern "C" void func_020a818c(void* arg0, SafeAllocator* arg1);
extern "C" void func_020a8304(void* arg0);
extern "C" Struct_020a83fc_2* func_020a83fc(Struct_020a83fc* arg0, int arg1);
extern "C" void func_ov017_021d1a18(short arg0, short arg1, int arg2, int arg3);
extern "C" void func_ov017_021d1c2c(unsigned char arg0, unsigned short arg1);
extern "C" void func_02070378(char* arg0);
extern "C" void func_ov017_0219e310(unsigned char* arg0, int arg1);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
extern "C" void func_02017d7c(void* arg0);
extern "C" void func_02039d58(unsigned char* arg0);
extern "C" void func_02039d48(unsigned char* arg0);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" int func_ov017_0219ff58(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021b2174(unsigned char* arg0);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_021b2bf4(Struct_0206f81c_3* arg0, unsigned int arg1);
extern "C" void func_ov017_021b2c0c(Struct_0206f81c_4* arg0, unsigned int arg1);
extern "C" void func_ov017_021b2bdc(Struct_0206f81c_5* arg0, unsigned int arg1);
int LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);
extern "C" void func_020727d8(Struct_020727d8* arg0);
extern "C" int func_0201079c(char* arg0);
extern "C" void func_02072928(void* arg0, Struct_02013fb4* arg1, int arg2, int arg3, void* arg4, unsigned char arg5);
extern "C" int func_020d3018(const char* arg0, const char* arg1);
extern "C" int func_02005a94(signed char* arg0);
extern "C" void func_ov017_021ba90c(Struct_ov017_0219bfb4* arg0);
extern "C" void func_ov004_021689d8(SafeAllocator* arg0, void* arg1);

extern char data_ov017_021d75d0;
extern char data_ov017_021d75dc;
extern char data_ov017_021d75fa;
extern char data_0211e33c;

static inline unsigned char inline_ov017_0219bfb4(int arg0, int arg1) {
    return arg0 * 4 + arg1;
}

// USA: func_ov017_0219bfb4
extern "C" ARM void func_ov017_0219bfb4(int arg0, unsigned short arg1) {
    GameResources* var0 = GetGameResources();
    GameState* var1 = GameState::GetInstance();
    char* var2 = (char*)func_02010828(var1);
    char* var3 = (char*)func_0200fd0c(var1);
    void* var4 = func_0202ae18();
    char* var5 = (char*)func_02012fe4();
    unsigned char* var6 = (unsigned char*)func_0205ec34();
    char* var7 = var5 + Enum_ov017_0219bfb4_9196;
    Struct_0201bdac_2* var8 = (Struct_0201bdac_2*)var0->unknown_ptr_array_36fc[0];
    unsigned char* var9 = (unsigned char*)var0->unknown_ptr_array_36fc[4];
    unsigned char* var10 = (unsigned char*)var0->unknown_ptr_array_371c[4];
    BackgroundLoader::GetInstance()->MaybeFreeAllocations();

    unsigned short var11 = arg1;
    if (arg1 == 0) {
        var11 = *(int*)(var2 + 0x2c94);
    }

    if (func_0202c540(var4)) {
        func_0206e558(var6);
    }
    if (arg0 == 2) {
        var7[Enum_ov017_0219bfb4_610] = 0;
    }
    if (arg0 == 2 && func_0202c508(var4)) {
        if (func_0206dfb0((int)var6, var6 + 0x8c, 0x2b)) {
            char var12[0x533];
            __clear(var12, 0x533);
            SafeAllocator var13;
            var13.ResetAllocatorPointer();
            var13.ResetAllocatorPointer();
            var13.CreateTypeA(var12, 0x533);
            char var14[0x10];
            func_020a8170((Struct_020a8170*)var14);
            func_020a818c(var14, &var13);
            func_020a8304(var14);
            Struct_020a83fc_2* var15 = func_020a83fc((Struct_020a83fc*)var14, var11);
            if (var15) {
                *(unsigned short*)(var5 + Enum_ov017_0219bfb4_10118) = var15->unknown_1a_;
                *(unsigned short*)(var5 + Enum_ov017_0219bfb4_10116) = var15->unknown_1c_;
                var5[Enum_ov017_0219bfb4_10120] = 0;
                Vector3i var16 = *(Vector3i*)(var5 + Enum_ov017_0219bfb4_10100);
                var16.x = var15->unknown_20_;
                var16.z = var15->unknown_24_;
                *(Vector3i*)((int*)(var5 + Enum_ov017_0219bfb4_10100)) = *(Vector3i const*)((int*)&var16);
                func_ov017_021d1a18(var15->unknown_1a_, var15->unknown_1c_, 0, 1);
            }
            var13.Destroy();
        }
        if (var11 == 0x119a) {
            *(unsigned short*)(var5 + Enum_ov017_0219bfb4_10164) = 1;
            *(unsigned short*)(var5 + Enum_ov017_0219bfb4_10166) = 0;
            func_ov017_021d1c2c(1, 0);
        }
    }

    if (var9[2] == 0) {
        func_02070378(var3);
        *(unsigned short*)var3 = var11;
        var3[0xc] = 0;
        func_ov017_0219e310(var9, 0);
        func_020469b4(var8, (Struct_0201bdac*)var9);
    } else if (var9[3] == 0) {
        func_02070378(var3);
        *(unsigned short*)var3 = var11;
        var3[0xc] = 0;
    }

    func_02017d7c(var5);
    ((unsigned char*)var3)[0x6e] |= 0x20;
    for (int var17 = 0; var17 < *(unsigned char*)(var2 + 0xf7c); var17++) {
        GameObject* var18 = var1->GetPartyMemberByIndex(*(unsigned char*)(var2 + var17 + 0xf78));
        if (var18) {
            if (var17 == 0) {
                func_02039d58((unsigned char*)var18);
                var18->obj3D_.SetInheritedAlpha(0x1f);
            } else {
                func_02039d48((unsigned char*)var18);
                var18->obj3D_.SetInheritedAlpha(0);
            }
        }
    }

    if (var10[2] != 0) {
        return;
    }

    char* var19 = (char*)func_020421a0();
    memset(*(void**)(var19 + Enum_ov017_0219bfb4_92), 0, Enum_ov017_0219bfb4_2400);
    func_02043204(var19);
    if (func_ov017_0219ff58(var0, 0, 0, 1)) {
        unsigned char* var20 = (unsigned char*)var0->unknown_ptr_array_3afc[0x14];
        func_ov017_021b2174(var20);
        func_ov017_021b2ba0((Struct_0206f81c_2*)var20, &data_ov017_021d75d0);
        func_ov017_021b2bd0(var20, (int)func_ov004_021689d8, OVERLAY_ID(4));
        func_ov017_021b2bf4((Struct_0206f81c_3*)var20, 1);
        func_ov017_021b2c0c((Struct_0206f81c_4*)var20, 1);
        func_ov017_021b2bdc((Struct_0206f81c_5*)var20, 0);
        func_020469b4(var8, (Struct_0201bdac*)var20);
        return;
    }

    BackgroundLoader::AddLockGlobal();
    unsigned int var21 = 0;
    LoadFileIntoMemory(&data_ov017_021d75dc, &data_0211e33c, &var21);
    if (var21 == 0) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }

    char var22[8];
    func_020727d8((Struct_020727d8*)var22);
    char var23[8];
    __clear(var23, 8);
    short var24 = *(int*)(var2 + 0x2c94);
    if (arg1 != 0) {
        var24 = arg1;
    }
    int var25 = func_0201079c((char*)var1);
    for (int var26 = 0; var26 < 3; var26++) {
        unsigned char var27 = inline_ov017_0219bfb4(var26, 0);
        unsigned char var28 = inline_ov017_0219bfb4(var26, 1);
        char var29[8];
        __clear(var29, 8);
        char var30[8];
        __clear(var30, 8);
        func_02072928(var22, (Struct_02013fb4*)&data_0211e33c, var21, var24, var29, var27);
        func_02072928(var22, (Struct_02013fb4*)&data_0211e33c, var21, var24, var30, var28);
        int var31 = 0;
        int var32 = 0;
        if (func_020d3018(var29, &data_ov017_021d75fa)) {
            var31 = func_02005a94((signed char*)var29);
        }
        if (func_020d3018(var30, &data_ov017_021d75fa)) {
            var32 = func_02005a94((signed char*)var30);
        }
        int var33 = 0;
        if (var31 == 0 && var32 == 0) {
            var33 = 1;
        } else if (var25 >= var31 && var25 <= var32) {
            var33 = 1;
        }
        if (var33) {
            unsigned char var34;
            if (var1->IsMorningDayOrEvening()) {
                var34 = (unsigned int)var26 * 4 + 2;
            } else {
                var34 = (unsigned int)var26 * 4 + 3;
            }
            func_02072928(var22, (Struct_02013fb4*)&data_0211e33c, var21, var24, var23, var34);
            break;
        }
    }
    BackgroundLoader::RemoveLockGlobal();

    signed char var35 = 1;
    if (func_020d3018(var23, &data_ov017_021d75fa)) {
        var35 = func_02005a94((signed char*)var23);
    }
    if (var35 != 3) {
        func_ov017_021ba90c((Struct_ov017_0219bfb4*)var10);
        var10[0x20] = arg0;
        var10[0x21] = var35;
        func_020469b4(var8, (Struct_0201bdac*)var10);
    }
}
