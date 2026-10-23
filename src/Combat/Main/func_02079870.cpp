#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02079870
extern "C" ARM void func_02079870(char* arg0) {
    memset(arg0, 0, 0xc);
    memset(arg0 + 0xc, 0, 0xc);
    memset(arg0 + 0x18, 0, 0xc);
    memset(arg0 + 0x24, 0, 0xc);
}
