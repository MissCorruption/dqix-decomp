#include <globaldefs.h>

struct Struct_020b0fac_2 {
    void* unknown_0_;
    int (*unknown_4_)(const char** cursor);
};
struct Struct_020b26e8 {
    int unknown_0_;
    Struct_020b0fac_2* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
struct Struct_020b26e8_2 { signed char unknown_0_, unknown_1_; };
extern "C" int func_020b0fac(Struct_020b0fac_2*, int, const char*);
extern "C" void func_020b245c(Struct_020b26e8*, int, int, int, int, int, const char*, Struct_020b26e8_2);

// USA: func_020b26e8
extern "C" ARM void func_020b26e8(Struct_020b26e8* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, const char* arg7, Struct_020b26e8_2 arg8) {
    if (arg6 & 0x100) {
        int var0 = func_020b0fac(arg0->unknown_4_, arg0->unknown_c_, arg7);
        int var1 = arg4 - var0;
        arg1 += var1 * -arg8.unknown_1_;
        arg2 += var1 * arg8.unknown_0_;
    } else if (arg6 & 0x80) {
        int var2 = func_020b0fac(arg0->unknown_4_, arg0->unknown_c_, arg7);
        int var3 = (arg4 + 1) / 2 - (var2 + 1) / 2;
        arg1 += var3 * -arg8.unknown_1_;
        arg2 += var3 * arg8.unknown_0_;
    }
    func_020b245c(arg0, arg1, arg2, arg3, arg5, arg6, arg7, arg8);
}
