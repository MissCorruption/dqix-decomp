#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);
struct Struct_ov004_021549e4_2;
extern "C" unsigned int func_ov023_021f9bb0(struct Struct_ov004_021549e4_2* arg0);
extern "C" int func_ov004_021634dc(void* arg0);
extern "C" void func_02011a24(char* arg0, void* arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" void func_ov017_0218d77c(GameResources* arg0, int arg1);

extern char* data_ov004_02171010;

// USA: func_ov004_02165a1c
extern "C" ARM int func_ov004_02165a1c(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_02165a1c_452 = 0x1e4 };
#else
    enum { Enum_ov004_02165a1c_452 = 0x1c4 };
#endif
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xa);
    if (var0 == NULL) return 0;
    if (func_ov023_021f6f10(var0) != 7) return 0;

    unsigned int var1 = func_ov023_021f9bb0((struct Struct_ov004_021549e4_2*)var0);
    int var2 = func_ov004_021634dc(arg0);
    GameState* var3 = GameState::GetInstance();
    char* var4 = data_ov004_02171010;
    unsigned char var5 = *(unsigned char*)((int)(var4 + 0xad5) + var1 * Enum_ov004_02165a1c_452);
    if (var5 == 1) {
        func_02011a24((char*)var3, var4 + var2 * 0x1c);
    } else if (var5 == 2) {
        func_02011a24((char*)var3, var4 + var2 * 0x1c);
    }
    func_ov011_021848a0(arg0, 0x73);
    func_ov017_0218d77c(GetGameResources(), 2);
    return 0;
}
