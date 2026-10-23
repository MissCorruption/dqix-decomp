#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020114c0
extern "C" ARM void func_020114c0(char* arg0, int arg1, void* arg2) {
#if defined(jpn)
    memcpy(arg0 + 0x54bd, arg2, arg1);
#else
    memcpy(arg0 + 0x571d, arg2, arg1);
#endif
#if defined(jpn)
    *(unsigned char*)(arg0 + 0x54c1) = (unsigned char)arg1;
#else
    *(unsigned char*)(arg0 + 0x5721) = (unsigned char)arg1;
#endif
}
