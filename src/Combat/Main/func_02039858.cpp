#include <globaldefs.h>

// USA: func_02039858
extern "C" ARM void func_02039858(unsigned char* obj, int value) {
#if defined(jpn)
    obj[0x1bc] = value;
#else
    obj[0x1c8] = value;
#endif
}
