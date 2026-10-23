#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160fd4_22004 = 0x57e4 };
#else
enum { Enum_ov000_02160fd4_22004 = 0x55f4 };
#endif

// USA: func_ov000_02160fd4
extern "C" ARM int func_ov000_02160fd4(void* arg0, int arg1) {
    return *(int*)((char*)arg0 + Enum_ov000_02160fd4_22004) & arg1;
}
