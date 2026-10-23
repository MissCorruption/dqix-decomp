#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov004_021698f4 { char unknown_0_[0x20]; void* unknown_20_; unsigned short unknown_24_; unsigned short unknown_26_; };

// USA: func_ov023_021f9c0c
extern "C" ARM void* func_ov023_021f9c0c(struct Struct_ov004_021698f4* arg0) {
    unsigned short var0 = arg0->unknown_24_;
    unsigned short var1 = arg0->unknown_26_;
    void* var2 = arg0->unknown_20_;
    return memset(var2, 0, var1 * (var0 * 2));
}
