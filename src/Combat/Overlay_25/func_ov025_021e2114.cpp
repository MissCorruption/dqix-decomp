#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);

// USA: func_ov025_021e2114
extern "C" ARM void func_ov025_021e2114(unsigned char* arg0, void* arg1, int arg2) {
    if (arg2 > 0xc) {
        func_020c9be0();
    }
    memcpy(arg0+8, arg1, arg2);
    arg0[0x14] = (unsigned char)arg2;
}
