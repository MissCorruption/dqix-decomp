#include <globaldefs.h>

// USA: func_020850a4
extern "C" ARM int func_020850a4(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return (((unsigned int)*(int*)(arg0 + 0x2f4) << 30) >> 31) != 0;
}
