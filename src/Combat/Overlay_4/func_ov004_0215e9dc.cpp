#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned short func_ov004_0215eb20(void* arg0, int arg1);

extern int data_ov004_02170854[];
extern unsigned char data_ov004_02170838[];
extern unsigned char data_ov004_021707e8;
#if defined(jpn)

extern "C" GameObject* func_0200ff1c(GameState*, int);
#else
#endif

// USA: func_ov004_0215e9dc
extern "C" ARM int func_ov004_0215e9dc(void* arg0, void* arg1, int arg2, int arg3) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), (int)arg1);
    int var1 = arg2;

    if (data_ov004_02170854[var1] == 0) {
        goto done;
    }

    if (arg3) {
        var1 = (unsigned char)(var1 + 1);
        var1 = (unsigned char)(var1 % 0xd);
        if (var1 == 0) var1 = 1;
    } else {
        var1 = (unsigned char)(var1 - 1);
        if ((unsigned)var1 < 1) var1 = 0xc;
    }

    goto loop_test;
loop_body:
    if (arg3) {
        var1 = (unsigned char)(var1 + 1);
        var1 = (unsigned char)(var1 % 0xd);
        if (*((unsigned char*)&data_ov004_021707e8 + 2) && var1 == 0) var1 = (unsigned char)(var1 + 1);
        if (!func_ov004_0215eb20(var0, data_ov004_02170854[var1]) || !data_ov004_02170838[var1]) goto loop_test;
        goto done;
    } else {
        var1 = (unsigned char)(var1 - 1);
        if ((unsigned)var1 < 1) var1 = 0xc;
        if (*((unsigned char*)&data_ov004_021707e8 + 2) && var1 == 0) var1 = 0xc;
        if (!func_ov004_0215eb20(var0, data_ov004_02170854[var1]) || !data_ov004_02170838[var1]) goto loop_test;
        goto done;
    }
loop_test:
    if (!func_ov004_0215eb20(var0, data_ov004_02170854[var1]) || !data_ov004_02170838[var1]) goto loop_body;
done:
    return var1;
}
