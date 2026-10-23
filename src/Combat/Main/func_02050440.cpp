#include <globaldefs.h>

// USA: func_02050440
extern "C" ARM void func_02050440(unsigned char* arg0, int arg1) {
    arg0[0xda] = arg1;
    arg0[0xd8] |= 2;
}
