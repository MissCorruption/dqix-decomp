#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov025_021eed58 { char unknown_0_[0x18]; struct Struct_ov025_021eed58* unknown_18_; };

// USA: func_ov025_021eed58
extern "C" ARM void func_ov025_021eed58(char* arg0) {
    memset(arg0, 0, 0xe0);
    *(int*)(arg0 + 0xe0) = 0;
    *(int*)(arg0 + 0xe4) = 0;
    for (int var0 = 0; var0 < 7; var0++) {
        struct Struct_ov025_021eed58* var1 = (struct Struct_ov025_021eed58*)(arg0 + var0 * 0x1c);
        struct Struct_ov025_021eed58* var2 = (struct Struct_ov025_021eed58*)(arg0 + (var0 + 1) * 0x1c);
        var1->unknown_18_ = var2;
    }
    *(void**)(arg0 + 0xe4) = arg0;
    *(int*)(arg0 + 0xdc) = 0;
}
