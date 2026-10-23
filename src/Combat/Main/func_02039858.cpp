#include <globaldefs.h>

// USA: func_02039858
extern "C" ARM void func_02039858(unsigned char* arg0, int arg1) {
#if defined(jpn)
    arg0[0x1bc] = arg1;
#else
    arg0[0x1c8] = arg1;
#endif
}
