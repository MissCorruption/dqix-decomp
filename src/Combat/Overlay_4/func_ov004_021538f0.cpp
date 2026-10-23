#include <globaldefs.h>

struct Struct_ov004_02153860 { char unknown_0_[5]; unsigned char unknown_5_; };
extern "C" Struct_ov004_02153860* func_ov004_021538b4(Struct_ov004_02153860* arg0, int arg1);
extern Struct_ov004_02153860* data_ov004_021707c0;

// USA: func_ov004_021538f0
extern "C" ARM short func_ov004_021538f0(void) {
    short var0 = 0;
    for (short var1 = 7; var1 <= 7; var1++) {
        Struct_ov004_02153860* var2 = func_ov004_021538b4(data_ov004_021707c0, var1);
        if (var2) var0 = var0 + var2->unknown_5_;
    }
    return var0;
}
