#include <globaldefs.h>
#include "Util/Random.h"

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov000_02153c24 { char unknown_0_[0xa]; unsigned char unknown_a_0_:4; unsigned char unknown_a_4_:4; char unknown_b_[0x18 - 0xa - 1]; };
struct Struct_ov000_02153c24_2 { char unknown_0_[0x1b1]; unsigned char unknown_1b1_0_:4; unsigned char unknown_1b1_4_:2; unsigned char unknown_1b1_6_:2; };

// USA: func_ov000_02153c24
extern "C" ARM void func_ov000_02153c24(void* arg0, int* arg1) {
    struct Struct_ov000_02153c24* var0 = (struct Struct_ov000_02153c24*)((char*)arg0 + 0x1b4 + 0x8000);
    int var1 = *arg1;
    if (var0[var1].unknown_a_4_ != 0) return;

    int var2[3];
    __clear(var2, 0xc);
    int var3 = 0;
    int var4;
    int* var5 = var2;
    for (var4 = 0; var4 < ((struct Struct_ov000_02153c24_2*)((char*)arg0 + 0x8000))->unknown_1b1_4_; var4++) {
        if (var0[var4].unknown_a_4_ != 0) {
            var5[var3] = var4;
            var3++;
        }
    }
    int var6 = NextRandomMax((struct Random*)arg0, var3);
    *arg1 = var5[var6];
}
