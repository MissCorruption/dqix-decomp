#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define data_020ef6d0 data_020ef5c0
#endif
extern char data_020ef6d0;

struct Struct_0202656c;

// USA: func_0202656c
extern "C" ARM void func_0202656c(struct Struct_0202656c* arg0, int arg1) {
#if defined(jpn)
    enum { Enum_0202656c_1894 = 0x6ba, Enum_0202656c_1772 = 0x680 };
#else
    enum { Enum_0202656c_1894 = 0x766, Enum_0202656c_1772 = 0x6ec };
#endif
    unsigned char* var0 = (unsigned char*)arg0;
    *(unsigned short*)(var0 + Enum_0202656c_1894) = arg1;
    if (*(unsigned short*)(var0 + Enum_0202656c_1894) == 0) return;
    if (*(unsigned short*)(var0 + Enum_0202656c_1894) >= 1000) return;
    sprintf((char*)(var0 + Enum_0202656c_1772), &data_020ef6d0, arg1);
}
