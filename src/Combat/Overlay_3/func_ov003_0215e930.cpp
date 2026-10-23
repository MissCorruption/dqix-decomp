#include <globaldefs.h>

struct Struct_ov003_0215e930 {
    char unknown_0_;
    signed char unknown_1_;
    char unknown_2_;
    signed char unknown_3_;
    short* unknown_4_;
};

// USA: func_ov003_0215e930
extern "C" ARM int func_ov003_0215e930(struct Struct_ov003_0215e930* arg0, short arg1, unsigned char* arg2, unsigned char* arg3) {
    signed char var0 = arg0->unknown_3_;
    short* var1 = arg0->unknown_4_;
    short var2;
    for (var2 = 0; var2 < var0; var2++, var1++) {
        if (*var1 == arg1) {
            *arg2 = var2 % arg0->unknown_1_;
            *arg3 = var2 / arg0->unknown_1_;
            return 0;
        }
    }
    return 1;
}
