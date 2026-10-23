#include <globaldefs.h>

#include "Resource/UiArrayEntry.h"

// USA: func_ov031_022276cc
extern "C" ARM int func_ov031_022276cc(void *arg0, int arg1, int arg2, int arg3) {
    Struct_ov031_022276b4 *var0 = static_cast<Struct_ov031_022276b4 *>(arg0);
    int var1                  = var0->unknown_4_ + var0->unknown_0_[static_cast<unsigned short>(arg1)];

    if (arg2 >= 0) {
        reinterpret_cast<unsigned short *>(var1)[arg2] = static_cast<unsigned short>(static_cast<unsigned int>(arg3) + 0x30);
    }
    return var1;
}
