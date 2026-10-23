#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov025_021ed324
extern "C" ARM void func_ov025_021ed324(void* arg0, const char* arg1) {
    if (arg1 == 0) {
        *((char*)arg0 + 0x16c) = 0;
        return;
    }
    strcpy((char*)arg0 + 0x16c, arg1);
}
