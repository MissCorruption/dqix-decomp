#include <globaldefs.h>

struct Struct_ov025_021e161c {
    unsigned char unknown_0_[6];
};

extern "C" void func_ov000_0216f82c(Struct_ov025_021e161c* arg0, const int* arg1);

// USA: func_ov025_021e161c
extern "C" ARM int func_ov025_021e161c(int arg0, int arg1, unsigned char* arg2, int arg3) {
    Struct_ov025_021e161c var0;
    Struct_ov025_021e161c var1;
    func_ov000_0216f82c(&var1, &arg0);
    var0 = var1;
    for (int var2 = 0; var2 < 6; var2++) {
        unsigned char var3 = var0.unknown_0_[var2];
        if (var3 == 0xff) {
            continue;
        }
        if (arg3 == arg2[var3]) {
            return var3;
        }
    }
    return arg0;
}
