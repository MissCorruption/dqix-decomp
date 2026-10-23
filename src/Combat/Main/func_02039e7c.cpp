#include <globaldefs.h>

struct Struct_02039e7c;
extern "C" void func_02039ee8(struct Struct_02039e7c* arg0);
extern "C" void func_0204719c(void* arg0);

// USA: func_02039e7c
extern "C" ARM void func_02039e7c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1;
    for (var1 = 0; var1 < 0x10; var1++) {
        func_02039ee8((struct Struct_02039e7c*)(var0 + 0x550 + var1 * 0x18));
    }
    for (var1 = 0; var1 < 5; var1++) {
        func_0204719c(var0 + var1 * 0x88);
        func_0204719c(var0 + 0x2a8 + var1 * 0x88);
    }
    *(int*)(var0 + 0x6d0) = 0;
    *(int*)(var0 + 0x6d4) = 0;
}
