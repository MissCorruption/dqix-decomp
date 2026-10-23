#include <globaldefs.h>

struct Struct_020cf8e4;
extern "C" int func_020cf8e4(struct Struct_020cf8e4* arg0);
extern "C" int func_020cf978(unsigned char* arg0);

// USA: func_020cf990
extern "C" ARM long long func_020cf990(int arg0, unsigned char* arg1) {
    int var0, var1;
    var0 = func_020cf8e4((struct Struct_020cf8e4*)arg0);
    if (var0 == -1) {
        return -1;
    }
    var1 = func_020cf978(arg1);
    if (var1 == -1) {
        return -1;
    }
    return ((long long)var0) * (60 * 60 * 24) + var1;
}
