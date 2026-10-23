#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov024_021f5c80
#define func_ov023_021e4e8c func_ov023_021e5080
#define data_ov023_021ff5b4 data_ov023_021fe83c
#define func_ov023_021fc518 func_ov023_021fb810
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned char func_0200fb9c(char* arg0);
extern "C" unsigned char func_02012034(void* arg0);
extern "C" int _s32_div_f(int a, int b);
extern "C" int func_ov017_021d4df8(void* arg0, int arg1);
extern "C" void func_ov017_021d4ce4(void* arg0, int arg1);
extern "C" void func_ov017_021d4ccc(void* arg0);

// USA: func_ov011_021848a8
extern "C" ARM void func_ov011_021848a8(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (func_0200fb9c((char*)var0) == 6) {
        if (func_02012034(var0) == 1) {
            unsigned int var1 = *(unsigned int*)((char*)arg0 + 0x1d0) + var0->GetTickCount();
            *(unsigned int*)((char*)arg0 + 0x1d0) = var1;
            if (var1 > 0xe10) {
                *(unsigned int*)((char*)arg0 + 0x1d0) = 0;
                *(int*)((char*)arg0 + 0x10c) = 999;
                unsigned char* var2 = (unsigned char*)var0 + R(0x7c9d, 0x7f71);
                unsigned char var3 = *var2 + 1;
                *var2 = var3 % 3;
            }
        } else {
            *(unsigned int*)((char*)arg0 + 0x1d0) = 0;
        }
    }

    if (*(int*)((char*)arg0 + 0x10c) >= 0) {
        if (func_ov017_021d4df8((char*)arg0 + 0xb8, *(int*)((char*)arg0 + 0x10c)) == 0) {
            *(int*)((char*)arg0 + 0x10c) = -1;
            return;
        }
        *(int*)((char*)arg0 + 0x110) = *(int*)((char*)arg0 + 0x10c);
        *(int*)((char*)arg0 + 0x10c) = -1;
        func_ov017_021d4ce4((char*)arg0 + 0xb8, *(int*)((char*)arg0 + 0x110));
        if (*(int*)((char*)arg0 + 0xf4) != 0) {
            *(int*)((char*)arg0 + 0x110) = -1;
        }
        return;
    }

    if (*(int*)((char*)arg0 + 0x110) < 0) {
        return;
    }
    func_ov017_021d4ccc((char*)arg0 + 0xb8);
    if (*(int*)((char*)arg0 + 0xf4) != 0) {
        *(int*)((char*)arg0 + 0x110) = -1;
    }
}
