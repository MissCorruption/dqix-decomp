#include <globaldefs.h>

struct Struct_0202b2f0 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};

extern "C" int func_0202c540(struct Struct_0202b2f0* arg0, int arg1);
extern "C" signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_0202c718
extern "C" ARM void func_0202c718(struct Struct_0202b2f0* arg0, int arg1) {
    if (func_0202c540(arg0, arg1)) return;
    {
        int var0 = func_0202bcbc(arg0, arg1);
        *((unsigned char*)arg0 + 0x1010) &= ~(1 << var0);
    }
}
