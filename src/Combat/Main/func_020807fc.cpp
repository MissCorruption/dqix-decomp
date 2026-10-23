#include <globaldefs.h>

struct Struct_0207f0ac_2;
struct Struct_0207f0ac;
extern "C" struct Struct_0207f0ac_2* func_0207f0ac(struct Struct_0207f0ac*, int);

// USA: func_020807fc
extern "C" ARM void func_020807fc(void* arg0, int arg1, int arg2, int arg3) {
    struct Struct_0207f0ac_2* var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 != NULL) {
        *(short*)((char*)var0 + 0xa) = arg2 >> 3;
        *(short*)((char*)var0 + 0xc) = arg3 >> 3;
    }
}
