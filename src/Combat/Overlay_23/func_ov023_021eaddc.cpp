#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021eaddc
extern "C" ARM int func_ov023_021eaddc(void* arg0) {
    Struct_02061c04 var0;
    func_020ac4c0(&var0);
    func_ov017_021d6134(arg0, var0.unknown_90_.unknown_16_6_);
    return 1;
}
