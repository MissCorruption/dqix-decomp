#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_02061c04_21 {
    unsigned char unknown_0_[RG(0xc68, 0xb2c)];
    unsigned char unknown_c68_[5];
};

extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" void func_ov002_02154c30(void* arg0);

// USA: func_ov002_02154f4c
extern "C" ARM int func_ov002_02154f4c(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[8];
    unsigned char var2 = func_020114ec((char*)var0, var1);
    unsigned char var3 = 0;
    unsigned char var4;

    var1[var2] = 4;
    for (var4 = 0; var4 < var2; var4++) {
        if (var0->GetPartyMemberByIndex(var1[var4]) != NULL) {
            ((Struct_02061c04_21*)(arg0 + var3 + 0x1000))->unknown_c68_[0] = var1[var4];
            var3 = var3 + 1;
        }
    }
    ((Struct_02061c04_21*)(arg0 + var3 + 0x1000))->unknown_c68_[0] = 4;
    arg0[0x1000 + RG(0xc6d, 0xb31)] = var3;

    int var5;
    for (var5 = 0; var5 < 4; var5++) {
        memset(arg0 + RG(0xa70 + 0x1000, 0x19c8) + var5 * 16, 0, 4);
    }
    func_ov002_02154c30(arg0 + RG(0xa70 + 0x1000, 0x19c8));
    return 0;
}
