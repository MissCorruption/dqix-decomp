#include <globaldefs.h>

// USA: func_02089194
extern "C" ARM void func_02089194(unsigned char* arg0) {
    ((int*)arg0)[6] &= ~0x800;
    arg0[0x7c] = 0;
    arg0[0x9f] = 0;
}
