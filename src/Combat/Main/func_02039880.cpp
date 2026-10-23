#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02039880_458 = 0x1be };
#else
enum { Enum_02039880_458 = 0x1ca };
#endif

// USA: func_02039880
extern "C" ARM void func_02039880(unsigned char* arg0, int arg1) {
    arg0[Enum_02039880_458] = arg1;
}
