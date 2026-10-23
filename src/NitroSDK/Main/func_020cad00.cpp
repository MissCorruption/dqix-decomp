#include <globaldefs.h>

extern "C" void func_020c9bfc(unsigned char arg0);
void ResetDMAChannel(int arg);

// USA: func_020cad00
extern "C" ARM void func_020cad00(void) {
    func_020c9bfc(3);
    ResetDMAChannel(0);
}
