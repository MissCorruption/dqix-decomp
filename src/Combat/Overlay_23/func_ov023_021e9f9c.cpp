#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021e9f9c
extern "C" ARM int func_ov023_021e9f9c(void* arg0) {
    Struct_02061c04 var0;
    func_020ac4c0(&var0);
    unsigned int var1 = var0.unknown_48_;
    if (var1 > 0x7fffffff) var1 = 0x7fffffff;
    func_ov017_021d6134(arg0, var1);
    return 1;
}
