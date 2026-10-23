#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02067ad8
extern "C" ARM int func_02067ad8(int arg0, void* arg1) {
    unsigned short var0;
    memcpy(&var0, arg1, 2);
    if (var0 >= 0xff01 && var0 <= 0xff18) return 1;
    return (var0 & 0xffe0) == 0xffe0;
}
