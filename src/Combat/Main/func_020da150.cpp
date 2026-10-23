#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

// USA: func_020da150
// Duplicates a string into memory obtained from a SafeAllocator.
extern "C" ARM char* func_020da150(SafeAllocator* arg0, const char* arg1) {
    unsigned int var0;
    unsigned int var1;
    char* var2;
    if (arg1 == NULL) return NULL;
    var0 = strlen(arg1);
    var1 = var0 + 1;
    var2 = (char*)arg0->Allocate(var1);
    if (var2 == NULL) return NULL;
    strncpy(var2, arg1, var0);
    (var2 + var1)[-1] = 0;
    return var2;
}
