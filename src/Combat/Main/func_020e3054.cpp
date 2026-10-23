#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_0208ab34_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

// USA: func_020e3054
extern "C" ARM struct Struct_0208ab34_2* func_020e3054(struct Struct_0208ab34_2* arg0, int arg1) {
    int var0;
    if (!func_0202b7d8((int*)func_0202ae18())) return NULL;
    for (var0 = 0; var0 < 8; var0++) {
        if (arg0->unknown_1_ == arg1) return arg0;
        arg0++;
    }
    return NULL;
}
