#include <globaldefs.h>

struct Struct_0209a9dc_2;
struct Struct_0209a9dc_3 { unsigned short unknown_0_; unsigned short unknown_2_; };

extern "C" struct Struct_0209a9dc_3* func_0209a9dc(struct Struct_0209a9dc_2* arg0, int arg1);

// USA: func_0209acdc
extern "C" ARM int func_0209acdc(struct Struct_0209a9dc_2* arg0, unsigned char* arg1, unsigned int arg2, unsigned short* arg3) {
    unsigned int var0;
    int var1 = 0;
    for (var0 = 0; var0 < arg2; var0++) {
        struct Struct_0209a9dc_3* var2 = func_0209a9dc(arg0, arg1[var0]);
        if (var2 != NULL) {
            arg3[var1] = var2->unknown_2_;
            var1++;
        }
    }
    return var1;
}
