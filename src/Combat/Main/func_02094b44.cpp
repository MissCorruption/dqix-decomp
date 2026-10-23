#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

// USA: func_02094b44
extern "C" ARM void* func_02094b44(Struct_0208cb08* arg0, int arg1) {
    void* var0 = 0;
#if defined(jpn)
    switch (arg1) {
    case 8:
        if (arg0->unknown_40_ >= 0) var0 = arg0->unknown_4_;
        break;
    case 10:
        if (arg0->unknown_3c_ >= 0) var0 = arg0->unknown_0_;
        break;
    case 12:
        if (arg0->unknown_40_ >= 0) var0 = arg0->unknown_4_;
        break;
    }
#endif
    return var0;
}
