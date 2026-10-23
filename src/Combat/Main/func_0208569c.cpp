#include <globaldefs.h>

// USA: func_0208569c
extern "C" ARM int func_0208569c(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return (((unsigned int)*(int*)(arg0 + 0x2f4) << 3) >> 31) != 0;
}
