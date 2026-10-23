#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02010774(char* obj, int v);
extern "C" void func_020107a8(char* obj, int v);
extern "C" void func_020107dc(char* base, int val);

// USA: func_0206df14
extern "C" ARM void func_0206df14(unsigned char* obj) {
    GameState* bs = GameState::GetInstance();
    func_02010774((char*)bs, (obj + obj[0x332] * 0x1c)[0]);
    func_020107a8((char*)bs, (obj + obj[0x332] * 0x1c)[1]);
    func_020107dc((char*)bs, (obj + obj[0x332] * 0x1c)[2]);
}
