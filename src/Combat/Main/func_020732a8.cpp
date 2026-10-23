#include <globaldefs.h>
extern "C" void func_02073240(int);

// USA: func_020732a8
extern "C" ARM void func_020732a8(void) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        func_02073240((int)(var0));
    }
}
