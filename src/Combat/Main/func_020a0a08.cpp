#include <globaldefs.h>

struct Struct_020a095c;
extern "C" short func_020a0af4(struct Struct_020a095c* arg0, int arg1);
struct Struct_020a0a08;
extern "C" void func_020a0a60(struct Struct_020a0a08* arg0, short arg1);

struct Struct_02061c04_23 { short* unknown_0_; signed char* unknown_4_; short unknown_8_; };

// USA: func_020a0a08
extern "C" ARM int func_020a0a08(struct Struct_02061c04_23* arg0, int arg1, int arg2) {
    short* var0 = arg0->unknown_0_;
    signed char* var1 = arg0->unknown_4_;
    short var2 = func_020a0af4((struct Struct_020a095c*)arg0, arg1);
    int var3 = 0;
    if (var2 >= 0) {
        var1[var2] -= arg2;
        if (var1[var2] <= 0) {
            var0[var2] = var3 - 1;
            var1[var2] = var3;
            func_020a0a60((struct Struct_020a0a08*)arg0, var2);
        }
        var3 = 1;
    }
    return var3;
}
