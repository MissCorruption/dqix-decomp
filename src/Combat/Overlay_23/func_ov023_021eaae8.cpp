#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" int func_ov017_021d60f4(void* arg0);

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021eaae8
extern "C" ARM int func_ov023_021eaae8(void* arg0) {
    struct Struct_02053f7c* var0 = (struct Struct_02053f7c*)func_02010828(GameState::GetInstance());
    short var1 = (short)func_ov017_021d60f4(arg0);
    int var2 = func_02086aec(var0, var1);
    func_ov017_021d6134((char*)arg0 + 8, var2);
    return 1;
}
