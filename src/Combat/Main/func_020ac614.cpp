#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: func_020ac614
extern "C" ARM void func_020ac614(struct Struct_020ac4f8* arg0, int arg1) {
    arg0->unknown_0_ += arg1;
    if (arg0->unknown_0_ > 0x270f) {
        arg0->unknown_0_ = 0x270f;
        arg0->unknown_2_ = 0x3b;
        arg0->unknown_3_ = 0x3b;
    }
}
