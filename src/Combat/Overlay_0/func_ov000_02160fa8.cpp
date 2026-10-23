#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160fa8_22004 = 0x57e4 };
#else
enum { Enum_ov000_02160fa8_22004 = 0x55f4 };
#endif

// USA: func_ov000_02160fa8
extern "C" ARM void func_ov000_02160fa8(void* arg0, int arg1) {
    *(int*)((char*)arg0 + Enum_ov000_02160fa8_22004) |= arg1;
}
