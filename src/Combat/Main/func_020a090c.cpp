#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: func_020a090c
extern "C" ARM int func_020a090c(Struct_02061c04* arg0) {
    unsigned int var0 = arg0->unknown_12_7_;
    unsigned int var1 = var0 * 100 / 448;
    if (var1 != 0) {
        return var1;
    }
    if (var0 != 0) {
        return 1;
    }
    return var1;
}
