#include <globaldefs.h>

// USA: func_02050440
extern "C" ARM void func_02050440(unsigned char* obj, int val) {
    obj[0xda] = val;
    obj[0xd8] |= 2;
}
