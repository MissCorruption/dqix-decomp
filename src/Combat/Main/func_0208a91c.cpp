#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_ov000_02154a04(int arg0, int arg1, int arg2, int arg3);

struct Struct_0208a91c {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 5;
    unsigned int unknown_10_5_ : 3;
    unsigned int unknown_11_0_ : 24;
};

struct Struct_020f10b0 {
    int unknown_0_;
    int unknown_4_;
};
extern struct Struct_020f10b0 data_020f10b0[];

typedef int (*Type_0208a91c)(void*, int, int*, int);

// USA: func_0208a91c
extern "C" ARM int func_0208a91c(int* arg0, int arg1, int arg2, int* arg3, int arg4) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200fea4(var0, arg2);
    struct Struct_0208a91c* var2 = *(struct Struct_0208a91c**)((char*)var1 + 0x148);
    *arg0 = arg1;
    int var3 = var2->unknown_10_5_;
    if (var3 >= 8) {
        *arg3 = func_ov000_02154a04(*arg0, arg2, 2, arg4);
        return 2;
    } else {
        struct Struct_020f10b0* var4 = &data_020f10b0[var3];
        int var5 = var4->unknown_4_;
        void* var6 = (char*)arg0 + (var5 >> 1);
        Type_0208a91c var7;
        if (var5 & 1) {
            void* var8 = *(void**)var6;
            var7 = *(Type_0208a91c*)((char*)var8 + var4->unknown_0_);
        } else {
            var7 = (Type_0208a91c)var4->unknown_0_;
        }
        return var7(var6, arg2, arg3, arg4);
    }
}
