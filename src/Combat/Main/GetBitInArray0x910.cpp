#include <globaldefs.h>

// USA: func_02083bc0
ARM int GetBitInArray0x910_02083bc0(unsigned char* obj, int index) {
#if defined(jpn)
    enum { regionalOffset0 = 0x878 };
#else
    enum { regionalOffset0 = 0x910 };
#endif
    unsigned char* p = obj + regionalOffset0;
    return p[index / 8] & (1 << (index % 8));
}
