#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void* func_020108f0(void* arg0, int arg1);
extern "C" void* func_02010954(char* arg0);
extern "C" void func_02053c4c(char* arg0, char* arg1);
extern "C" void func_020c9be0(void);

// USA: func_02053c74
extern "C" ARM void func_02053c74(char* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)func_020108f0(var0, arg1);
    if (!var1) {
        var1 = (char*)func_02010954((char*)var0);
        if (var1) {
            *(short*)(var1 + 0x568) = arg1;
        } else {
            func_020c9be0();
        }
    }
    func_02053c4c(arg0, var1);
}
