#include <globaldefs.h>
#include "Graphics/GlyphMetrics.h"

// USA: func_02028d68
extern "C" ARM void func_02028d68(int arg0) {
    data_020ef74c.unknown_c_ = arg0;
    if (arg0 == 0) {
        data_020ef74c.unknown_4_ = 8;
        data_020ef74c.unknown_8_ = 8;
        return;
    }
    if ((unsigned int)(arg0 - 1) <= 1) {
        data_020ef74c.unknown_8_ = 6;
        data_020ef74c.unknown_4_ = 0xc;
        return;
    }
    if ((unsigned int)(arg0 - 3) <= 1) {
        data_020ef74c.unknown_8_ = 5;
        data_020ef74c.unknown_4_ = 0xa;
        return;
    }
    if ((unsigned int)(arg0 - 5) <= 1) {
        data_020ef74c.unknown_8_ = 6;
        data_020ef74c.unknown_4_ = 0xc;
    }
}
