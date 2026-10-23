#if defined(jpn)
enum { Enum_ov017_021c40ec_14132 = 0x3524, Enum_ov017_021c40ec_384 = 0x17c };
#else
enum { Enum_ov017_021c40ec_14132 = 0x3734, Enum_ov017_021c40ec_384 = 0x180 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void func_02052d7c(void* arg0, int arg1, short arg2);
extern "C" void func_ov017_0218f5a4(void* arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_ov017_021c40ec {
    char unknown_0_[4];
    unsigned char unknown_4_0_ : 4;
    unsigned char unknown_4_4_ : 1;
    signed char unknown_5_[5];
    short unknown_a_[5];
};

// USA: func_ov017_021c40ec
extern "C" ARM void func_ov017_021c40ec(void* arg0, struct Struct_ov017_021c40ec* arg1, GameState* arg2, void* arg3) {
    int var0 = arg1->unknown_4_0_;
    char* var1 = (char*)func_02010828(arg2);
    if (var1 != NULL) {
        int var2;
        for (var2 = 0; var2 < *(unsigned char*)(var1 + 0xf7c); var2++) {
            if (*(unsigned char*)(var1 + var2 + 0xf78) == var0) return;
        }
    }

    GameObject* var3 = func_0200ff1c(arg2, var0);
    if (var3 == NULL) return;

    char* var4 = *(char**)((char*)arg3 + Enum_ov017_021c40ec_14132);

    int var5;
    for (var5 = 0; var5 < 5; var5++) {
        int var6 = arg1->unknown_5_[var5];
        int var7 = arg1->unknown_a_[var5];
        if (var6 >= 0 && var6 < 0xa) {
            func_02052d7c(var3, var6, var7);
        }
        if (*(unsigned char*)(var4 + 3) != 0) {
            if (var0 == 0 && var6 == 6) {
                signed char var8 = *(signed char*)(var4 + Enum_ov017_021c40ec_384);
                if (var8 < 0) {
                    *(unsigned char*)(var4 + Enum_ov017_021c40ec_384) = 6;
                }
            }
        }
    }

    if (arg1->unknown_4_4_) {
        func_ov017_0218f5a4(arg3, var0, 0, 0, 0);
    }
}
