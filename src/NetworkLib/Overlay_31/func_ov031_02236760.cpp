#include <globaldefs.h>

// USA: func_ov031_02236760
extern "C" ARM int func_ov031_02236760(unsigned int arg0) {
    if (arg0 <= '9') return arg0 - '0';
    if (arg0 <= 'F') return arg0 - '7';
    return arg0 - 'W';
}
