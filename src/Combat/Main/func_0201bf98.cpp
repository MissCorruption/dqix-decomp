#include <globaldefs.h>

// USA: func_0201bf98
extern "C" ARM void func_0201bf98(unsigned char* arg0, int arg1, int arg2) {
    if (arg2) {
#if defined(jpn)
        arg0[0x2784] |= (1 << arg1);
#else
        arg0[0x2744] |= (1 << arg1);
#endif
    } else {
#if defined(jpn)
        arg0[0x2784] &= ~(1 << arg1);
#else
        arg0[0x2744] &= ~(1 << arg1);
#endif
    }
}
