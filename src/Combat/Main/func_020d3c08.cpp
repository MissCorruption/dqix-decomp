#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020d3c08
extern "C" ARM void func_020d3c08(char* arg0) {
#if defined(jpn)
    memset(arg0, 0, 0xa0);
#else
    memset(arg0, 0, 0xb4);
#endif
#if defined(jpn)
    *(int*)(arg0 + 0xa0) = 0;
#else
    *(int*)(arg0 + 0xb4) = 0;
#endif
}
