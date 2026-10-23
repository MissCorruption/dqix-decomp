#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

struct Struct_0204a5d4;
extern "C" int func_0202e09c(int arg0);
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0204a5d4(struct Struct_0204a5d4* arg0, int arg1);
extern "C" void func_ov000_0216d530(void* arg0, int arg1);

struct Struct_ov025_021e4f00 {
    char unknown_0_[8];
    unsigned char unknown_8_;
};

// USA: func_ov025_021e4f00
extern "C" ARM int func_ov025_021e4f00(struct Struct_ov025_021e4f00* arg0, int arg1, int arg2, void* arg3) {
    int var0[8];
    int var1[8];
    void* var2 = func_020100bc(GameState::GetInstance());
    if (var2 != 0) {
        if (func_0202e09c((int)var2) & 0x10) {
            if (func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)var0) != 1) {
                func_0204a5d4((struct Struct_0204a5d4*)var2, -1);
                return 1;
            }
            func_0204a5d4((struct Struct_0204a5d4*)var2, var0[0]);
        } else if (func_0202e09c((int)var2) & 8) {
            if (func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)var1) != 1) {
                func_ov000_0216d530(var2, -1);
                return 1;
            }
            func_ov000_0216d530(var2, var1[0]);
        }
    }
    return 1;
}
