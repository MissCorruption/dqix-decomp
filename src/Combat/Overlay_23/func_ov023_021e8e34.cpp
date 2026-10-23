#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

extern "C" int func_02053c6c(unsigned char* arg0);

extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov023_021e8e34
extern "C" ARM void func_ov023_021e8e34(void* arg0) {
    if (*(int*)((char*)arg0 + 0x5f4) == 0) return;
    char* var0 = *(char**)((char*)arg0 + 0x5d8);
    GameState* var1 = GameState::GetInstance();
    void* var2 = func_0202ae18();
    int var3 = 0;
    if (!func_0202b7d8((int*)var2)) {
        GameObject* var4 = func_0200ff1c(var1, 0);
        if (var4) var3 = func_02053c6c((unsigned char*)var4);
    } else {
        int var5 = func_0202c1a4((struct Struct_0202c1a4*)var2);
        GameObject* var6 = func_0200ff1c(var1, var5);
        if (var6) var3 = func_02053c6c((unsigned char*)var6);
    }
    if (var3 == 0) return;
    char* var7 = (char*)var3 + 0x3c;
    int var8 = strlen(var7);
    int var9 = var8 * 5 + 6;
    int var10 = (var9 / 8 + 1) * 8 - var8 * 5;
    var10 = var10 / 2;
    func_02041a28(var0, var10);
    func_02042058(var0, var7);
}
