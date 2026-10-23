#include <globaldefs.h>

#if defined(jpn)
enum { BIT_ARRAY_OFFSET = 0x854 };
#else
enum { BIT_ARRAY_OFFSET = 0x8ec };
#endif

// USA: func_02083b28
extern "C" ARM void func_02083b28(unsigned char* obj, int index) {
    unsigned char* p = obj + BIT_ARRAY_OFFSET;
    p[index / 8] &= ~(1 << (index % 8));
}
