#include <globaldefs.h>

struct Struct_0202b2f0;
extern "C" signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_0202c1c0
extern "C" ARM int func_0202c1c0(struct Struct_0202b2f0* arg0, int arg1) {
    int var0 = func_0202bcbc(arg0, arg1);
    if (var0 < 0) return 0;
    return *(unsigned char*)((char*)arg0 + 0x1000 + 0xc) & (1 << var0);
}
