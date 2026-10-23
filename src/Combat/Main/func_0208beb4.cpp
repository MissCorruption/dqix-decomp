#include <globaldefs.h>

// USA: func_0208beb4
extern "C" ARM void func_0208beb4(unsigned char* arg0) {
    if (arg0[0xd4] != 3) {
        *(unsigned short*)(arg0 + 0xda) |= 2;
    }
}
