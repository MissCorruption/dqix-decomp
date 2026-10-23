#include <globaldefs.h>

// USA: func_02010810
extern "C" ARM void func_02010810(char* obj, int value) {
#if defined(jpn)
    *(int*)(obj + 0x5a5c) = value;
#else
    *(int*)(obj + 0x5cbc) = value;
#endif
}
