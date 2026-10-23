#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020114ec
extern "C" ARM unsigned char func_020114ec(char* arg0, void* arg1) {
#if defined(jpn)
    unsigned char var0 = *(unsigned char*)(arg0 + 0x54c1);
#else
    unsigned char var1 = *(unsigned char*)(arg0 + 0x5721);
#endif
#if defined(jpn)
    memcpy(arg1, arg0 + 0x54bd, var0);
#else
    memcpy(arg1, arg0 + 0x571d, var1);
#endif
#if defined(jpn)
    return *(unsigned char*)(arg0 + 0x54c1);
#else
    return *(unsigned char*)(arg0 + 0x5721);
#endif
}
