#include <globaldefs.h>

extern signed char data_020ef9c4[][0xd];
extern "C" void func_02033ba0(void* arg0, int arg1);

// USA: func_02033dd4
extern "C" ARM void func_02033dd4(unsigned char* arg0) {
    if (arg0[0xbe] >= 9) return;
    if (arg0[0xc0] >= 0xc) arg0[0xc0] = 0;
    func_02033ba0(arg0, data_020ef9c4[arg0[0xbe]][arg0[0xc0]]);
}
