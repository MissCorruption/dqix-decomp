#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02039dbc_462 = 0x1c2 };
#else
enum { Enum_02039dbc_462 = 0x1ce };
#endif

// USA: func_02039dbc
extern "C" ARM void func_02039dbc(unsigned char* arg0) {
    arg0[Enum_02039dbc_462] &= ~8;
}
