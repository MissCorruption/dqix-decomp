#include <globaldefs.h>
#include "GameState/GameState.h"



extern "C" int func_020421a0(void);
extern "C" void func_0204359c(void* arg0, int arg1);
extern "C" void func_020439b0(void* arg0, int arg1);
struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);

// USA: func_ov003_02170280
extern "C" ARM void func_ov003_02170280(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    GameState* var1;
    void* var2;
    unsigned int var3;
    if (*(int*)(var0 + 0x3c) == 0) {
        return;
    }
    if (*(signed char*)(var0 + 1) <= 1) {
        return;
    }
    var1 = GameState::GetInstance();
    var2 = (void*)func_020421a0();
    var3 = var1->GetTickCount();
    func_0204359c(var2, var3);
    func_020439b0(var2, 0);
    if (*(int*)(var0 + 0x3c) == 0) {
        return;
    }
    func_0205d2bc((struct Struct_0205d2bc*)*(int*)(var0 + 0x3c));
}
