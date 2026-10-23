#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" void* memset(void*, int, unsigned int);
#endif

// USA: func_02094b40
extern "C" ARM void func_02094b40(Struct_0208cb08* arg0) {
#if defined(jpn)
    arg0->unknown_3c_ = -1;
    arg0->unknown_c_ = 0;
    arg0->unknown_63_ = 0;
    arg0->unknown_40_ = -1;
    arg0->unknown_10_ = 0;
    arg0->unknown_64_ = 0;
    memset(arg0->unknown_44_, 0, sizeof(arg0->unknown_44_));
#endif
}
