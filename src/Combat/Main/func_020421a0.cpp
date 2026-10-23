#include <globaldefs.h>

extern int data_02107800;

#if defined(jpn)
enum { Enum_020421a0_28 = 0x38 };
#else
enum { Enum_020421a0_28 = 0x1c };
#endif

// USA: func_020421a0
extern "C" ARM int func_020421a0() {
    return *(int*)((char*)&data_02107800 + Enum_020421a0_28);
}
