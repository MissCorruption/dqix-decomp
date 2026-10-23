#if defined(jpn)
enum { Enum_ov017_021c616c_1816 = 0x508 };
#else
enum { Enum_ov017_021c616c_1816 = 0x718 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void func_ov017_021b848c(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" GameObject* func_ov017_021a278c(void* arg0, int arg1);
extern "C" void func_02076ccc(void*, int);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
struct Struct_02053f7c_3;
extern "C" void func_02053f7c(struct Struct_02053f7c_3* arg0, unsigned short arg1, int arg2);
extern "C" void func_ov017_021c6034(signed char* arg0);

struct Struct_ov017_021c616c {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c616c_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    signed char unknown_4_[4];
    signed char unknown_8_;
    signed char unknown_9_;
    signed short unknown_a_;
};

// USA: func_ov017_021c616c
extern "C" ARM void func_ov017_021c616c(int arg0, unsigned char* arg1, GameState* arg2, unsigned char* arg3) {
    void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021c616c_1816);
    Struct_ov017_021c616c* var1 = (Struct_ov017_021c616c*)func_ov017_021b8478(var0);
    Struct_ov017_021c616c_2* var2 = (Struct_ov017_021c616c_2*)(arg1 + 4);
    if (var1 != NULL && var1->unknown_8_ == var2->unknown_0_) {
        func_ov017_021b848c(var0, var2->unknown_4_, var2->unknown_8_, 0, var2->unknown_2_, var2->unknown_9_, 1, var2->unknown_a_);
    } else {
        void* var3 = GetGameResources();
        GameObject* var4 = func_ov017_021a278c(var3, var2->unknown_0_);
        if (var4 != NULL) {
            func_02076ccc(var4, 9);
        }
    }
    for (unsigned int var5 = 0; var5 < 4; var5++) {
        if (var2->unknown_4_[var5] != 0) {
            GameObject* var6 = func_0200ff1c(arg2, var5);
            if (var6 != NULL) {
                func_02053f7c((struct Struct_02053f7c_3*)var6, var2->unknown_0_, 1);
            }
        }
    }
    func_ov017_021c6034(var2->unknown_4_);
}
