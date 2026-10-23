#include <globaldefs.h>

struct Struct_ov023_021e2450 { short unknown_0_; char unknown_2_[18]; };

// USA: func_ov023_021e2450
extern "C" ARM void* func_ov023_021e2450(void* arg0, int arg1) {
    struct Struct_ov023_021e2450* var0 = *(struct Struct_ov023_021e2450**)((char*)arg0 + 0xc);
    unsigned short var1;
    unsigned short var2;
    if (var0 == NULL) return NULL;
    var1 = *(unsigned short*)((char*)arg0 + 0x16);
    if (var1 == 0) return NULL;
    for (var2 = 0; var2 < var1; var2++) {
        short var3 = var0[var2].unknown_0_;
        if (var3 == arg1) return &var0[var2];
    }
    return NULL;
}
