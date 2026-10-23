#include <globaldefs.h>

int SendCommandToArm7(int, int, bool);

// USA: func_020c98c4
extern "C" ARM void func_020c98c4(int arg0) {
    int var0 = arg0 << 8;
    while (SendCommandToArm7(0xc, var0, 0)) {
    }
}
