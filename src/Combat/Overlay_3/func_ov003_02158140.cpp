#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020d2ff0(const char* arg0);
extern char data_ov003_0217fce0;

struct Struct_ov003_021575dc_2 {
    char unknown_0_[0xc];
    char unknown_c_[0x38];
};

// USA: func_ov003_02158140
extern "C" ARM void func_ov003_02158140(struct Struct_ov003_021575dc_2* arg0, int arg1) {
    if (arg1 == 0) return;
    memset(arg0->unknown_c_, 0, 0x38);
    sprintf(arg0->unknown_c_ + func_020d2ff0(arg0->unknown_c_), &data_ov003_0217fce0, arg1);
}
