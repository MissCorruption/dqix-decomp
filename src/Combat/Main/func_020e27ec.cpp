#include <globaldefs.h>

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);

// USA: func_020e27ec
extern "C" ARM void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3) {
    struct Struct_0205a254_2* var0 = func_0205a3d0(arg0, arg1);
    if (var0 != NULL) {
        *(short*)((char*)var0 + 0x4) = arg2;
        *(short*)((char*)var0 + 0x6) = arg3;
    }
}
