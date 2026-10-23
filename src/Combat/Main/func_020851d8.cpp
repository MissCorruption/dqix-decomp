#include <globaldefs.h>

// USA: func_020851d8
extern "C" ARM int func_020851d8(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) {
        return 0;
    }
    return (((unsigned int)(*(int*)(arg0 + 0x2f4)) << 0x15) >> 0x1f) != 0;
}
