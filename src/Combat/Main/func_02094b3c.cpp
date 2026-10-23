#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

// USA: func_02094b3c
extern "C" ARM void func_02094b3c(FontBankLoader* loader, int event) {
#if defined(jpn)
    switch (event) {
    case 8:
        func_02094b38(loader, loader->supplementalBank);
        break;
    case 10:
        func_02094b38(loader, loader->primaryBank);
        break;
    case 12:
        func_02094b38(loader, loader->supplementalBank);
        break;
    }
#endif
}
