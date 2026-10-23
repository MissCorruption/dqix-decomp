#include <globaldefs.h>

// USA: func_020851ac
extern "C" ARM int func_020851ac(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return (((unsigned int)*(int*)(arg0 + 0x2f4) << 24) >> 31) != 0;
}
