#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_ov017_02195760(int arg0);
extern "C" void func_020e3778(unsigned char* arg0);
extern "C" void func_ov017_021ced48(int arg0, unsigned char arg1);
struct Struct_0202b2f0;
extern "C" int func_0202c578(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_020e35a0
extern "C" ARM void func_020e35a0(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    int* var2 = func_0202ae18();
    if (!func_0202b7d8(var2)) return;

    if (func_0202c508(var2)) {
        int var3;
        if (func_ov017_02195760(var1)) {
            for (var3 = 0; var3 < 4; var3++) {
                if (arg0[0] & (1 << var3)) {
                    if (var3 == 0) {
                        func_020e3778(arg0);
                    } else {
                        func_ov017_021ced48(1, (unsigned char)var3);
                    }
                }
            }
            arg0[1] |= arg0[0];
            arg0[0] = 0;
        }
        for (var3 = 1; var3 < 4; var3++) {
            if (!var0->GetGameObjectByIndex(var3) || func_0202c578((struct Struct_0202b2f0*)var2, var3)) {
                arg0[0] &= ~(1 << var3);
                arg0[1] &= ~(1 << var3);
            }
        }
    } else {
        if (func_0202c578((struct Struct_0202b2f0*)var2, 0)) {
            arg0[2] = 1;
        }
    }
}
