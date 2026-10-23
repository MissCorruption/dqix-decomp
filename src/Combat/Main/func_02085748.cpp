#include <globaldefs.h>

// USA: func_02085748
extern "C" ARM int func_02085748(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return (((unsigned int)*(int*)(arg0 + 0x2f4)) << 6) >> 29;
}
