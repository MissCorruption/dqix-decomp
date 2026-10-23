#include <globaldefs.h>

struct Struct_0202b2f0;
struct Struct_0202bcf8;
extern "C" signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1);
extern "C" signed char func_0202bcf8(struct Struct_0202bcf8* arg0, int arg1);

// USA: func_0202c578
extern "C" ARM int func_0202c578(struct Struct_0202b2f0* arg0, int arg1) {
    int var0 = func_0202bcbc(arg0, arg1);
    if (var0 < 0) {
        var0 = func_0202bcf8((struct Struct_0202bcf8*)arg0, arg1);
        if (var0 < 0) return 0;
    }
    return *((unsigned char*)arg0 + 0x100e) & (1 << var0);
}
