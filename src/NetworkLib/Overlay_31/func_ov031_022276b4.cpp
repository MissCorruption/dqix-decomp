#include <globaldefs.h>

#include "Resource/UiArrayEntry.h"

// USA: func_ov031_022276b4
extern "C" ARM int func_ov031_022276b4(struct Struct_ov031_022276b4* arg0, unsigned int arg1) {
    unsigned short var0 = (unsigned short)arg1;
    return arg0->unknown_4_ + arg0->unknown_0_[var0];
}
