#include <globaldefs.h>

struct Struct_0202b2f0;
extern "C" signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1);
struct Struct_0202b2f0;
extern "C" int func_0202bc8c(struct Struct_0202b2f0*);

// USA: func_0202bd34
extern "C" ARM int func_0202bd34(struct Struct_0202b2f0* arg0, int arg1) {
    int var0 = func_0202bcbc(arg0, arg1);
    if (var0 < 0) return 0;
    return (func_0202bc8c((struct Struct_0202b2f0*)arg0) & (1 << var0)) != 0;
}
