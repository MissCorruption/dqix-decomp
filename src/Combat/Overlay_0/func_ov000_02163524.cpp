#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02163524_3748 = 0xe20 };
#else
enum { Enum_ov000_02163524_3748 = 0xea4 };
#endif

// USA: func_ov000_02163524
extern "C" ARM int func_ov000_02163524(void* arg0) {
    return *(int*)((char*)arg0 + Enum_ov000_02163524_3748);
}
