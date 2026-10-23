#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0209bd40
extern "C" ARM void func_0209bd40(char* arg0, int arg1) {
    int var0 = *(int*)(arg0 + 0xc0);
    if (var0 >= 6) return;
    memset(arg0 + var0 * 0x20, 0, 0x20);
    *(short*)(arg0 + var0 * 0x20) = arg1;
    *(int*)(arg0 + 0xc0) += 1;
}
