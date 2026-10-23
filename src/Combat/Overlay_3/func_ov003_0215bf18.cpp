#include <globaldefs.h>

#include "GameState/GameState.h"

extern int data_02108760;

struct Outer020e28dc;
extern "C" int func_020e28dc(struct Outer020e28dc* o);

struct Ctx020e263c;
extern "C" void func_020e263c(struct Ctx020e263c* obj, int value);

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

struct Clamp020e29a8;
extern "C" void func_020e29a8(struct Clamp020e29a8* p, int v);

struct Obj020e280c;
extern "C" void func_020e280c(struct Obj020e280c* self, void* b);

extern "C" int func_020e2918(signed char* param);

extern "C" int func_020e2984(struct Outer020e28dc* window);

struct Obj020e25e8;
extern "C" void func_020e25e8(struct Obj020e25e8* obj);

// USA: func_ov003_0215bf18
extern "C" ARM int func_ov003_0215bf18(void* p, int arg1) {
    char* obj = (char*)p;
    if (*(void**)(obj + 0x570) != 0 && func_020e28dc((struct Outer020e28dc*)*(void**)(obj + 0x570)) != 0) {
        GameState* bs = GameState::GetInstance();
        int count = bs->GetTickCount();
        func_020e263c((struct Ctx020e263c*)*(void**)(obj + 0x570), count);
    }
    unsigned char state = *(unsigned char*)(obj + 0x581);
    if (state == 0) {
        func_0205eaa0((struct Obj0205eaa0*)&data_02108760, 5, 0);
        func_020e29a8((struct Clamp020e29a8*)*(void**)(obj + 0x570), (signed char)arg1);
        func_020e280c((struct Obj020e280c*)*(void**)(obj + 0x570), (void*)-1);
        *(unsigned char*)(obj + 0x581) = *(unsigned char*)(obj + 0x581) + 1;
    }
    if (state == 1) {
        *(unsigned char*)(obj + 0x59f) |= 1;
        int result = func_020e2918((signed char*)*(void**)(obj + 0x570));
        if (result >= 0) {
            *(unsigned char*)(obj + 0x581) = 0;
            *(unsigned char*)(obj + 0x59f) &= ~1;
            func_020e25e8((struct Obj020e25e8*)*(void**)(obj + 0x570));
            return result;
        }
        if (func_020e2984(*(struct Outer020e28dc**)(obj + 0x570))) {
            *(unsigned char*)(obj + 0x581) = 0;
            *(unsigned char*)(obj + 0x59f) &= ~1;
            func_020e25e8((struct Obj020e25e8*)*(void**)(obj + 0x570));
            return -2;
        }
    }
    return -1;
}
