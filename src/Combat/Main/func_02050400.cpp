#include <globaldefs.h>

// USA: func_02050400
extern "C" ARM void func_02050400(unsigned char* arg0, int arg1) {
    arg0[0xd8] = (arg0[0xd8] & ~1) | (arg1 & 1);
    arg0[0xd8] |= 2;
    arg0[0xd9] = 0;
    arg0[0xda] = 0;
}
