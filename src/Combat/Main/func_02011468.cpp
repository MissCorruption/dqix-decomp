#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02011468
// Copies 'size' bytes from 'src' into the buffer at +0x5718 and stores the size byte at +0x571c.
extern "C" ARM void func_02011468(void* arg0, int arg1, void* arg2) {
#if defined(jpn)
    memcpy((char*)arg0 + 0x54b8, arg2, arg1);
#else
    memcpy((char*)arg0 + 0x5718, arg2, arg1);
#endif
#if defined(jpn)
    *((char*)arg0 + 0x54bc) = (char)arg1;
#else
    *((char*)arg0 + 0x571c) = (char)arg1;
#endif
}
