#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" void* memset(void*, int, unsigned int);
#endif

// USA: func_02094b38
extern "C" ARM void func_02094b38(Struct_0208cb08* arg0, int arg1) {
#if defined(jpn)
    if (arg1 < 0) return;
    if (arg0->unknown_3c_ == arg1) {
        arg0->unknown_3c_ = -1;
        arg0->unknown_c_ = 0;
        arg0->unknown_63_ = 0;
        return;
    }
    if (arg0->unknown_40_ == arg1) {
        arg0->unknown_40_ = -1;
        arg0->unknown_10_ = 0;
        if (arg1 == 1000) memset(arg0->unknown_44_, 0, sizeof(arg0->unknown_44_));
        if (arg1 == 5000) memset(arg0->unknown_59_, 0, sizeof(arg0->unknown_59_));
        arg0->unknown_64_ = 0;
    }
#endif
}
