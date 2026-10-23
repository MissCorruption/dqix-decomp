#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" void* func_020d6c00(void);

// USA: func_020a8ac8
extern "C" ARM void func_020a8ac8(unsigned char* obj, int bit) {
    *(unsigned char*)(obj + 4) |= (1 << bit);
    func_020466e4((unsigned int*)func_020d6c00(), 0x402);
    ((Object3D*)((unsigned char*)GameState::GetInstance()->GetPartyMemberByIndex(bit)))->EnableFlag(0x8000100);
}
