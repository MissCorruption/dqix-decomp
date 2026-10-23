#include <globaldefs.h>

extern "C" void WaitByLoop(int);
int SendCommandToArm7(int, int, bool);

// USA: func_020d1564
extern "C" ARM void func_020d1564(int arg0) {
    if (SendCommandToArm7(0xd, arg0, 0) != 0) {
        do {
            WaitByLoop(1);
        } while (SendCommandToArm7(0xd, arg0, 0) != 0);
    }
}
