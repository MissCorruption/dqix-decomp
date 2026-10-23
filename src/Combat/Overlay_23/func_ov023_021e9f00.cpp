#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021e9f00
extern "C" ARM int func_ov023_021e9f00(void* arg0) {
    Struct_02061c04 var0;
    func_020ac4c0(&var0);
    func_ov017_021d6134(arg0, var0.unknown_2a_6_);
    return 1;
}
