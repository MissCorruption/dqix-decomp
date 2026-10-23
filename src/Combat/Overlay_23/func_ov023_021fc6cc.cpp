#include <globaldefs.h>
#include "GameState/GameState.h"

struct AngleTrig0202e9a4;
extern "C" void func_ov023_021e4f18(void*);
extern "C" int func_020100f8(char*);
extern "C" void func_020a2794(void*);
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4*, int);

// USA: func_ov023_021fc6cc
extern "C" ARM void func_ov023_021fc6cc(void* obj) {
    for (int i = 0; i < 2; i++) {
        func_ov023_021e4f18((char*)obj + 0x20 + i * 0xc20);
    }
    void* p = (void*)func_020100f8((char*)GameState::GetInstance());
    func_020a2794(p);
    func_0202e9a4((struct AngleTrig0202e9a4*)p, *(int*)((char*)obj + 0x1000 + 0x860));
}
