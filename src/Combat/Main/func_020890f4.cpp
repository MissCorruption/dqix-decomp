#include <globaldefs.h>

// USA: func_020890f4
extern "C" ARM void func_020890f4(unsigned char* arg0) {
    ((unsigned int*)arg0)[6] &= ~0x200;
    arg0[0x78] = 0;
    arg0[0x9b] = 0;
}
