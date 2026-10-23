#include <globaldefs.h>

#if defined(jpn)
enum { FIELD_OFFSET = 0x1c2 };
#else
enum { FIELD_OFFSET = 0x1ce };
#endif

// USA: func_02039dbc
extern "C" ARM void func_02039dbc(unsigned char* obj) {
    obj[FIELD_OFFSET] &= ~8;
}
