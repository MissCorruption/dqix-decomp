#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0203be8c
extern "C" ARM void func_0203be8c(char* arg0) {
#if defined(jpn)
    *(short*)arg0 = -1;
    *(short*)(arg0 + 2) = -1;
    memset(arg0 + 4, 0, 10);
    arg0[0xe] = 0;
#else
    memset(arg0, 0, 0x20);
    arg0[0x20] = 0;
    arg0[0x21] = 0;
    *(short*)(arg0 + 0x22) = -1;
    arg0[0x24] = 0;
#endif
}
