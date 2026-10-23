#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02011930;
extern "C" unsigned char func_02011930(void* arg0, struct Struct_02011930* arg1, void* arg2, void* arg3);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" unsigned char func_020119cc(void* arg0);

// USA: func_ov004_021658b0
extern "C" ARM int func_ov004_021658b0(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_021658b0_1134 = 0x1ee };
#else
    enum { Enum_ov004_021658b0_1134 = 0x46e };
#endif
    void* var0 = GameState::GetInstance();
    unsigned char var1 = func_02011930(var0, NULL, NULL, NULL);
    if (var1 != 0) {
        func_ov011_021848a0(arg0, 0x64);
        char* var2 = (char*)GameState::GetInstance();
        var2[0x6000 + Enum_ov004_021658b0_1134] = 1;
        func_020119cc(var0);
    } else {
        func_ov011_021848a0(arg0, 0x65);
    }
    return 0;
}
