#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"

// USA: func_02053fe4
extern "C" ARM void func_02053fe4(GameObject* arg0, int arg1, int arg2) {
    func_02048150(arg0, arg1, arg2);
    Struct_020236dc_2* var0 = (Struct_020236dc_2*)arg0;
    var0->unknown_18c_ &= ~1U;
}
