#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020398a4_462 = 0x1c2 };
#else
enum { Enum_020398a4_462 = 0x1ce };
#endif

// USA: func_020398a4
extern "C" ARM void func_020398a4(unsigned char* arg0) {
    arg0[Enum_020398a4_462] &= ~1;
}
