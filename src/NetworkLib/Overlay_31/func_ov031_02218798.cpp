#include <globaldefs.h>

// USA: func_ov031_02218798
extern "C" ARM int func_ov031_02218798(int arg0) {
    if (arg0 & 0x8000) {
        arg0 &= ~0x8000;
    }
    return arg0;
}
