#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02067a9c
extern "C" ARM bool func_02067a9c(void* arg0, void* arg1) {
    unsigned short var0;
    memcpy(&var0, arg1, 2);
    if (var0 >= 0xff01u && var0 <= 0xff0du) return 1;
    return 0;
}
