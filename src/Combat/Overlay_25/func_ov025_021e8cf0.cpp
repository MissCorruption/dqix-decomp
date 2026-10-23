#include <globaldefs.h>

// USA: func_ov025_021e8cf0
extern "C" ARM void* func_ov025_021e8cf0(char* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 0x10) {
        return NULL;
    }
    return arg0 + 0x1dc + arg1 * 4;
}
