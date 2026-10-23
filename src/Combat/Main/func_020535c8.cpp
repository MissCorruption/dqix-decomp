#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020535c8_380 = 0x170 };
#else
enum { Enum_020535c8_380 = 0x17c };
#endif

// USA: func_020535c8
extern "C" ARM int func_020535c8(signed char* arg0) {
    return arg0[Enum_020535c8_380] > 0;
}
