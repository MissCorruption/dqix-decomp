#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020696bc(int arg0, int* arg1, int arg2);
extern "C" int func_020421a0();

struct Struct_0204483c_2 {
    char unknown_0_[0x186c];
    int unknown_186c_[4];
    char unknown_187c_[0x131];
    signed char unknown_19ad_;
};
extern "C" void func_020457e8(struct Struct_0204483c_2* arg0, int arg1);

struct Struct_020698ac { void* unknown_0_; };

// USA: func_020698ac
extern "C" ARM int func_020698ac(Struct_020698ac* arg0, int arg1) {
    int var0;
    unsigned short var1;
    void* var2;
    func_020696bc(arg1, &var0, 1);
    func_020457e8((struct Struct_0204483c_2*)func_020421a0(), var0);
    var2 = arg0->unknown_0_;
    var1 = 0xff1e;
    memcpy(var2, &var1, 2);
    return 2;
}
