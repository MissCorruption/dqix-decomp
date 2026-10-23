#include <globaldefs.h>

struct Struct_ov001_02159fd4 { char unknown_0_[0x3c]; void* unknown_3c_; };

extern "C" void* func_ov001_02159eb0(void* arg0);

// USA: func_ov001_02159fd4
extern "C" ARM void* func_ov001_02159fd4(char* arg0) {
    Struct_ov001_02159fd4* var0 = (Struct_ov001_02159fd4*)func_ov001_02159eb0(arg0);
    if (var0 == NULL) return NULL;
    Struct_ov001_02159fd4** var1 = (Struct_ov001_02159fd4**)(arg0 + 0x34);
    if (*var1 != NULL) (*var1)->unknown_3c_ = var0;
    *var1 = var0;
    var0->unknown_3c_ = NULL;
    Struct_ov001_02159fd4** var2 = (Struct_ov001_02159fd4**)(arg0 + 0x30);
    if (*var2 == NULL) *var2 = var0;
    return var0;
}
