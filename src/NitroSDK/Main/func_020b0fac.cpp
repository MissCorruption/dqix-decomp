#include <globaldefs.h>

struct Struct_020b0fac_2 {
    void* unknown_0_;
    int (*unknown_4_)(const char** cursor);
};

struct Struct_020b0fac {
    int unknown_0_;
    int unknown_4_;
    const char* unknown_8_;
};

// USA: func_020b0fac
extern "C" ARM int func_020b0fac(struct Struct_020b0fac_2* arg0, int arg1, const char* arg2) {
    struct Struct_020b0fac var0;
    int* var1 = (int*)&var0;
    var0.unknown_8_ = arg2;
    var1[0] = 0;
    var1[1] = 0;

    int var2 = 1;
    int (*var3)(const char**) = arg0->unknown_4_;
    int var4 = var3(&var0.unknown_8_);
    if (var4 != 0) {
        do {
            if (var4 == 0xa) var2++;
            var4 = var3(&var0.unknown_8_);
        } while (var4 != 0);
    }

    signed char var5 = ((signed char*)arg0->unknown_0_)[1];
    return var2 * (arg1 + var5) - arg1;
}
