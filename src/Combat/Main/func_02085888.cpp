#include <globaldefs.h>

// USA: func_02085888
extern "C" ARM float func_02085888(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 1.0f;
    return (float)((*(int*)(arg0 + 0x2fc) << 14) >> 26) / 10.0f;
}
