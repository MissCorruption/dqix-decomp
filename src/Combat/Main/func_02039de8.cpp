#include <globaldefs.h>

#if defined(jpn)
enum { FIELD_OFFSET = 0x1c2 };
#else
enum { FIELD_OFFSET = 0x1ce };
#endif

// USA: func_02039de8
extern "C" ARM unsigned int func_02039de8(unsigned char* obj) {
    return obj[FIELD_OFFSET] & 0x10;
}
