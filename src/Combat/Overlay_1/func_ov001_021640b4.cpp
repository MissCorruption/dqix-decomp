#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100f8(char* arg0);
extern "C" float func_ov017_021d6110(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0202f0c4(void* arg0, int arg1, int arg2);

// USA: func_ov001_021640b4
extern "C" ARM int func_ov001_021640b4(void* arg0) {
    void* var0 = (void*)func_020100f8((char*)GameState::GetInstance());
    float var1 = func_ov017_021d6110(arg0);
    int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
    int var3 = (int)(4096.0f * var1);
    int var4 = (unsigned short)(var2 * 33);
    func_0202f0c4(var0, var3, var4);
    return 1;
}
