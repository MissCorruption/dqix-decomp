#include <globaldefs.h>

struct Struct_0207f0ac_2;
struct Struct_0207f0ac;
extern "C" struct Struct_0207f0ac_2* func_0207f0ac(struct Struct_0207f0ac*, int);

// USA: func_02080878
extern "C" ARM void func_02080878(void* arg0, int arg1, short* arg2, short* arg3) {
    struct Struct_0207f0ac_2* var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 != NULL) {
        *arg2 = *(short*)((char*)var0 + 0xe);
        *arg3 = *(short*)((char*)var0 + 0x10);
    }
}
