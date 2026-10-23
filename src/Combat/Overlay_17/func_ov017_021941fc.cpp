#include <globaldefs.h>
#include "Combat/SearchEntry.h"

#if defined(jpn)
enum {
    Enum_ov017_021941fc_371 = 0x16f,
    Enum_ov017_021941fc_1788 = 0x4ec,
    Enum_ov017_021941fc_1844 = 0x524,
    Enum_ov017_021941fc_17408 = 0x4100,
    Enum_ov017_021941fc_172 = 0xfc,
    Enum_ov017_021941fc_739 = 0xc3,
    Enum_ov017_021941fc_207 = 0xcb,
    Enum_ov017_021941fc_738 = 0xc2,
    Enum_ov017_021941fc_969 = 0x139,
    Enum_ov017_021941fc_737 = 0xc1,
    Enum_ov017_021941fc_1052 = 0x16c,
    Enum_ov017_021941fc_741 = 0xc5,
    Enum_ov017_021941fc_752 = 0xd0,
    Enum_ov017_021941fc_798 = 0xfe,
    Enum_ov017_021941fc_2816 = 0x8e0,
    Enum_ov017_021941fc_2864 = 0x910,
    Enum_ov017_021941fc_348 = 0x150,
    Enum_ov017_021941fc_352 = 0x154,
    Enum_ov017_021941fc_364 = 0x160,
    Enum_ov017_021941fc_2860 = 0x90c,
    Enum_ov017_021941fc_1816 = 0x508,
    Enum_ov017_021941fc_2908 = 0x93c,
    Enum_ov017_021941fc_2812 = 0x8dc,
    Enum_ov017_021941fc_2828 = 0x8ec,
    Enum_ov017_021941fc_2832 = 0x8f0,
    Enum_ov017_021941fc_2852 = 0x904,
    Enum_ov017_021941fc_2856 = 0x908,
    Enum_ov017_021941fc_2952 = 0x968,
    Enum_ov017_021941fc_3004 = 0x99c,
    Enum_ov017_021941fc_1804 = 0x4fc,
    Enum_ov017_021941fc_85 = 0x35,
    Enum_ov017_021941fc_17152 = 0x4100,
    Enum_ov017_021941fc_178 = 0xa6,
    Enum_ov017_021941fc_853 = 0x135,
};
#else
enum {
    Enum_ov017_021941fc_371 = 0x173,
    Enum_ov017_021941fc_1788 = 0x6fc,
    Enum_ov017_021941fc_1844 = 0x734,
    Enum_ov017_021941fc_17408 = 0x4400,
    Enum_ov017_021941fc_172 = 0xac,
    Enum_ov017_021941fc_739 = 0x2e3,
    Enum_ov017_021941fc_207 = 0xcf,
    Enum_ov017_021941fc_738 = 0x2e2,
    Enum_ov017_021941fc_969 = 0x3c9,
    Enum_ov017_021941fc_737 = 0x2e1,
    Enum_ov017_021941fc_1052 = 0x41c,
    Enum_ov017_021941fc_741 = 0x2e5,
    Enum_ov017_021941fc_752 = 0x2f0,
    Enum_ov017_021941fc_798 = 0x31e,
    Enum_ov017_021941fc_2816 = 0xb00,
    Enum_ov017_021941fc_2864 = 0xb30,
    Enum_ov017_021941fc_348 = 0x15c,
    Enum_ov017_021941fc_352 = 0x160,
    Enum_ov017_021941fc_364 = 0x16c,
    Enum_ov017_021941fc_2860 = 0xb2c,
    Enum_ov017_021941fc_1816 = 0x718,
    Enum_ov017_021941fc_2908 = 0xb5c,
    Enum_ov017_021941fc_2812 = 0xafc,
    Enum_ov017_021941fc_2828 = 0xb0c,
    Enum_ov017_021941fc_2832 = 0xb10,
    Enum_ov017_021941fc_2852 = 0xb24,
    Enum_ov017_021941fc_2856 = 0xb28,
    Enum_ov017_021941fc_2952 = 0xb88,
    Enum_ov017_021941fc_3004 = 0xbbc,
    Enum_ov017_021941fc_1804 = 0x70c,
    Enum_ov017_021941fc_85 = 0x55,
    Enum_ov017_021941fc_17152 = 0x4300,
    Enum_ov017_021941fc_178 = 0xb2,
    Enum_ov017_021941fc_853 = 0x355,
};
#endif
#include "Combat/NameEntryQueue.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Input/Input.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0202b2f0;
struct Struct_0202c1a4;
struct Struct_0209494c {
    char unknown_0_[Enum_ov017_021941fc_969];
    unsigned char unknown_3c9_0_ : 1;
    unsigned char unknown_3c9_1_ : 7;
    unsigned char unknown_3ca_;
    signed char unknown_3cb_;
};
struct Struct_02012de8;
struct Struct_02038598_4;
struct Struct_020469f8;
struct Struct_020469f8_2;
struct Struct_02015438;
struct Struct_02038598_5;
struct Struct_0203402c;
struct Struct_02039df4;
struct Struct_ov017_0218e674;
struct Struct_02033834_2;
struct Struct_02033834;
struct Struct_02033b68;
struct Struct_02028460_3 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02061c04_10 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    short unknown_6_;
    unsigned char unknown_8_;
    unsigned short unknown_a_;
    signed char unknown_c_;
    unsigned char unknown_d_;
    float unknown_10_;
};

struct Struct_ov017_021941fc_2 {
    unsigned short unknown_0_0_ : 8;
    unsigned short unknown_1_0_ : 8;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 4;
    unsigned short unknown_2_5_ : 6;
    unsigned short unknown_3_3_ : 1;
    unsigned short unknown_3_4_ : 1;
    unsigned short unknown_3_5_ : 1;
    unsigned short unknown_3_6_ : 1;
    unsigned short unknown_3_7_ : 1;
    unsigned short unknown_4_0_ : 16;
    unsigned short unknown_6_0_ : 16;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
};
struct Struct_ov017_021941fc_3 {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 6;
};
extern "C" struct Struct_0202b2f0* func_0202ae18(void);
extern "C" void* func_0205ec34(void);
extern "C" void* func_020d6c00(void);
extern "C" int* func_020936f8(void);
extern "C" void* func_020e3580(void);
extern "C" int func_02046b08(void** arg0);
extern "C" void func_ov017_021cd6d8(struct Struct_02061c04_10* arg0);
extern "C" void func_ov017_0219577c(int arg0, int arg1, int arg2);
extern "C" void func_ov017_0219593c(void);
extern "C" void func_020939dc(void* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_020dc2d0(int arg0);
extern "C" void func_02093a14(char* arg0);
extern "C" void func_02094030(int* arg0, int arg1, int arg2, signed char arg3);
extern "C" int func_0209494c(struct Struct_0209494c* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" unsigned int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" void func_020939fc(unsigned char* arg0);
extern "C" void func_ov017_021c37a4(void);
extern "C" int func_0202c508(struct Struct_0202b2f0* arg0);
extern "C" int func_0202c578(struct Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202c758(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_ov017_021d1810(int, int, signed char);
extern "C" void func_ov017_021cea34(int arg0);
extern "C" void func_0202c6dc(struct Struct_0202b2f0* arg0, int arg1);
extern "C" int func_ov017_02195658(unsigned char* arg0);
extern "C" int func_0202c540(struct Struct_0202b2f0* arg0);
extern "C" void func_ov017_02195618(unsigned char* arg0);
extern "C" void func_020e35a0(unsigned char* arg0);
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" int func_ov017_0219531c(void* arg0, void* arg1);
extern "C" int func_02011494(char* arg0, void* arg1);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void func_ov017_02195250(void* arg0, void* arg1);
extern "C" int func_0202bd34(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_ov017_021cc198(unsigned char arg0, int arg1);
extern "C" void func_ov017_021d0b30(int arg0, int arg1, void* arg2);
extern "C" void func_0202c69c(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c718(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c660(struct Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" GameObject* func_0200fee0(GameState* arg0, int arg1);
extern "C" void func_ov017_02195494(void* arg0, int arg1, int arg2);
extern "C" int func_0202bd68(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_ov003_02167240(void* arg0);
extern "C" int abs(int arg0);
extern "C" void func_ov017_021af59c(void* arg0);
extern "C" void func_020469f8(struct Struct_020469f8* arg0, struct Struct_020469f8_2* arg1);
extern "C" int func_0202c1c0(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_ov017_021905b8(unsigned char* arg0, int arg1, int arg2);
extern "C" int func_02046b60(struct Struct_02038598_5* arg0, int arg1);
extern "C" void* func_0202c19c(void* arg0);
extern "C" int func_02053ed0(void* arg0);
extern "C" int func_0203402c(struct Struct_0203402c* arg0);
extern "C" int fix32_Divide(int arg0, int arg1);
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" unsigned short func_0202bc8c(struct Struct_0202b2f0* arg0);
extern "C" int func_ov017_021bd3a4(struct Struct_ov017_0218e674* arg0);
extern "C" int func_02039888(void* arg0);
struct Vector3i;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);
extern "C" int func_020535c8(signed char* arg0);
extern "C" void func_020531f0(void* arg0);
extern "C" GameObject* func_0200ffe0(GameState* arg0, int arg1);
extern "C" void func_02076ccc(void* arg0, int arg1);
extern "C" void func_ov017_021917f0(int arg0, int arg1);
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);
extern "C" void func_ov017_021bd4d0(void* arg0, unsigned char arg1, int arg2, int arg3);
extern "C" void func_ov017_021d48f0(void);
extern "C" void* func_0207d78c(void);
extern "C" void func_0207dba8(void* arg0);
extern int data_ov017_021d63f0;
extern int data_ov017_021d63d8;
extern int data_ov017_021d63e4;
extern int data_ov017_021d63fc;
// USA: func_ov017_021941fc
extern "C" ARM void func_ov017_021941fc(unsigned char* arg0, unsigned char* arg1, void** arg2) {
    struct Struct_02061c04_10 var0;
    unsigned char var1[15];
    int var2[3];
    int var3[3];
    struct Struct_02028460_3 var4;
    unsigned char var5[4];

    GameState* var6;
    struct Struct_0202b2f0* var7;
    GameObject* var8;
    void* var9;
    int var10;
    void* var11;
    void* var12;
    int* var13;
    unsigned char* var14;
    var6 = GameState::GetInstance();
    var10 = ((int)GetGameResources());
    var7 = func_0202ae18();
    var8 = var6->GetUnknownGameObject();
    var11 = (void*)(int)BackgroundLoader::GetInstance();
    arg2 = *(void***)(arg0 + 0x3000 + Enum_ov017_021941fc_1788);
    var12 = func_0205ec34();
    var9 = func_020d6c00();
    var13 = func_020936f8();
    arg1 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_1844);
    var14 = (unsigned char*)func_020e3580();
    if (func_02046b08(arg2) != 0 && *(unsigned short*)(arg0 + Enum_ov017_021941fc_17408 + Enum_ov017_021941fc_172) != 0) {
        var0.unknown_0_ = 0;
        var0.unknown_2_ = 0;
        var0.unknown_4_ = 0;
        var0.unknown_6_ = 0;
        var0.unknown_8_ = 0;
        var0.unknown_a_ = 0;
        var0.unknown_10_ = 0.0f;
        var0.unknown_c_ = -1;
        var0.unknown_2_ = *(unsigned short*)(arg0 + Enum_ov017_021941fc_17408 + Enum_ov017_021941fc_172);
        func_ov017_021cd6d8(&var0);
        *(unsigned short*)(arg0 + Enum_ov017_021941fc_17408 + Enum_ov017_021941fc_172) = 0;
    }
    if (IsBrightnessZero((GameResources*)arg0, false) != 0) {
        int var15 = 0;
        if (*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_739) != 0) {
            unsigned char* var16 = *(unsigned char**)((unsigned char*)var10 + 0x3000 + Enum_ov017_021941fc_1844);
            if (var16[3] != 0 && *(unsigned short*)(var16 + 8) == 0 && var16[Enum_ov017_021941fc_207] == 2) {
                func_ov017_0219577c(0, 0, 0);
            } else {
                func_ov017_0219593c();
                func_020939dc(func_020936f8());
            }
            var15 = 1;
        } else if (func_02046b08(arg2) != 0 && *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_738) != 0) {
            if (func_020100a8(var6) != 0) {
                func_ov017_0219577c(0, 1, 1);
            }
            var15 = 1;
        }
        if (var15 != 0) {
            func_020dc2d0(0);
            func_02093a14((char*)var13);
            func_02094030(var13, 4, -1, 0);
            *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_738) = 0;
            *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_739) = 0;
        }
    }
    if (((struct Struct_0209494c*)var13)->unknown_3c9_0_ &&
        func_0209494c((struct Struct_0209494c*)var13) != 0 &&
        func_0202b7d8((int*)var7) == 0 &&
        func_02046708((struct Struct_02012de8*)var9, 0x1000) == 0) {
        func_020939fc((unsigned char*)var13);
    }
    if (TestFlags00((GameResources*)arg0, 2) != 0) return;
    if (func_0202b7d8((int*)var7) == 0) return;
    if (*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_737) != 0 &&
        ((BackgroundLoader*)var11)->GetNumQueuedTasks() == 0) {
        func_ov017_021c37a4();
        *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_737) = 0;
    }
    if (func_0202c508(var7) != 0) {
        int var17 = -1;
        for (int var18 = 1; var18 < 4; var18++) {
            if (func_0202c578(var7, var18) == 0) continue;
            if (func_0202c758(var7, var18) != 0) continue;
            func_02094030(func_020936f8(), 3, var17, var18);
            func_ov017_021d1810(3, var17, var18);
            func_ov017_021cea34(var18);
            func_0202c6dc(var7, var18);
        }
    }
    if (func_02046708((struct Struct_02012de8*)var9, 0x40000) == 0) {
        func_ov017_02195658(arg0);
    }
    if (func_0202c540(var7) != 0) {
        if (func_0202c578(var7, 0) != 0) {
            func_ov017_02195618(arg0);
        }
    } else {
        for (int var19 = 1; var19 < 4; var19++) {
            if (func_0202c578(var7, var19) == 0) continue;
            if (func_0202c758(var7, var19) != 0) continue;
            func_ov017_021cea34(var19);
            func_0202c6dc(var7, var19);
        }
    }
    func_020e35a0(var14);
    if ((*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] == 0) {
        if (func_0202c508(var7) != 0) {
            if (var14[1] != 0) goto dispatched;
            func_020466f4((struct Struct_02038598_4*)var9, 0x800);
            if (func_ov017_0219531c(arg0, var1) == 0) goto dispatched;
            int var20 = 1;
            int var21 = func_02011494((char*)var6, var5);
            if (var21 + var1[1] > 4) var20 = 0;
            if (func_0206dfb0((int)var12, (unsigned char*)var12 + 0x8c, 3) != 0) {
                func_ov017_02195250(arg0, var1);
                var20 = 0;
            }
            if (func_0202bd34(var7, var1[0]) == 0) var20 = 0;
            if (var1[0xe] != 0) var20 = 0;
            if (var20 != 0) {
                func_020466e4((unsigned int*)var9, 0x800);
                func_ov017_021cc198(var1[0], 1);
                func_ov017_021d0b30(0, var1[0], var1 + 2);
                func_0202c69c(var7, var1[0]);
                func_0202c718(var7, var1[0]);
                (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] = 1;
                (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[1] = 0;
                func_ov017_02195214((Struct_ov017_021941fc *) (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052) + 2),
                    (Struct_ov017_021941fc *) var1);
                *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_741) = 1;
            } else {
                func_ov017_021cc198(var1[0], 0);
                func_0202c660(var7, var1[0]);
                if (*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_752) == 0) {
                    func_020466f4((struct Struct_02038598_4*)var9, 0x800);
                }
            }
        } else if (*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_798) != 0 &&
                   func_0202c1a4((struct Struct_0202c1a4*)var7) > 0) {
            int var22 = 0;
            for (int var23 = 1; var23 < 4; var23++) {
                if ((*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_798) & (1 << var23)) != 0) {
                    *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_798) &= ~(1 << var23);
                    var22 = var23;
                    break;
                }
            }
            int var24;
            if (func_0200fee0(var6,
                    func_0202c1a4((struct Struct_0202c1a4*)var7)) != NULL) {
                var24 = 1;
            } else {
                var24 = 2;
            }
            (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] = 1;
            (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[1] = (unsigned char)var24;
            func_ov017_02195494(arg0, var22,
                (int)(*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052) + 2));
            (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[2] = (unsigned char)var22;
            (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[3] = 1;
            if (var24 == 1) *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_741) = 1;
        }
    } else if ((*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] == 1) {
        if (func_0202bd68(var7, (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[2]) != 0) {
            if ((*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[1] == 2) {
                void* var25 = *(void**)(*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2816) + 0x24);
                if (var25 != NULL) func_ov003_02167240(var25);
                (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] = 2;
            } else {
                if (func_0202c508(var7) != 0 && *(int*)((char*)var7 + 0xfc0) == 0) {
                    if (func_0202bd34(var7,
                            (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[2]) == 0) {
                        unsigned char* var26 = *(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052);
                        var26[0] = 0;
                        var26[1] = 0;
                    }
                }
                int var27 = 1;
                if (func_02046b08(arg2) == 0) var27 = 0;
                if (arg1[3] != 0 && arg1[Enum_ov017_021941fc_207] == 2) var27 = 1;
                int var28 = abs(GetBrightness((GameResources*)arg0, false));
                if (var28 + abs(GetBrightness((GameResources*)arg0, true)) > 0) var27 = 0;
                if (*(short*)((char*)var8 + 0xac) != 0) var27 = 0;
                if (func_02046708((struct Struct_02012de8*)var9, 0x200) != 0) var27 = 1;
                if (func_02046708((struct Struct_02012de8*)var9, 0x400) != 0) var27 = 0;
                if (((BackgroundLoader*)var11)->GetNumQueuedTasks() > 0) var27 = 0;
                if (var27 != 0) {
                    unsigned char* var29 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2864);
                    func_ov017_021af59c(var29);
                    var29[9] = (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[1];
                    func_ov017_02195214((Struct_ov017_021941fc *) (var29 + 0xc),
                        (Struct_ov017_021941fc *) (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052) + 2));
                    func_020469f8((struct Struct_020469f8*)arg2,
                        (struct Struct_020469f8_2*)var29);
                    (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] = 2;
                } else if (*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_741) != 0) {
                    func_02094030(var13, 5, -1, 0);
                    *(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_741) = 0;
                }
            }
        } else if (func_0202c1c0(var7,
                       (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[2]) != 0) {
            if (func_02046708((struct Struct_02012de8*)var9, 0x40000) == 0) {
                func_ov017_021905b8(arg0,
                    (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[2], 0);
            }
        } else if ((*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[1] != 2) {
            (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] = 2;
        }
    } else if ((*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] == 2) {
        if (func_02046b60((struct Struct_02038598_5*)arg2, 0x26) != 0) goto dispatched;
        if (*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_752) == 0) {
            func_020466f4((struct Struct_02038598_4*)var9, 0x800);
        }
        (*(unsigned char**)(arg0 + 0x4000 + Enum_ov017_021941fc_1052))[0] = 0;
    }
dispatched:
    if (TestFlags00((GameResources*)arg0, 2) != 0) return;
    if (func_0202b7d8((int*)var7) == 0) return;
    struct Struct_ov017_021941fc_2* var30 = (struct Struct_ov017_021941fc_2*)func_0202c19c(var7);
    if (TestFlags00((GameResources*)arg0, 0x40) == 0) {
        int var31 = 0;
        unsigned char var32 = 0;
        if (((Object3D*)((struct Struct_02039df4*)var8))->GetField06() == 10000 ||
            *(int*)((char*)var8 + Enum_ov017_021941fc_348) == 10000) {
            *(Vector3i*)var2 = *(Vector3i const*)&data_ov017_021d63f0;
            *(Vector3i*)var3 = *(Vector3i const*)&data_ov017_021d63d8;
            var31 = 0;
        } else if (((Object3D*)((struct Struct_02039df4*)var8))->GetField06() == 10100 ||
                   *(int*)((char*)var8 + Enum_ov017_021941fc_348) == 10100) {
            *(Vector3i*)var2 = *(Vector3i const*)&data_ov017_021d63e4;
            *(Vector3i*)var3 = *(Vector3i const*)&data_ov017_021d63fc;
            var31 = 0;
        } else if (func_02053ed0(var8) == 0) {
            *(Vector3i*)var2 = *(Vector3i const*)(&var8->obj3D_.position_.x);
            *(Vector3i*)var3 = *(Vector3i const*)(&var8->obj3D_.rotation_.x);
            if (func_0203402c((struct Struct_0203402c*)var8) != 0) {
                var2[1] = var2[1] - fix32_Divide(var8->obj3D_.GetHeight(), 0x1800);
            }
            var31 = *(unsigned char*)((char*)var8 + 0xbe);
            if (func_02046b24((struct Struct_02015438**)arg2) == 0x26) var31 = 0;
            var32 = 1;
        } else {
            *(Vector3i*)var2 = *(Vector3i const*)((int*)((char*)var8 + Enum_ov017_021941fc_352));
            *(Vector3i*)var3 = *(Vector3i const*)((int*)((char*)var8 + Enum_ov017_021941fc_364));
            if (func_02053ed0(var8) == 1) {
                var31 = 2;
            } else {
                var31 = var32;
            }
        }
        var30->unknown_8_ = (short)(var2[0] >> 7);
        var30->unknown_a_ = (short)(var2[1] >> 7);
        var30->unknown_c_ = (short)(var2[2] >> 7);
        var30->unknown_e_ = (short)var3[1];
        var30->unknown_1_0_ = (unsigned short)var31;
        var30->unknown_4_0_ = func_0202bc8c(var7);
        var30->unknown_6_0_ = g_keyManager.currentKeys_;
        var30->unknown_3_4_ = 1;
        var30->unknown_3_7_ = var32;
        var30->unknown_2_1_ = 0;
        for (int var33 = 0; var33 < 4; var33++) {
            if (var6->GetGameObjectByIndex(var33) != NULL) {
                var30->unknown_2_1_ |= (1 << var33);
            }
        }
        if (func_ov017_021bd3a4(
                *(struct Struct_ov017_0218e674**)(arg0 + 0x3000 + Enum_ov017_021941fc_1844)) != 0) {
            unsigned char* var34 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_1844);
            var34++;
            var30->unknown_2_1_ &= ~var34[Enum_ov017_021941fc_371];
        }
    } else {
        var30->unknown_1_0_ = 0;
    }
    unsigned char* var35 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2864);
    unsigned char* var36 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2860);
    unsigned char* var37 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_1816);
    unsigned char* var38 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2908);
    var30->unknown_2_0_ = 0;
    var30->unknown_2_0_ |= var35[3];
    var30->unknown_2_0_ |= var36[3];
    var30->unknown_3_3_ = 0;
    var30->unknown_3_3_ |= var37[3];
    var30->unknown_3_3_ |= var38[3];
    var30->unknown_3_5_ = 1;
    if (func_02046b08(arg2) == 0) {
        var30->unknown_3_5_ = 0;
        var30->unknown_3_5_ |= (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2812))[3];
        var30->unknown_3_5_ |= (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2828))[3];
        var30->unknown_3_5_ |= (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2832))[3];
        var30->unknown_3_5_ |= (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2852))[3];
        var30->unknown_3_5_ |= (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2856))[3];
        var30->unknown_3_5_ |= (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_2952))[3];
        var30->unknown_3_5_ |= (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_3004))[3];
    }
    var30->unknown_3_6_ = (*(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021941fc_1804))[3];
    if (arg1[Enum_ov017_021941fc_207] == 2) {
        var30->unknown_2_0_ |= arg1[3];
    }
    if (TestFlags00((GameResources*)arg0, 0x40) == 0) {
    unsigned char* var39 = arg0 + Enum_ov017_021941fc_17152 + Enum_ov017_021941fc_85;
    for (int var40 = 0; var40 < 4; var40++) {
        if (var40 == 0 && TestFlags00((GameResources*)arg0, 0x200) != 0) continue;
        if (func_0202c1c0(var7, var40) == 0) continue;
        if (var40 == func_0202c1a4((struct Struct_0202c1a4*)var7)) continue;
        Struct_0202b2f0_2* var41 = func_0202c178(var7, var40);
        if (var41 == NULL) continue;
        GameObject* var42 = var6->GetPartyMemberByIndex(var40);
        if (var42 == NULL) continue;
        var42 = var6->GetPartyMemberByIndex(func_02039888(var42));
        if (var42 == NULL) continue;
        if ((((struct Struct_ov017_021941fc_3*)((char*)var42 + 0xc1))->unknown_0_0_ & 1) == 0 && var41->unknown_3_4_) {
            var4.unknown_0_ = var41->unknown_8_ << 7;
            var4.unknown_4_ = var41->unknown_a_ << 7;
            var4.unknown_8_ = var41->unknown_c_ << 7;
            int var43 = var41->unknown_e_;
            *(Vector3i*)((int*)((char*)var42 + 0xd4)) = *(Vector3i const*)((int*)&var4);
            *(unsigned char*)((char*)var42 + 0xe0) |= 0x10;
            func_02033834((struct Struct_02033834_2*)var42, var43);
            struct Struct_02028460_3 var44 = *(struct Struct_02028460_3*)((char*)var42 + 0x44);
            if (Vector3fix_Distance((const Vector3fix*)&var4, (const Vector3fix*)&var44) > 0x1000) {
                *(Vector3i*)(&var42->obj3D_.position_.x) = *(Vector3i const*)((int*)&var4);
                func_02033874((struct Struct_02033834*)var42, var43);
            }
        }
        if (var41->unknown_0_.unknown_1_0_ == 2) {
            if (func_020535c8((signed char*)var42) != 0) {
                func_020531f0(var42);
            }
            GameObject* var45 = func_0200ffe0(var6,
                *(unsigned short*)((char*)var42 + 0x100 + Enum_ov017_021941fc_178));
            if (var45 != NULL && *(int*)((char*)var45 + 0x130) != 9) {
                if ((**(int**)((char*)var42 + 0x130) & 1) == 0) {
                    func_02076ccc(var45, 9);
                }
            }
        }
        if ((((struct Struct_ov017_021941fc_3*)((char*)var42 + 0xc1))->unknown_0_0_ & 2) == 0) {
            int var46 = *(unsigned char*)((char*)var42 + 0xbe);
            if (var46 == 2 && var41->unknown_0_.unknown_1_0_ != 2) {
                func_ov017_021917f0(var40, 0);
            } else if (var41->unknown_0_.unknown_1_0_ == 2 && var46 != 2) {
                func_ov017_021917f0(var40, 1);
            }
            func_02033b68((struct Struct_02033b68*)var42, var41->unknown_0_.unknown_1_0_);
        }
        if ((*(unsigned char*)(arg0 + 0x4000 + Enum_ov017_021941fc_853) & (1 << var40)) == 0) continue;
        if (var41->unknown_3_7_ != 1) continue;
        func_ov017_021bd4d0(*(void**)(arg0 + 0x3000 + Enum_ov017_021941fc_1844), var40, 1, 1);
        *var39 = *var39 & ~(1 << var40);
    }
    }
    func_ov017_021d48f0();
    func_0207dba8(func_0207d78c());
}
