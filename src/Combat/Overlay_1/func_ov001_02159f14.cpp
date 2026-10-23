#include <globaldefs.h>

struct Struct_ov001_02159f14 { char unknown_0_[0x3c]; void* unknown_3c_; };

extern "C" void* func_ov001_02159eb0(void* arg0);

// USA: func_ov001_02159f14
extern "C" ARM void* func_ov001_02159f14(char* arg0) {
    Struct_ov001_02159f14* var0 = (Struct_ov001_02159f14*)func_ov001_02159eb0(arg0);
    if (var0 == NULL) return NULL;
    Struct_ov001_02159f14** var1 = (Struct_ov001_02159f14**)(arg0 + 0xc);
    if (*var1 != NULL) (*var1)->unknown_3c_ = var0;
    *var1 = var0;
    var0->unknown_3c_ = NULL;
    Struct_ov001_02159f14** var2 = (Struct_ov001_02159f14**)(arg0 + 0x8);
    if (*var2 == NULL) *var2 = var0;
    return var0;
}
