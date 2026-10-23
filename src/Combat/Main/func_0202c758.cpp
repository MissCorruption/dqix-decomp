#include <globaldefs.h>

struct Struct_0202b2f0 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};

extern "C" signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_0202c758
extern "C" ARM int func_0202c758(struct Struct_0202b2f0* arg0, int arg1) {
    int var0 = func_0202bcbc(arg0, arg1);
    return *((unsigned char*)arg0 + 0x1010) & (1 << var0);
}
