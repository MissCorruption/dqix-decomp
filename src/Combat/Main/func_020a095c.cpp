#include <globaldefs.h>

struct Struct_020a095c;
extern "C" short func_020a0af4(struct Struct_020a095c* arg0, int arg1);

struct Struct_0207cf30_4 { short* unknown_0_; signed char* unknown_4_; short unknown_8_; };

// USA: func_020a095c
extern "C" ARM int func_020a095c(struct Struct_0207cf30_4* arg0, int arg1, int arg2) {
    short* var0 = arg0->unknown_0_;
    signed char* var1 = arg0->unknown_4_;
    short var2 = arg0->unknown_8_;
    short var3;
    int var4;
    if (arg1 < 0) {
        return 0;
    }
    if (arg2 <= 0) {
        return 0;
    }
    var4 = 0;
    var3 = func_020a0af4((struct Struct_020a095c*)arg0, arg1);
    if (var3 >= 0) {
        var4 = 1;
        if (var1[var3] < 99) {
            signed char var5 = 99 - var1[var3];
            if (arg2 > var5) arg2 = var5;
            var1[var3] += arg2;
        }
    } else {
        short var6;
        for (var6 = 0; var6 < var2; var6++) {
            if (var0[var6] < 0) {
                var0[var6] = arg1;
                var1[var6] = arg2;
                var4 = 1;
                break;
            }
        }
    }
    return var4;
}
