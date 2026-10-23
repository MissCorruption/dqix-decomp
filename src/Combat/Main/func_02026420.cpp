#include <globaldefs.h>

// USA: func_02026420
extern "C" ARM void func_02026420(unsigned char* arg0, unsigned char arg1) {
#if defined(jpn)
    arg0[0x6b9] = arg1;
#else
    arg0[0x765] = arg1;
#endif
}
