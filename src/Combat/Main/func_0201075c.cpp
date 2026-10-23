#include <globaldefs.h>

// USA: func_0201075c
extern "C" ARM void func_0201075c(char* obj, unsigned char value) {
#if defined(jpn)
    *(unsigned char*)(obj + 0x54c9) = value;
#else
    *(unsigned char*)(obj + 0x5729) = value;
#endif
}
