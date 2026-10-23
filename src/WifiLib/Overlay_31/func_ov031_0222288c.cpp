#include <globaldefs.h>
#include "std_library_functions.h"

extern int data_ov031_0224f670;

typedef void* (*Type_ov031_0222288c)(int);

// USA: func_ov031_0222288c
extern "C" THUMB void* func_ov031_0222288c(int arg0, int arg1) {
    int var0 = arg0 * arg1;
    Type_ov031_0222288c var1 = *(Type_ov031_0222288c*)((char*)&data_ov031_0224f670 + 4);
    void* var2 = var1(var0);
    if (var2) {
        memset(var2, 0, var0);
    }
    return var2;
}
