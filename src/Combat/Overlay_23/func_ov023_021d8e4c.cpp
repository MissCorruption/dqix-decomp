#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205d67c;
extern "C" int func_0205d67c(struct Struct_0205d67c*);

// USA: func_ov023_021d8e4c
extern "C" ARM void func_ov023_021d8e4c(void* arg0, void* arg1, void* arg2, void* arg3) {
    *(void**)((char*)arg0 + 0xec) = arg1;
    memcpy((char*)arg0 + 0xf0, arg2, 0x14);
    memcpy((char*)arg0 + 0x104, arg3, 0x14);
    int var0 = func_0205d67c((struct Struct_0205d67c*)((char*)arg0 + 0x20));
    if (var0 == 0) {
        *((unsigned char*)arg0 + 0x11c) = 0;
    } else {
        *((unsigned char*)arg0 + 0x11c) = 1;
    }
    *((unsigned char*)arg0 + 0x11a) = 2;
}
