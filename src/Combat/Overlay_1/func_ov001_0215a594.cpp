#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_ov001_02159f94(void*);

// USA: func_ov001_0215a594
extern "C" ARM void func_ov001_0215a594(void* arg0, char* arg1, int arg2, int arg3) {
    void* var0 = func_ov001_02159f94(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 11;
        strcpy((char*)var0 + 0x1c, arg1);
        *(int*)((char*)var0 + 0x10) = arg2;
        *(int*)((char*)var0 + 0x14) = arg3;
        *(int*)((char*)var0 + 0x18) = 0;
    }
}
