#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02083b28_2284 = 0x854 };
#else
enum { Enum_02083b28_2284 = 0x8ec };
#endif

// USA: func_02083b28
extern "C" ARM void func_02083b28(unsigned char* arg0, int arg1) {
    unsigned char* var0 = arg0 + Enum_02083b28_2284;
    var0[arg1 / 8] &= ~(1 << (arg1 % 8));
}
