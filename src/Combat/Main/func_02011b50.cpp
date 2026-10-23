#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02011b50_988 = 0x17c };
#else
enum { Enum_02011b50_988 = 0x3dc };
#endif

// USA: func_02011b50
extern "C" ARM int func_02011b50(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    return ((var0 + 0x6000)[Enum_02011b50_988] & arg1) != 0;
}
