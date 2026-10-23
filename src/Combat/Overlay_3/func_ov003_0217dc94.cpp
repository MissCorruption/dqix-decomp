#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

struct Struct_ov003_0217ce3c { char unknown_0_[0x6]; signed char unknown_6_; char unknown_7_; unsigned short unknown_8_; };

// USA: func_ov003_0217dc94
extern "C" ARM void func_ov003_0217dc94(Struct_ov003_0217ce3c* arg0) {
    if ((arg0->unknown_8_ & 1) == 0) return;
    if (arg0->unknown_6_ == 0) {
        Struct_0208cb08* var0 = func_02094a00();
        func_02094b34(var0, 0x1f5, 0x66, 0, 0);
        arg0->unknown_6_ = 1;
    } else if (arg0->unknown_6_ == 1) {
        if (func_02094b4c(func_02094a00()) != 0) {
            arg0->unknown_8_ = arg0->unknown_8_ & ~1;
            arg0->unknown_6_ = -1;
        }
    }
}
