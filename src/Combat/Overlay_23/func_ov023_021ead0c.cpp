#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ead0c
extern "C" ARM int func_ov023_021ead0c(void* outputReference) {
    BattleRecordSnapshot record;
    func_020ac4c0(&record);
    func_ov017_021d6134(outputReference, record.capture.unknown14_0);
    return 1;
}
