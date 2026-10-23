#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02074b64;
extern "C" void func_02074b64(struct Struct_02074b64* arg0);

struct Struct_0205cfd4;
extern "C" void func_0205cfd4(struct Struct_0205cfd4* arg0);

// USA: func_ov023_021d8a40
extern "C" ARM void func_ov023_021d8a40(void* arg0) {
    *(unsigned char*)((char*)arg0 + 0x18) = 0;
    *(unsigned char*)((char*)arg0 + 0x19) = 0;
    func_02074b64((struct Struct_02074b64*)((char*)arg0 + 8));
    unsigned int* var0 = (unsigned int*)0x4001000;
    *(int*)((char*)arg0 + 0x1c) = (*var0 & 0x1f00) >> 8;
    *(int*)arg0 = 0;
    *(int*)((char*)arg0 + 4) = 0;
    func_0205cfd4((struct Struct_0205cfd4*)((char*)arg0 + 0x20));
    for (int var1 = 0; var1 < 4; var1++) {
        *(int*)((char*)arg0 + 0xdc + var1 * 4) = 0;
    }
    *(int*)((char*)arg0 + 0xec) = -1;
    memset((char*)arg0 + 0xf0, 0, 0x14);
    memset((char*)arg0 + 0x104, 0, 0x14);
    *(unsigned char*)((char*)arg0 + 0x118) = 0;
    *(unsigned char*)((char*)arg0 + 0x119) = 0;
    *(unsigned char*)((char*)arg0 + 0x11a) = 0;
    *(unsigned char*)((char*)arg0 + 0x11b) = 0;
    *(unsigned char*)((char*)arg0 + 0x11c) = 0;
    *(unsigned char*)((char*)arg0 + 0x11d) = 0;
    *(int*)((char*)arg0 + 0x120) = 0;
    *(unsigned char*)((char*)arg0 + 0x11e) = 0;
}
