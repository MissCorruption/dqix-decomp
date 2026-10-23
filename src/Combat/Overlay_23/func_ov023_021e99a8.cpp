#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int func_020ac4c0(void* arg0);
extern "C" int func_020a0870(Struct_02061c04* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e99a8
extern "C" ARM int func_ov023_021e99a8(void* arg0) {
    Struct_02061c04 var0;
    func_020ac4c0(&var0);
    int var1 = func_020a0870(&var0);
    func_ov017_021d6134(arg0, var1);
    return 1;
}
