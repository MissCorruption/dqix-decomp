#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0206e0d0
extern "C" ARM void func_0206e0d0(char* arg0, int arg1) {
    char* var0 = arg0 + arg1 * 0x1c;
    memset(var0 + 0x10, 0, 4);
    memset(var0 + 0x14, 0, 8);
}
