#include <globaldefs.h>

// USA: func_0208be94
extern "C" ARM void func_0208be94(unsigned char* arg0) {
    if (arg0[0xd4] != 2) {
        *(unsigned short*)(arg0 + 0xd0) = 0;
        *(unsigned short*)(arg0 + 0xda) |= 1;
    }
}
