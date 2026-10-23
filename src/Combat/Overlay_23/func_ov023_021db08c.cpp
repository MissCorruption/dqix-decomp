#include <globaldefs.h>

struct Struct_ov023_021db08c { short unknown_0_; char unknown_2_[6]; };

// USA: func_ov023_021db08c
extern "C" ARM void* func_ov023_021db08c(void* arg0, int arg1) {
    int var0;
    if (arg1 < 0) return NULL;
    for (var0 = 0; var0 < *(unsigned short*)((char*)arg0 + 6); var0++) {
        struct Struct_ov023_021db08c* var1 = *(struct Struct_ov023_021db08c**)arg0;
        if (var1[var0].unknown_0_ == arg1) return &var1[var0];
    }
    return NULL;
}
