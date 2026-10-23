#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0204c804
extern "C" ARM void func_0204c804(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(int*)(var0 + 0x9c) = 0;
    *(short*)(var0 + 0xac) = 0;
    *(short*)(var0 + 0xae) = 0;
    *(short*)(var0 + 0xa8) = 0;
    *(short*)(var0 + 0xaa) = 0;
    *(short*)(var0 + 0xb0) = 4;
    *(short*)(var0 + 0xb2) = 4;
    *(short*)(var0 + 0xb8) = 0;
    *(short*)(var0 + 0xba) = 0;
    *(short*)(var0 + 0xc0) = 0;
    var0[0xc5] &= ~0x8;
    var0[0xd8] &= ~0x1;
    var0[0xd8] &= ~0x2;
#if !defined(jpn)
    var0[0xd8] &= ~0x4;
#endif
    var0[0xc4] = 0xff;
    var0[0xc5] = 0;
    memset(var0 + 0xdb, 0, 4);
}
