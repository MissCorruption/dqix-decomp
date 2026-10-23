#include <globaldefs.h>

extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

struct Struct_0209859c {
    char unknown_0_[0x14];
    char unknown_14_[6];
    char unknown_1a_[0xe8 - 0x1a];
};

// USA: func_0209859c
extern "C" ARM struct Struct_0209859c* func_0209859c(struct Struct_0209859c* arg0, void* arg1) {
    struct Struct_0209859c* var0;
    int var1;
    for (var1 = 0; var1 < 0x1e; var1++) {
        var0 = &arg0[var1];
        if (func_02001aec(arg1, var0->unknown_14_, 6) == 0) return var0;
    }
    return 0;
}
