#include <globaldefs.h>
struct Struct_020236dc;

struct Struct_02024d48 {
    unsigned char unknown_0_[0x11];
    unsigned char unknown_11_;
    unsigned char unknown_12_;
};

// USA: func_02024d48
extern "C" ARM int func_02024d48(Struct_020236dc* arg0, int arg1) {
    struct Struct_02024d48* var0 = (struct Struct_02024d48*)arg0;
    int var1 = 1;
    int var2 = 1;
    unsigned char var3 = var0->unknown_12_;
    if (var3 != 0) {
        if (var3 == 0 || var0->unknown_11_ != 0) {
            var2 = 0;
        }
    }
    if (var2 == 0) {
        if (var3 == 0 || arg1 != 0) {
            var1 = 0;
        }
    }
    return var1;
}
