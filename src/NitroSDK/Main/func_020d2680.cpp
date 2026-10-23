#include <globaldefs.h>

extern "C" int func_020d2718(unsigned int arg0);
extern "C" int func_020d22f4(int);
extern "C" void func_020d2880(void);

// USA: func_020d2680
extern "C" ARM void func_020d2680(unsigned int arg0) {
    if (func_020d2718(arg0)) return;
    while (func_020d22f4(0) != 0) {
    }
    if (func_020d2718(arg0)) return;
    func_020d2880();
    if (func_020d2718(arg0)) return;
    do {
        func_020d22f4(1);
    } while (!func_020d2718(arg0));
}
