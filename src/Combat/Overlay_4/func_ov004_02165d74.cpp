#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Memory.h"
#include "GameState/GameState.h"

extern "C" int func_020421a0();
extern "C" void func_02046380(void*);
extern "C" void* func_02011aa0(char* arg0, unsigned int arg1);
struct Struct_02046574_2;
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
extern "C" void func_020464e8(char* arg0, int arg1, char* arg2);

// USA: func_ov004_02165d74
extern "C" ARM int func_ov004_02165d74(void* arg0) {
    int var0 = func_020421a0();
    func_02046380((void*)var0);
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetUnknownGameObject();
    char var3[0x40];
    VectorizedMemset(var3, 0, 0x40);
    strcpy(var3, (char*)func_02011aa0((char*)var1, 0));
    if (var2 != NULL) {
        func_02046574((struct Struct_02046574_2*)var0, 0, *(char**)((char*)var2 + 0x134));
    }
    func_020464e8((char*)var0, 0, var3);
    return 0;
}
