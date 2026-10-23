#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0208660c_2;
extern "C" void func_020a0948(struct Struct_0208660c_2* arg0);

struct Struct_0208660c;
extern "C" void func_020a093c(struct Struct_0208660c* arg0, int arg1, int arg2, short arg3);

extern "C" void func_0207c258(void* arg0);
extern "C" void func_02086404(void* arg0);

// USA: func_0208660c
extern "C" ARM void func_0208660c(char* arg0) {
    memset(arg0 + 0xc, -1, 0x130);
    memset(arg0 + 0x13c, 0, 0x98);
    func_020a0948((struct Struct_0208660c_2*)(arg0 + 0));
    func_020a093c((struct Struct_0208660c*)(arg0 + 0), (int)(arg0 + 0xc), (int)(arg0 + 0x13c), 0x98);

    func_0207c258(arg0 + 0x1d4);

    memset(arg0 + 0xe10, -1, 0xbc);
    memset(arg0 + 0x2cc + 0xc00, 0, 0x5e);
    func_020a0948((struct Struct_0208660c_2*)(arg0 + 0x204 + 0xc00));
    func_020a093c((struct Struct_0208660c*)(arg0 + 0x204 + 0xc00), (int)(arg0 + 0xe10), (int)(arg0 + 0x2cc + 0xc00), 0x5e);

    *(int*)(arg0 + 0xf68) = 0;
    *(int*)(arg0 + 0xf6c) = 0;
    *(int*)(arg0 + 0xf70) = 0;
    *(int*)(arg0 + 0xf74) = 0;
    *(unsigned char*)(arg0 + 0xf7c) = 0;

    for (int var0 = 0; var0 < 0xd; var0++) {
        func_02086404(arg0 + 0xf80 + var0 * 0x23c);
    }

    *(unsigned char*)(arg0 + 0x2000 + 0xc8c) = 0;

    for (int var1 = 0; var1 < 3; var1++) {
        memset(arg0 + 0xf2c + var1 * 0x14, 0, 0x14);
        *(signed char*)(arg0 + 0xf3c + var1 * 0x14) = -1;
    }

    for (unsigned char var2 = 0; var2 < 7; var2++) {
        *(signed char*)(arg0 + 0x2000 + 0xc8d + var2) = -1;
    }

    *(unsigned char*)(arg0 + 0x2000 + 0xc8d) = 3;
    *(int*)(arg0 + 0x2000 + 0xc94) = 0x452;
    *(unsigned char*)(arg0 + 0xf7d) = 0;
}
