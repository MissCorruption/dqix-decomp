#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02095518
extern "C" ARM void func_02095518(char* arg0) {
    *(int*)(arg0 + 0xa0) = 0;
    *(int*)(arg0 + 0xa4) = 0;
    *(int*)(arg0 + 0xa8) = 0;
    *(int*)(arg0 + 0x4c4) = -1;
    memset(arg0, 0, 0xa0);
    memset(arg0 + 0xac, 0xff, 0xcc);
    memset(arg0 + 0x178, 0, 0x330);
    memset(arg0 + 0x4a8, 0, 0x1a);
}
