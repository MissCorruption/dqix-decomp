#include <globaldefs.h>

struct Struct_02021410;

// USA: func_02021410
extern "C" ARM void func_02021410(Struct_02021410* arg0, int arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    var0[0x918] = arg1 != 0;
    var0[0x91c] = arg2;
#else
    var0[0x9c4] = arg1 != 0;
    var0[0x9c8] = arg2;
#endif
}
