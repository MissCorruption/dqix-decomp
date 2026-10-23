#include <globaldefs.h>

extern "C" void* func_ov000_02161318(void*, int);
extern "C" void func_ov000_02170b0c(void*, int);

struct Struct_ov000_021735d0_4 { char unknown_0_[0x6c]; signed char unknown_6c_[4]; };

// USA: func_ov000_021754fc
extern "C" ARM void func_ov000_021754fc(struct Struct_ov000_021735d0_4* arg0, int arg1) {
    for (unsigned char var0 = 0; var0 < 4; var0++) {
        void* var1 = func_ov000_02161318(arg0, arg0->unknown_6c_[var0]);
        if (var1) {
            func_ov000_02170b0c(var1, arg1);
        }
    }
}
