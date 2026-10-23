#include <globaldefs.h>

struct Struct_0202b2f0 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};
struct Struct_0202bcf8;

extern "C" signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1);
extern "C" signed char func_0202bcf8(struct Struct_0202bcf8* arg0, int arg1);

// USA: func_0202c600
extern "C" ARM void func_0202c600(struct Struct_0202b2f0* arg0, int arg1) {
    int var0 = func_0202bcbc(arg0, arg1);
    if (var0 < 0) {
        var0 = func_0202bcf8((struct Struct_0202bcf8*)arg0, arg1);
        if (var0 < 0) return;
    }
    *((unsigned char*)arg0 + 0x100e) &= ~(1 << var0);
}
