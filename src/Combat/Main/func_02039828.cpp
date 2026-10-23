#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02039828_595 = 0x247 };
#else
enum { Enum_02039828_595 = 0x253 };
#endif

// USA: func_02039828
extern "C" ARM unsigned char func_02039828(void* arg0) {
    return *((unsigned char*)arg0 + Enum_02039828_595);
}
