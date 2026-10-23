#include <globaldefs.h>

// USA: func_020856f4
extern "C" ARM int func_020856f4(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return (((unsigned int)*(int*)(arg0 + 0x2f4) << 1) >> 31) != 0;
}
