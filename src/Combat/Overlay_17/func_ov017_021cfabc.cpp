#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c540(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021cfabc
extern "C" ARM void func_ov017_021cfabc(void) {
    void* var0 = func_0202ae18();
    if (func_0202b7d8((int*)var0) != 0 && func_0202c540(var0) == 0) {
        GameState::GetInstance();
        void* var1 = func_0202ae24();
        unsigned char var2[0x14];
        var2[0] = 0xa1;
        func_0205e330(var1, var2, 0);
    }
}
