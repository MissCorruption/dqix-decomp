#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void __clear(char* arg0, int arg1);
extern "C" int func_020426bc(int arg0, char* arg1, int arg2);
extern "C" void func_02010890(GameState* arg0, int* arg1, int* arg2);

#if defined(jpn)
typedef const char* Type_0202c360;
#else
typedef int Type_0202c360;
#endif
// USA: func_0202c360
extern "C" ARM void func_0202c360(void* arg0, Type_0202c360 arg1) {
    char var0[0x14];
    int var1[4];
    int var2;
    GameState* var3 = GameState::GetInstance();
    unsigned char* var4 = (unsigned char*)arg0 + 0x1028;
#if defined(jpn)
    strcpy((char*)arg0 + 0x1014, arg1);
    *var4 = strlen(arg1);
#else
    __clear(var0, 0x14);
    func_020426bc(arg1, var0, 1);
    *var4 = strlen(var0);
    memcpy((char*)arg0 + 0x1014, var0, *var4 + 1);
#endif
    func_02010890(var3, var1, &var2);
    *((unsigned char*)arg0 + 0x1027) = (unsigned char)var2;
}
