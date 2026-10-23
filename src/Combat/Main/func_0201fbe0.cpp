#include <globaldefs.h>

#include "Combat/ActionState.h"

// USA: func_0201fbe0
extern "C" ARM void func_0201fbe0(struct Struct_020fdc60 *arg0, int arg1) {
    if (arg0->unknown_2_ != 0 && arg1 == 0) return;
    if (arg0->unknown_4_ != 0 && arg1 == 0) return;
    if (arg0->unknown_0_ == 2 || arg0->unknown_0_ == 3 || arg1 != 0 || arg0->unknown_1_ == 3) {
        arg0->unknown_1_ = 4;
    }
    arg0->unknown_4_ = 0;
}
