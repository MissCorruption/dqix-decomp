#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov017_021b5a30(unsigned char* arg0);
extern "C" void func_ov017_021b6090(unsigned char* arg0);
extern "C" void func_02094ab0(int arg0);
extern "C" int func_02094a00(void);
extern "C" int func_020421a0(void);
extern "C" int func_ov017_0218d75c(void* arg0);
extern "C" void func_020397c0(void* arg0);

// USA: func_ov017_021b5fc0
extern "C" ARM int func_ov017_021b5fc0(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021b5fc0_728=0x228};
#else
 enum {Enum_ov017_021b5fc0_728=0x2d8};
#endif
    GameState* var0 = GameState::GetInstance();
    int var1 = var0->GetTickCount();
    GetGameResources();

    if (arg0[0x54] != 0) {
        void* var2 = GetGameResources();
        if (func_ov017_0218d75c(var2) != 0) {
            return 5;
        }
        arg0[0x16] = 0;
        func_02094ab0(func_02094a00());
        func_ov017_021b5a30(arg0);
        arg0[0x1] = 1;
        char* var3 = (char*)func_020421a0();
        *(int*)(var3 + Enum_ov017_021b5fc0_728) = 0;
        return 6;
    }

    func_ov017_021b6090(arg0);
    char* var4 = (char*)func_020421a0();
    unsigned char var5 = arg0[0x16];
    if (var1 < var5) {
        arg0[0x16] = var5 - var1;
        goto returnFive021b5fc0;
    }
    arg0[0x16] = 0;
    func_02094ab0(func_02094a00());
    func_020397c0(*(void**)(arg0 + 0x1c));
    func_ov017_021b5a30(arg0);
    arg0[0x1] = 1;
    *(int*)(var4 + Enum_ov017_021b5fc0_728) = 0;
    return 6;
returnFive021b5fc0:
    return 5;
}
