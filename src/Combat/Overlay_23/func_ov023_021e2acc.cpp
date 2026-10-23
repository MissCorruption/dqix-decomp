#include <globaldefs.h>

struct Struct_ov023_021e2acc {
    short unknown_0_;
    char unknown_2_[6];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[2];
    short unknown_10_;
};

extern "C" Struct_ov023_021e2acc* func_ov023_021db4e4(void* arg0);
extern "C" Struct_ov023_021e2acc* func_ov023_021e2acc(void* arg0, int arg1, short* arg2, short* arg3);

// USA: func_ov023_021e2acc
extern "C" ARM Struct_ov023_021e2acc* func_ov023_021e2acc(void* arg0, int arg1, short* arg2, short* arg3) {
    Struct_ov023_021e2acc* var0 = func_ov023_021db4e4(arg0);
    *arg2 = *arg2 + var0->unknown_8_;
    *arg3 = *arg3 + var0->unknown_a_;
    while (var0 != NULL) {
        if (var0->unknown_10_ > 0) {
            var0 = func_ov023_021db4e4(arg0);
            continue;
        }
        if (var0->unknown_c_ < 0) {
            return var0;
        }
        var0 = func_ov023_021db4e4(arg0);
        if (var0 == NULL) return var0;
        return func_ov023_021e2acc(arg0, var0->unknown_0_, arg2, arg3);
    }
    return var0;
}
