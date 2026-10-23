#include <globaldefs.h>

extern "C" void func_020c976c(unsigned int id);
extern "C" int func_020cede0(void);
extern "C" int func_020ce6d0(int a, int b);
extern "C" int func_020cedc0(int a);

// USA: func_020cef94
extern "C" ARM void func_020cef94(void) {
    func_020c976c(0x360000);
    if (func_020cede0() == 1) return;
    if (func_020ce6d0(2, 0) != 0) {
        do {
            func_020c976c(0xa3a47);
        } while (func_020ce6d0(2, 0) != 0);
    }
    if (func_020cedc0(1) != 0) return;
    do {
        func_020c976c(0xa);
    } while (func_020cedc0(1) == 0);
}
