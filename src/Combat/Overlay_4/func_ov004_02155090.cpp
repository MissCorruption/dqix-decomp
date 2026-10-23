#include <globaldefs.h>

struct Struct_ov004_02155090 { short unknown_0_; char unknown_2_[4]; };
extern "C" void* func_ov004_021550c8(Struct_ov004_02155090* arg0, int arg1);
extern char* data_ov004_021707c4;

// USA: func_ov004_02155090
extern "C" ARM int func_ov004_02155090(void) {
    Struct_ov004_02155090* var0 = (Struct_ov004_02155090*)data_ov004_021707c4;
    int var1 = 0;
    void* var2 = func_ov004_021550c8(var0, 8);
    if (var2) {
        var1 = var1 + *((unsigned char*)var2 + 5);
        var1 = (var1 << 16) >> 16;
    }
    return var1;
}
