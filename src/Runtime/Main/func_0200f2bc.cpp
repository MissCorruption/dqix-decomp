#include <globaldefs.h>

extern "C" void* func_0200d9e4(void* arg0, int* arg1);

// USA: func_0200f2bc
extern "C" ARM void* func_0200f2bc(void* arg0) {
    unsigned char var0;
    int var1;
    var0 = *(unsigned char*)arg0;
    arg0 = (char*)arg0 + 2;
    arg0 = func_0200d9e4(arg0, &var1);
    if (!(var0 & 0x40)) {
        return arg0;
    }
    arg0 = func_0200d9e4(arg0, &var1);
    return arg0;
}
