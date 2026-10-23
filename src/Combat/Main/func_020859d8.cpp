#include <globaldefs.h>

// USA: func_020859d8
extern "C" ARM float func_020859d8(char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 1.0f;
    return (float)((*(int*)(arg0 + 0x300) << 8) >> 26) / 10.0f;
}
