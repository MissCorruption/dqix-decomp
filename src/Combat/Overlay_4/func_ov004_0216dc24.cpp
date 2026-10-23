#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0200fb94(char* arg0, unsigned char arg1);
extern "C" void func_02012010(void* arg0, int arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_0216dc24
extern "C" ARM int func_ov004_0216dc24(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0200fb94((char*)var0, 6);
    func_02012010(var0, 2);
    func_ov011_021848a0(arg0, 0x3e7);
    return 0;
}
