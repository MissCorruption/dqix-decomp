#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021eaca4
extern "C" ARM int func_ov023_021eaca4(void* arg0) {
    Struct_02061c04 var0;
    func_020ac4c0(&var0);
    func_ov017_021d6134(arg0, var0.unknown_90_.unknown_f_0_);
    return 1;
}
