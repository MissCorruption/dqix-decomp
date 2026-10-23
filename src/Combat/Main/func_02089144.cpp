#include <globaldefs.h>

// USA: func_02089144
extern "C" ARM void func_02089144(unsigned char* arg0) {
    ((int*)arg0)[6] &= ~0x400;
    arg0[0x79] = 0;
    arg0[0x9c] = 0;
}
