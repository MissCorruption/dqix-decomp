#include <globaldefs.h>

// USA: func_02085204
extern "C" ARM int func_02085204(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return (((unsigned int)*(int*)(arg0 + 0x2f4) << 20) >> 31) != 0;
}
