#include <globaldefs.h>

// USA: func_02089174
extern "C" ARM void func_02089174(unsigned char* arg0) {
    arg0[0x7c] = 3;
    arg0[0x9f] = 0;
    ((int*)arg0)[6] |= 0x800;
}
