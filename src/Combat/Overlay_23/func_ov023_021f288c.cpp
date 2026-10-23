#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void func_02046380(void);
extern "C" int func_020421a0(void);
extern "C" void* func_0205ec34(void);
#if !defined(jpn)
extern "C" void func_0204500c(void* arg0, char* arg1, int arg2, int arg3);
#endif
extern "C" int func_ov023_021f4438(void* arg0);
extern "C" int func_ov023_021f4fc8(void);
extern "C" int func_ov023_021f5228(int arg0);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

struct Struct_02048150;
extern "C" int func_02086ef0(struct Struct_02048150* arg0, int arg1);

struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

struct Struct_020465c0;
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);

struct Struct_ov023_021eeaac_2;
extern "C" void func_ov023_021eefac(struct Struct_ov023_021eeaac_2* arg0);

struct Struct_ov023_021f288c_2 {
    int unknown_0_;
    char unknown_4_[0x12 - 4];
    unsigned char unknown_12_[4];
    char unknown_16_[0x18 - 0x16];
    int unknown_18_;
};
extern "C" struct Struct_ov023_021f288c_2* _ZZ21inline_ov023_021f4c04vE1s;

struct Struct_ov023_021f288c { unsigned short unknown_0_0_ : 7; unsigned short unknown_0_7_ : 9; };

#if defined(jpn)
extern "C" void func_0204500c(void*,char*,int);
#endif
// USA: func_ov023_021f288c
extern "C" ARM int func_ov023_021f288c(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021f288c_22788=0x5af4, Enum_ov023_021f288c_6578=0x17e2, Enum_ov023_021f288c_2456=0x868, Enum_ov023_021f288c_6602=0x17fb, Enum_ov023_021f288c_6574=0x17de, Enum_ov023_021f288c_6575=0x17df, Enum_ov023_021f288c_22376=0x5958, Enum_ov023_021f288c_3756=0xe28};
#else
 enum {Enum_ov023_021f288c_22788=0x5904, Enum_ov023_021f288c_6578=0x19b2, Enum_ov023_021f288c_2456=0x998, Enum_ov023_021f288c_6602=0x19ca, Enum_ov023_021f288c_6574=0x19ae, Enum_ov023_021f288c_6575=0x19af, Enum_ov023_021f288c_22376=0x5768, Enum_ov023_021f288c_3756=0xeac};
#endif
    char var0[0x100];
    GameState* var1 = GameState::GetInstance();
    struct Struct_ov023_021f288c_2* var2 = _ZZ21inline_ov023_021f4c04vE1s;
    int var3 = var2->unknown_18_;
    int var4 = func_020421a0();
    unsigned char* var5 = (unsigned char*)var4;
#if defined(jpn)

#else
    func_02046380();
#endif

    int var6;
    if (var2->unknown_0_ == 0) {
        char* var7 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021f288c_22788), 0xd);
#if defined(jpn)
        sprintf(var0, var7, ((struct Struct_ov023_021f288c*)(arg0 + var3 * 0x54 + 0x5900 + 0x8c))->unknown_0_7_);
#else
        sprintf(var0, var7);
#endif

        char* var8 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021f288c_22788), 0x22);
        strcat(var0, var8);
#if defined(jpn)

#else
        struct Struct_ov023_021f288c* var9 = (struct Struct_ov023_021f288c*)(arg0 + var3 * 0x54 + 0x5700 + 0x9c);
        int var10 = var9->unknown_0_7_;
        func_020465c0((struct Struct_020465c0*)var5, 0, var10);
#endif

#if defined(jpn)
        func_0204500c(var5, var0, 1);
#else
        func_0204500c(var5, var0, 1, 0xe3);
#endif

        var5[Enum_ov023_021f288c_6578] = 0;
        *(int*)(var5 + Enum_ov023_021f288c_2456) = 1;
        var2->unknown_0_ = var2->unknown_0_ + 1;
    } else if (var2->unknown_0_ == 1) {
        void* var11 = func_02010828(var1);
        var6 = 0;
        if (func_02086ef0((struct Struct_02048150*)var11, var3)) {
            if (func_ov023_021f5228(var3)) {
                var6 = 1;
                void* var12 = func_0205ec34();
                if (func_0206dfb0((int)var12, (unsigned char*)var12 + 0x8c, 0x119c)) {
                    var5[Enum_ov023_021f288c_6602] = 0;
                }
            }
        }
        int var13 = 0;
        int var14;
        for (var14 = var2->unknown_18_ + 1; var14 < 4; var14++) {
            if (var2->unknown_12_[var14] != 0) {
                var13 = 1;
                break;
            }
        }
        int var15 = func_ov023_021f4438(arg0);
        if (var13 == 0 && var15 == 0 && *(int*)(arg0 + Enum_ov023_021f288c_22376) == 0) {
            var5[Enum_ov023_021f288c_6574] = 0;
            var5[Enum_ov023_021f288c_6602] = 0;
            var5[Enum_ov023_021f288c_6575] = 0;
        }
        if (func_ov023_021f4fc8()) {
            func_ov023_021eefac((struct Struct_ov023_021eeaac_2*)var2);
            return var6 ? 8 : 7;
        }
    }
    return *(int*)(arg0 + Enum_ov023_021f288c_3756);
}
