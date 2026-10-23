#include <globaldefs.h>

// USA: func_020d8550
extern "C" ARM signed char func_020d8550(int arg0) {
    int var0 = (arg0 & 0xff) >= 'A' && (arg0 & 0xff) <= 'Z';
    if (var0) {
        arg0 += 0x20;
    }
    return arg0;
}
