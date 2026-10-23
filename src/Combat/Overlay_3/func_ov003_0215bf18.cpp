#include <globaldefs.h>

#include "GameState/GameState.h"

extern int data_02108760;

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);

struct Struct_020e263c_2;
extern "C" void func_020e263c(struct Struct_020e263c_2* arg0, int arg1);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

struct Struct_020e29a8;
extern "C" void func_020e29a8(struct Struct_020e29a8* arg0, int arg1);

struct Struct_020e280c;
extern "C" void func_020e280c(struct Struct_020e280c* arg0, void* arg1);

extern "C" int func_020e2918(signed char* arg0);

extern "C" int func_020e2984(struct Struct_020e28dc* arg0);

struct Struct_020e25e8;
extern "C" void func_020e25e8(struct Struct_020e25e8* arg0);

// USA: func_ov003_0215bf18
extern "C" ARM int func_ov003_0215bf18(void* arg0, int arg1) {
    char* var0 = (char*)arg0;
    if (*(void**)(var0 + 0x570) != 0 && func_020e28dc((struct Struct_020e28dc*)*(void**)(var0 + 0x570)) != 0) {
        GameState* var1 = GameState::GetInstance();
        int var2 = var1->GetTickCount();
        func_020e263c((struct Struct_020e263c_2*)*(void**)(var0 + 0x570), var2);
    }
    unsigned char var3 = *(unsigned char*)(var0 + 0x581);
    if (var3 == 0) {
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 5, 0);
        func_020e29a8((struct Struct_020e29a8*)*(void**)(var0 + 0x570), (signed char)arg1);
        func_020e280c((struct Struct_020e280c*)*(void**)(var0 + 0x570), (void*)-1);
        *(unsigned char*)(var0 + 0x581) = *(unsigned char*)(var0 + 0x581) + 1;
    }
    if (var3 == 1) {
        *(unsigned char*)(var0 + 0x59f) |= 1;
        int var4 = func_020e2918((signed char*)*(void**)(var0 + 0x570));
        if (var4 >= 0) {
            *(unsigned char*)(var0 + 0x581) = 0;
            *(unsigned char*)(var0 + 0x59f) &= ~1;
            func_020e25e8((struct Struct_020e25e8*)*(void**)(var0 + 0x570));
            return var4;
        }
        if (func_020e2984(*(struct Struct_020e28dc**)(var0 + 0x570))) {
            *(unsigned char*)(var0 + 0x581) = 0;
            *(unsigned char*)(var0 + 0x59f) &= ~1;
            func_020e25e8((struct Struct_020e25e8*)*(void**)(var0 + 0x570));
            return -2;
        }
    }
    return -1;
}
