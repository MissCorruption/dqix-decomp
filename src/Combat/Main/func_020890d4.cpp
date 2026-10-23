#include <globaldefs.h>

// USA: func_020890d4
extern "C" ARM void func_020890d4(unsigned char* arg0) {
    arg0[0x78] = 5;
    arg0[0x9b] = 0;
    ((unsigned int*)arg0)[6] |= 0x200;
}
