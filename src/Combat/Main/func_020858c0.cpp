#include <globaldefs.h>

// USA: func_020858c0
extern "C" ARM float func_020858c0(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 1.0f;
    return (float)((*(int*)(arg0 + 0x2fc) << 8) >> 26) / 10.0f;
}
