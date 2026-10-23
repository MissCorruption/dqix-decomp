#include <globaldefs.h>

// USA: func_02089124
extern "C" ARM void func_02089124(unsigned char* arg0) {
    arg0[0x79] = 5;
    arg0[0x9c] = 0;
    ((unsigned int*)arg0)[6] |= 0x400;
}
