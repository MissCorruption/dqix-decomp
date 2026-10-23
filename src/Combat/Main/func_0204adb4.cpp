#include <globaldefs.h>
#include "std_library_functions.h"

typedef void (*Type_02020cb8)(void*, int, int);

// USA: func_0204adb4
extern "C" ARM void func_0204adb4(unsigned char* arg0, Type_02020cb8 arg1, unsigned char* arg2) {
    memcpy(arg0 + 0x8, arg2 + 0xc, 4);
    arg1(arg2 + 0x10, 0, *(int*)(arg0 + 0x8));
}
