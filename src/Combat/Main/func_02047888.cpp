#include <globaldefs.h>

// USA: func_02047888
extern "C" ARM void func_02047888(int arg0, int arg1) {
    *(volatile unsigned int*)0x4000488 =
        (unsigned short)(short)(arg0 >> 8) | ((unsigned short)(short)(arg1 >> 8) << 16);
}
