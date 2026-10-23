#include <globaldefs.h>

// USA: func_020857c0
extern "C" ARM int func_020857c0(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return (((unsigned int)*(int*)(arg0 + 0x2f8) << 29) >> 31) != 0;
}
