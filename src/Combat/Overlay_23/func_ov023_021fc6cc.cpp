#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202df68;
extern "C" void func_ov023_021e4f18(void*);
extern "C" int func_020100f8(char*);
extern "C" void func_020a2794(void*);
extern "C" void func_0202e9a4(struct Struct_0202df68*, int);

// USA: func_ov023_021fc6cc
extern "C" ARM void func_ov023_021fc6cc(void* arg0) {
    for (int var0 = 0; var0 < 2; var0++) {
        func_ov023_021e4f18((char*)arg0 + 0x20 + var0 * 0xc20);
    }
    void* var1 = (void*)func_020100f8((char*)GameState::GetInstance());
    func_020a2794(var1);
    func_0202e9a4((struct Struct_0202df68*)var1, *(int*)((char*)arg0 + 0x1000 + 0x860));
}
