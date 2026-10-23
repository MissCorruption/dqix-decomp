#include <globaldefs.h>

extern "C" void WaitByLoop(int);
int SendCommandToArm7(int, int, bool);

// USA: func_020d1294
extern "C" ARM void func_020d1294(int arg0, int arg1) {
    if (SendCommandToArm7(0xe, arg0, 0) != 0) {
        do {
            WaitByLoop(arg1);
        } while (SendCommandToArm7(0xe, arg0, 0) != 0);
    }
}
