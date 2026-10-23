#include <globaldefs.h>

struct Struct_ov023_021f6dd8 { int unknown_0_; int unknown_4_; int unknown_8_; Struct_ov023_021f6dd8* unknown_c_; };

// USA: func_ov023_021f6dd8
extern "C" ARM int func_ov023_021f6dd8(void* arg0, int arg1) {
    Struct_ov023_021f6dd8* var0 = *(Struct_ov023_021f6dd8**)((char*)arg0 + 0x28);
    while (var0 != NULL) {
        int var1 = var0->unknown_4_;
        Struct_ov023_021f6dd8* var2 = var0->unknown_c_;
        int var3 = var1 + arg1;
        var0 = var2;
        if (var0 == NULL) {
            return var1;
        }
        if ((unsigned int)var3 <= (unsigned int)var0->unknown_0_) {
            return var1;
        }
    }
    return 0;
}
