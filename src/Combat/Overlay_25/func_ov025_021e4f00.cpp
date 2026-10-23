#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

struct S0204a5d4;
extern "C" int func_0202e09c(int obj);
extern "C" int func_ov000_021820bc(void* obj, int unused, int index, int arg);
extern "C" void func_0204a5d4(struct S0204a5d4* p, int v);
extern "C" void func_ov000_0216d530(void* obj, int val);

struct Param021e4f00 {
    char pad[8];
    unsigned char targetIndex;
};

// USA: func_ov025_021e4f00
extern "C" ARM int func_ov025_021e4f00(struct Param021e4f00* p, int b, int unused, void* d) {
    int targetIds[8];
    int cameraIds[8];
    void* obj = func_020100bc(GameState::GetInstance());
    if (obj != 0) {
        if (func_0202e09c((int)obj) & 0x10) {
            if (func_ov000_021820bc(d, b, p->targetIndex, (int)targetIds) != 1) {
                func_0204a5d4((struct S0204a5d4*)obj, -1);
                return 1;
            }
            func_0204a5d4((struct S0204a5d4*)obj, targetIds[0]);
        } else if (func_0202e09c((int)obj) & 8) {
            if (func_ov000_021820bc(d, b, p->targetIndex, (int)cameraIds) != 1) {
                func_ov000_0216d530(obj, -1);
                return 1;
            }
            func_ov000_0216d530(obj, cameraIds[0]);
        }
    }
    return 1;
}
