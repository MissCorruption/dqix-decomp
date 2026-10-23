#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100cc(char* arg0);
struct Struct_0204a120_2;
extern "C" void func_020a2cf0(struct Struct_0204a120_2* arg0);
struct Struct_020a3568;
extern "C" void func_020a3568(struct Struct_020a3568* arg0, int arg1);
extern "C" void func_0202e7d4(unsigned char* arg0, int* arg1, int* arg2, int* arg3);
extern "C" void func_0202e5d8(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov015_02192544
extern "C" ARM void func_ov015_02192544(void) {
    GameState* var0 = GameState::GetInstance();
    if (var0 == 0) {
        return;
    }
    int var1 = func_020100cc((char*)var0);
    if (var1 == 0) {
        return;
    }
    func_020a2cf0((struct Struct_0204a120_2*)var1);
    func_020a3568((struct Struct_020a3568*)var1, 2);
    int var2, var3, var4;
    func_0202e7d4((unsigned char*)var1, &var2, &var3, &var4);
    func_0202e5d8((void*)var1, var2, 0x13d7, var4);
}
