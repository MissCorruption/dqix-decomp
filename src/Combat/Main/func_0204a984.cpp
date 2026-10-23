#include <globaldefs.h>
#include "std_library_functions.h"

typedef void (*Type_0204a984)(void*, int, int);

// USA: func_0204a984
extern "C" ARM void func_0204a984(int* arg0, Type_0204a984 arg1, char* arg2) {
    int var0;
    if (arg2 == NULL) return;
    memcpy(&var0, arg2 + 0xc, 4);
    arg1((void*)(arg2 + 0x10), *arg0, var0);
}
