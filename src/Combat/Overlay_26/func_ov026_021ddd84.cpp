#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "GameState/GameState.h"

struct GameState;
struct Struct_ov000_02160da0;
struct Struct_ov000_02161e30;
struct Struct_ov000_0217e870_2;

extern "C" void* func_0202ae18(GameState* arg0);
extern "C" void* func_0207d78c();
extern "C" int func_ov017_02195658(GameResources* arg0);
extern "C" void func_ov026_021dbd1c(Struct_ov000_02160da0* arg0, int arg1, unsigned char arg2);

// USA: func_ov026_021ddd84
extern "C" ARM int func_ov026_021ddd84(GameResources* arg0, Struct_ov000_02160da0* arg1, Struct_ov000_02161e30* arg2, Struct_ov000_0217e870_2* arg3, void* arg4, unsigned char* arg5, unsigned char arg6) {
    func_0202ae18(GameState::GetInstance());
    func_0207d78c();
    int var0 = func_ov017_02195658(arg0);
    if (var0 <= -1) {
        return 0;
    }
    func_ov026_021dbd1c(arg1, var0, arg6);
    return 1;
}
