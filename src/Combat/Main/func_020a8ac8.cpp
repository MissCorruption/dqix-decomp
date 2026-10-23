#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void* func_020d6c00(void);

// USA: func_020a8ac8
extern "C" ARM void func_020a8ac8(unsigned char* arg0, int arg1) {
    *(unsigned char*)(arg0 + 4) |= (1 << arg1);
    func_020466e4((unsigned int*)func_020d6c00(), 0x402);
    ((Object3D*)((unsigned char*)GameState::GetInstance()->GetPartyMemberByIndex(arg1)))->EnableFlag(0x8000100);
}
