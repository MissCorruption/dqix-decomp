#include <globaldefs.h>

// USA: func_02010768
extern "C" ARM void* func_02010768(void* arg0) {
#if defined(jpn)
    return (char*)arg0 + 0x5a44;
#else
    return (char*)arg0 + 0x5ca4;
#endif
}
