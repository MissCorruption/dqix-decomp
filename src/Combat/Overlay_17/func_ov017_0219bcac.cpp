#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0200fd0c(GameState* battleStruct);
extern "C" unsigned short* func_02012fe4(void* fieldPtr);
extern "C" void func_02070378(char* obj);
struct Vector3i;

// USA: func_ov017_0219bcac
extern "C" ARM void func_ov017_0219bcac(unsigned char flag) {
    GameState* battleStruct = GameState::GetInstance();
    char* obj = (char*)func_0200fd0c(battleStruct);
    unsigned short* val = func_02012fe4(obj);
    char* combatant = (char*)battleStruct->GetProtagonist();
    func_02070378(obj);
    *(short*)(obj + 0x0) = *val;
    *(Vector3i*)((int*)(obj + 0x10)) = *(Vector3i const*)((int*)(combatant + 0x44));
    *(short*)(obj + 0x1c) = *(int*)(combatant + 0x54);
    *(unsigned char*)(obj + 0x7) = 1;
    *(unsigned char*)(obj + 0x2) = 1;
    *(unsigned char*)(obj + 0x9) = 0;
    *(unsigned char*)(obj + 0xa) = 1;
    *(unsigned char*)(obj + 0x65) = flag;
}
