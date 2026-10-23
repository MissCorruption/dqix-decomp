#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
extern "C" void func_0206ef94(unsigned char* arg0);
#define func_0206de40 func_0206ef94
#else
extern "C" void func_0206de40(unsigned char* arg0);
#endif

// USA: func_0206ddb8
extern "C" ARM void func_0206ddb8(unsigned char* arg0) {
    arg0[0x332] = 0;
    memset(arg0 + 0x8c, 0, 0x234);
    memset(arg0 + 0x2c0, 0, 0xc);
    func_0206de40(arg0);
    memset(arg0 + 0x2cc, 0, 0x66);
    memset(arg0 + 0x334, 0, 0xce);
    *(int*)(arg0 + 0x404) = 0;
    *(int*)(arg0 + 0x408) = 0;
    memset(arg0 + 0x40c, 0, 0xf);
    memset(arg0 + 0x41b, 0, 0x40);
}
