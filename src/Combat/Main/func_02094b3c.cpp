#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

// USA: func_02094b3c
extern "C" ARM void func_02094b3c(Struct_0208cb08* arg0, int arg1) {
#if defined(jpn)
    switch (arg1) {
    case 8:
        func_02094b38(arg0, arg0->unknown_40_);
        break;
    case 10:
        func_02094b38(arg0, arg0->unknown_3c_);
        break;
    case 12:
        func_02094b38(arg0, arg0->unknown_40_);
        break;
    }
#endif
}
