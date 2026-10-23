#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0203983c_596 = 0x248 };
#else
enum { Enum_0203983c_596 = 0x254 };
#endif

// USA: func_0203983c
extern "C" ARM void func_0203983c(unsigned char* arg0, int arg1) {
    arg0[Enum_0203983c_596] = arg1 != 0;
}
