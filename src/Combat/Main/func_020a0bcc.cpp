#include <globaldefs.h>

struct Struct_020a0bcc {
    short* unknown_0_;
    char* unknown_4_;
    short unknown_8_;
};

// USA: func_020a0bcc
extern "C" ARM void func_020a0bcc(struct Struct_020a0bcc* arg0) {
    short* var0 = arg0->unknown_0_;
    char* var1 = arg0->unknown_4_;
    short var2 = arg0->unknown_8_;
    short var3;
    for (var3 = 0; var3 < var2; var3++) {
        var0[var3] = -1;
        var1[var3] = 0;
    }
}
