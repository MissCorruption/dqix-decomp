#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" int func_020421a0(void);
struct Struct_02048150;
extern "C" int func_02086ef0(struct Struct_02048150* arg0, int arg1);
struct Struct_0209a9dc_2;
struct Struct_0209a9dc_3 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern "C" struct Struct_0209a9dc_3* func_0209a9dc(struct Struct_0209a9dc_2* arg0, int arg1);
extern "C" void* func_02079e2c(char* arg0, int arg1);
struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" void func_020e4bf4(void* arg0, int arg1);
struct Struct_02046574_2;
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
#if defined(jpn)
extern "C" void func_0204500c(void* arg0, char* arg1, int arg2);
#else
extern "C" void func_0204500c(void* arg0, char* arg1, int arg2, int arg3);
#endif

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_ov023_021f5228(int arg0);
extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_ov023_021f4438(void* arg0);
extern "C" int func_ov023_021f4fc8(void);
struct Struct_ov023_021eeaac_2;
extern "C" void func_ov023_021eefac(struct Struct_ov023_021eeaac_2* arg0);
extern "C" void func_ov017_021ccea4(int arg0, unsigned char* arg1, int arg2);

struct Struct_ov023_021f2368 { unsigned char unknown_0_[0x14]; };

struct Struct_ov023_021f2368_2 {
    int unknown_0_;
    char unknown_4_[0x12 - 0x4];
    unsigned char unknown_12_[4];
    char unknown_16_[0x18 - 0x16];
    int unknown_18_;
    struct Struct_ov023_021f2368 unknown_1c_[4];
    unsigned char unknown_6c_[4];
    int unknown_70_;
    char unknown_74_[0xe5 - 0x74];
    signed char unknown_e5_;
};

extern "C" struct Struct_ov023_021f2368_2* _ZZ21inline_ov023_021f4c04vE1s;

struct Struct_ov023_021f2368_3 { unsigned short unknown_0_0_ : 7; unsigned short unknown_0_7_ : 9; };

// USA: func_ov023_021f2368
extern "C" ARM int func_ov023_021f2368(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021f2368_23284=0x5af4, Enum_ov023_021f2368_6578=0x17e2, Enum_ov023_021f2368_2456=0x868, Enum_ov023_021f2368_22272=0x5900, Enum_ov023_021f2368_156=0x8c, Enum_ov023_021f2368_6602=0x17fb, Enum_ov023_021f2368_22376=0x5958, Enum_ov023_021f2368_6574=0x17de, Enum_ov023_021f2368_6575=0x17df, Enum_ov023_021f2368_3756=0xe28};
#else
 enum {Enum_ov023_021f2368_22788=0x5904, Enum_ov023_021f2368_6578=0x19b2, Enum_ov023_021f2368_2456=0x998, Enum_ov023_021f2368_22272=0x5700, Enum_ov023_021f2368_156=0x9c, Enum_ov023_021f2368_6602=0x19ca, Enum_ov023_021f2368_22376=0x5768, Enum_ov023_021f2368_6574=0x19ae, Enum_ov023_021f2368_6575=0x19af, Enum_ov023_021f2368_3756=0xeac};
#endif
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov023_021f2368_2* var1 = _ZZ21inline_ov023_021f4c04vE1s;
    int var2 = func_020421a0();
    unsigned char* var3 = (unsigned char*)var2;
    (int)BackgroundLoader::GetInstance();
    int var4 = var1->unknown_18_;
    int var5 = func_02086ef0((struct Struct_02048150*)func_02010828(var0), var4);

    if (var1->unknown_0_ == 0) {
        struct Struct_0209a9dc_3* var6 = func_0209a9dc((struct Struct_0209a9dc_2*)((char*)var1 + 0xf0),
            var1->unknown_1c_[var4].unknown_0_[var1->unknown_70_]);
        if (var6 != NULL) {
            short var7 = *(short*)((char*)var6 + 2);
            Struct_02108e10* var8 = func_020797dc();
            void* var9 = func_02079e2c((char*)var8, var7);
            if (var9 != NULL) {
#if defined(jpn)
                GameObject* var10;
                if ((var10 = func_0200ff1c(var0, var4)) != 0 && var5 != 0) {
#else
                if (func_0200ff1c(var0, var4) != 0 && var5 != 0) {
#endif

#if defined(jpn)
                    char* var11 = *(char**)((char*)var10 + 0x134);
                    char var12[0x100];
                    char* var13 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021f2368_23284), 0xc);
                    sprintf(var12, var13, var11, *(char**)var9);
                    char* var14 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021f2368_23284), 0x22);
                    strcat(var12, var14);
                    func_0204500c(var3, var12, 1);

#else
                    char var15[0xc];
                    char var16[0x80];
                    char* var17 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021f2368_22788), 0xc);
                    sprintf(var16, var17);
                    char* var18 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021f2368_22788), 0x22);
                    strcat(var16, var18);
                    func_020e4bf4(var15, var4);
                    *(void**)(var3 + 0x10) = var15;
                    char* var19 = *(char**)var9;
                    func_02046574((struct Struct_02046574_2*)var3, 1, var19);
                    func_0204500c(var3, var16, 1, 0xe3);

#endif
                    var3[Enum_ov023_021f2368_6578] = 0;
                    *(int*)(var3 + Enum_ov023_021f2368_2456) = 1;
                }
            }
        }
        var1->unknown_70_ = var1->unknown_70_ + 1;
        if (var1->unknown_6c_[var4] <= var1->unknown_70_) {
            void* var20 = func_02010828(var0);
            GameObject* var21 = func_0200ff1c(var0, var4);
            unsigned char* var22 = (unsigned char*)func_02053c6c((unsigned char*)var21);
            struct Struct_ov023_021f2368_3* var23 = (struct Struct_ov023_021f2368_3*)(arg0 + var4 * 0x54 + Enum_ov023_021f2368_22272 + Enum_ov023_021f2368_156);
            if (var23->unknown_0_7_ != 0) {
                var1->unknown_e5_ = 0xc;
            } else if (func_02086ef0((struct Struct_02048150*)var20, var4) &&
                       func_ov023_021f5228(var4) != 0 &&
                       *(unsigned short*)(var22 + 0x564) != 0) {
                var1->unknown_e5_ = 8;
                void* var24 = func_0205ec34();
                if (func_0206dfb0((int)var24, (unsigned char*)var24 + 0x8c, 0x119c)) {
                    var3[Enum_ov023_021f2368_6602] = 0;
                }
            } else {
                var1->unknown_e5_ = 7;
                int var25 = 0;
                int var26;
                for (var26 = var1->unknown_18_ + 1; var26 < 4; var26++) {
                    if (var1->unknown_12_[var26] != 0) {
                        var25 = 1;
                        break;
                    }
                }
                int var27 = func_ov023_021f4438(arg0);
                if (var25 == 0 && var27 == 0 && *(int*)(arg0 + Enum_ov023_021f2368_22376) == 0) {
                    var3[Enum_ov023_021f2368_6574] = 0;
                    var3[Enum_ov023_021f2368_6602] = 0;
                    var3[Enum_ov023_021f2368_6575] = 0;
                }
            }
        } else {
            var1->unknown_e5_ = -1;
        }
        var1->unknown_0_ = var1->unknown_0_ + 1;
    } else if (var1->unknown_0_ == 1) {
        if (func_ov023_021f4fc8() != 0) {
            signed char var28 = var1->unknown_e5_;
            if (var28 >= 0) {
                func_ov023_021eefac((struct Struct_ov023_021eeaac_2*)var1);
                func_ov017_021ccea4(var4, (unsigned char*)&var1->unknown_1c_[var4], var1->unknown_6c_[var4]);
                return var28;
            } else {
                var1->unknown_0_ = 0;
            }
        }
    }
    return *(int*)(arg0 + Enum_ov023_021f2368_3756);
}
