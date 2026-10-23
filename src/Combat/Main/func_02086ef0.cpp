#include <globaldefs.h>

struct Struct_02048150 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

// USA: func_02086ef0
extern "C" ARM int func_02086ef0(struct Struct_02048150* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_f7c_; var0++) {
        if (arg1 == arg0->unknown_f78_[var0]) {
            return 1;
        }
    }
    return 0;
}
