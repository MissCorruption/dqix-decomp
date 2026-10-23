#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02010774(char* arg0, int arg1);
extern "C" void func_020107a8(char* arg0, int arg1);
extern "C" void func_020107dc(char* arg0, int arg1);

// USA: func_0206df14
extern "C" ARM void func_0206df14(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_02010774((char*)var0, (arg0 + arg0[0x332] * 0x1c)[0]);
    func_020107a8((char*)var0, (arg0 + arg0[0x332] * 0x1c)[1]);
    func_020107dc((char*)var0, (arg0 + arg0[0x332] * 0x1c)[2]);
}
