#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"

#if defined(jpn)
// USA: func_020416c0
extern "C" ARM void func_02041bbc(Struct_0204166c* arg0) {
    arg0->unknown_0_ = NULL;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = -1;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_14_ = 0;
    arg0->unknown_18_[1] = 0;
    arg0->unknown_18_[0] = 0;
    arg0->unknown_1a_ = 12;
    arg0->unknown_16_0_ = 0;
    arg0->unknown_16_1_ = 0;
    arg0->unknown_16_2_ = 0;
}
#else
// USA: func_020416c0
extern "C" ARM void func_020416c0(Struct_0204166c* arg0) {
    func_0204166c(arg0);
}
#endif
