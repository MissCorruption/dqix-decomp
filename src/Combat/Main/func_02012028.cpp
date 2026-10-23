#include <globaldefs.h>

// USA: func_02012028
extern "C" ARM void func_02012028(void* arg0, unsigned char arg1) {
#if defined(jpn)
    ((unsigned char*)arg0 + 0x7000)[0xc9c] = arg1;
#else
    ((unsigned char*)arg0 + 0x7000)[0xf70] = arg1;
#endif
}
