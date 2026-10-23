#include <globaldefs.h>

struct Struct_0204254c;
extern "C" Struct_0204254c* func_0204254c(int arg0, int arg1);

// USA: func_02067f9c
extern "C" ARM int func_02067f9c(int* arg0, int arg1, int arg2) {
    if (arg0 != 0) {
        int var0 = *(int*)((char*)arg0 + 8);
        unsigned int var1 = ((unsigned int)var0 << 3) >> 31;
        if (var1 != 0) {
            return 1;
        }
    }
    if (arg1 == 0) {
        return 0;
    }
    Struct_0204254c* var2 = func_0204254c(arg1, arg2);
    if (var2 != 0) {
        signed char var3 = *((signed char*)var2 + 5);
        return (var3 << 25) >> 31;
    }
    return 0;
}
