#include <globaldefs.h>

extern char data_02107800;

#if defined(jpn)
enum { Enum_020429d4_0 = 0x30 };
#else
enum { Enum_020429d4_0 = 0 };
#endif

// USA: func_020429d4
extern "C" ARM int func_020429d4(void) {
    return *(int*)(&data_02107800 + Enum_020429d4_0);
}
