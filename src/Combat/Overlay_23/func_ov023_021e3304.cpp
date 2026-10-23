#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a42c(struct Struct_0205a254*, int, int);
extern "C" void func_0205a370(struct Struct_0205a254*, int);
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254*, int);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330*, int);


extern "C" void func_0205ae8c(void*);

// USA: func_ov023_021e3304
extern "C" ARM void func_ov023_021e3304(void* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    func_0205a42c(*(struct Struct_0205a254**)((char*)arg0 + 0xd0), 0, 0);
    func_0205a370(*(struct Struct_0205a254**)((char*)arg0 + 0xd0), 0);
    struct Struct_0205a254_2* var1 = func_0205a3d0(*(struct Struct_0205a254**)((char*)arg0 + 0xd0), 0);
    if (var1 != NULL) {
        *(unsigned char*)((char*)var1 + 0x15) |= 8;
    }
    int var2 = (int)var0->GetTickCount();
    func_0205a330((struct Struct_0205a330*)(*(struct Struct_0205a254**)((char*)arg0 + 0xd0)), var2);
    var1 = func_0205a3d0(*(struct Struct_0205a254**)((char*)arg0 + 0xd0), 0);
    if (var1 != NULL) {
        *(short*)((char*)var1 + 0x4) = (short)arg1;
        *(short*)((char*)var1 + 0x6) = (short)arg2;
    }
    func_0205ae8c(*(void**)((char*)arg0 + 0xc8));
}
