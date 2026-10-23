#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* battleStruct);

struct Obj02086aec;
extern "C" short func_02086aec(struct Obj02086aec* obj, int key);
extern "C" void func_ov017_021d6134(void* obj, int v);

// USA: func_ov023_021eaa00
extern "C" ARM int func_ov023_021eaa00(void* obj) {
    struct Obj02086aec* p = (struct Obj02086aec*)func_02010828(GameState::GetInstance());
    int sum = 0;
    sum = sum + func_02086aec(p, 0x5619);
    sum = sum + func_02086aec(p, 0x561d);
    sum = sum + func_02086aec(p, 0x561e);
    sum = sum + func_02086aec(p, 0x561f);
    sum = sum + func_02086aec(p, 0x5620);
    sum = sum + func_02086aec(p, 0x5621);
    sum = sum + func_02086aec(p, 0x5622);
    sum = sum + func_02086aec(p, 0x5623);
    sum = sum + func_02086aec(p, 0x5624);
    sum = sum + func_02086aec(p, 0x5625);
    func_ov017_021d6134(obj, sum);
    return 1;
}
