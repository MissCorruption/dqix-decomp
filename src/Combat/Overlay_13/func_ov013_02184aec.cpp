#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02155480 func_ov006_02156b68
#define data_ov011_021889a0 data_ov011_02189700
#define data_ov013_02187dd8 data_ov013_02188cf0
#define func_ov006_02154fe4 func_ov006_02156730
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_020421a0();
extern "C" void func_0204359c(void*, int);
extern "C" void func_020439b0(void*, int);
struct Struct_0205d2bc;
extern "C" void func_0205d2bc(Struct_0205d2bc*);
extern "C" void func_0205cb60(void*);

// USA: func_ov013_02184aec
extern "C" ARM void func_ov013_02184aec(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char var1 = var0[R(0x5c8,0x63c)];
    switch (var1) {
        case 0: case 5: case 6: return;
    }

    void* var2 = GameState::GetInstance();
    void* var3 = func_020421a0();
    int var4 = ((GameState*)var2)->GetTickCount();
    func_0204359c(var3, var4);
    func_020439b0(var3, 0);
    func_0205d2bc((Struct_0205d2bc*)(var0 + R(0x34,0x38)));
    func_0205cb60(var0 + R(0x3d0,0x3d4));
}
