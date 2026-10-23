#include <globaldefs.h>

// USA: func_ov023_021eb414
extern "C" ARM void func_ov023_021eb414(char* arg0) {
    if (*(unsigned char*)(arg0 + 0x44a) != 0) return;
    *(unsigned char*)(arg0 + 0x44a) = 1;
    *(unsigned char*)(arg0 + 0x431) = 2;
    *(unsigned char*)(arg0 + 0x432) = 0;
}
