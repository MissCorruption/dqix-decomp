#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020696bc(int arg0, int* arg1, int arg2);
extern "C" char* func_020421a0();

struct Struct_020697b8 { void* unknown_0_; };

// USA: func_020697b8
extern "C" ARM int func_020697b8(Struct_020697b8* arg0, int arg1) {
    int var0;
    unsigned short var1;
    void* var2;
    func_020696bc(arg1, &var0, 1);
    func_020421a0()[0x195e] = var0;
    var2 = arg0->unknown_0_;
    var1 = 0xff0b;
    memcpy(var2, &var1, 2);
    return 2;
}
