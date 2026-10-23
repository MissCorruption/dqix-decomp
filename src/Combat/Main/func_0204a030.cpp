#include <globaldefs.h>

// USA: func_0204a030
extern "C" ARM void func_0204a030(unsigned char* arg0, int arg1) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    if (var0 != 0) {
        var0[0x6c] = arg1;
    }
}
