#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02011494
extern "C" ARM unsigned char func_02011494(char* arg0, void* arg1) {
#if defined(jpn)
    unsigned char var0 = *(unsigned char*)(arg0 + 0x54bc);
#else
    unsigned char var1 = *(unsigned char*)(arg0 + 0x571c);
#endif
#if defined(jpn)
    memcpy(arg1, arg0 + 0x54b8, var0);
#else
    memcpy(arg1, arg0 + 0x5718, var1);
#endif
#if defined(jpn)
    return *(unsigned char*)(arg0 + 0x54bc);
#else
    return *(unsigned char*)(arg0 + 0x571c);
#endif
}
