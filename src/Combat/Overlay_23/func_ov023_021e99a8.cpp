#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int func_020ac4c0(void* dst);
extern "C" int func_020a0870(BattleRecordSnapshot* p);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e99a8
extern "C" ARM int func_ov023_021e99a8(void* obj) {
    BattleRecordSnapshot record;
    func_020ac4c0(&record);
    int pct = func_020a0870(&record);
    func_ov017_021d6134(obj, pct);
    return 1;
}
