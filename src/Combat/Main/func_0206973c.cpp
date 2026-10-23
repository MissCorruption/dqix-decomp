#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020696bc(int arg0, int* arg1, int arg2);
extern "C" char* func_020421a0();

struct Struct_0206973c { void* unknown_0_; };

// USA: func_0206973c
extern "C" ARM int func_0206973c(Struct_0206973c* arg0, int arg1) {
    int var0;
    unsigned short var1;
    void* var2;
    func_020696bc(arg1, &var0, 1);
    func_020421a0()[0x1960] = var0;
    var2 = arg0->unknown_0_;
    var1 = 0xff0c;
    memcpy(var2, &var1, 2);
    return 2;
}
