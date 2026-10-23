#include <globaldefs.h>
#include "GameState/GameState.h"

struct Container0205a3d0;
struct Elem0205a3d0;
extern "C" void func_0205a42c(struct Container0205a3d0*, int, int);
extern "C" void func_0205a370(struct Container0205a3d0*, int);
extern "C" struct Elem0205a3d0* func_0205a3d0(struct Container0205a3d0*, int);

struct Container0205a330;
extern "C" void func_0205a330(struct Container0205a330*, int);


extern "C" void func_0205ae8c(void*);

// USA: func_ov023_021e3304
extern "C" ARM void func_ov023_021e3304(void* obj, int b, int c) {
    GameState* battleStruct = GameState::GetInstance();
    func_0205a42c(*(struct Container0205a3d0**)((char*)obj + 0xd0), 0, 0);
    func_0205a370(*(struct Container0205a3d0**)((char*)obj + 0xd0), 0);
    struct Elem0205a3d0* entry = func_0205a3d0(*(struct Container0205a3d0**)((char*)obj + 0xd0), 0);
    if (entry != NULL) {
        *(unsigned char*)((char*)entry + 0x15) |= 8;
    }
    int scaleCount = (int)battleStruct->GetTickCount();
    func_0205a330((struct Container0205a330*)(*(struct Container0205a3d0**)((char*)obj + 0xd0)), scaleCount);
    entry = func_0205a3d0(*(struct Container0205a3d0**)((char*)obj + 0xd0), 0);
    if (entry != NULL) {
        *(short*)((char*)entry + 0x4) = (short)b;
        *(short*)((char*)entry + 0x6) = (short)c;
    }
    func_0205ae8c(*(void**)((char*)obj + 0xc8));
}
