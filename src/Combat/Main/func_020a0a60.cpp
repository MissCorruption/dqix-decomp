#include <globaldefs.h>

struct Struct_020a0a08 {
    short* unknown_0_;
    signed char* unknown_4_;
    short unknown_8_;
};

// USA: func_020a0a60
extern "C" ARM void func_020a0a60(struct Struct_020a0a08* arg0, short arg1) {
    short* var0 = arg0->unknown_0_;
    signed char* var1 = arg0->unknown_4_;
    int var2 = arg0->unknown_8_;
    short var3;
    for (; arg1 < var2 - 1; arg1++) {
        if (var1[arg1] == 0) {
            for (var3 = arg1 + 1; var3 < var2; var3++) {
                if (var1[var3] != 0) {
                    var0[arg1] = var0[var3];
                    var1[arg1] = var1[var3];
                    var0[var3] = -1;
                    var1[var3] = 0;
                    break;
                }
            }
        }
    }
}
