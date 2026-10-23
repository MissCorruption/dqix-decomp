#include <globaldefs.h>

// USA: func_02083b60
extern "C" ARM void func_02083b60(unsigned char* obj, int index) {
#if defined(jpn)
    unsigned char* p = obj + 0x878;
#else
    unsigned char* p = obj + 0x910;
#endif
    p[index / 8] |= 1 << (index % 8);
}
