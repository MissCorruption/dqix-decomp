#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020440a4_6624 = 0x1804 };
#else
enum { Enum_020440a4_6624 = 0x19e0 };
#endif

extern "C" int func_0202f24c(void*);

// USA: func_020440a4
extern "C" ARM int func_020440a4(void* arg0) {
    return func_0202f24c((char*)arg0 + Enum_020440a4_6624);
}
