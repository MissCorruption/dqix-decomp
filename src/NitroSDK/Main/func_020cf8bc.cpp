#include <globaldefs.h>

int SendCommandToArm7(int, int, bool);

// USA: func_020cf8bc
extern "C" ARM int func_020cf8bc(int arg0) {
    return SendCommandToArm7(5, (arg0 << 8) & 0x7f00, 0) >= 0 ? 1 : 0;
}
