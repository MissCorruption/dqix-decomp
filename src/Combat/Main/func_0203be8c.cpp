#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0203be8c
extern "C" ARM void func_0203be8c(char* obj) {
#if defined(jpn)
    *(short*)obj = -1;
    *(short*)(obj + 2) = -1;
    memset(obj + 4, 0, 10);
    obj[0xe] = 0;
#else
    memset(obj, 0, 0x20);
    obj[0x20] = 0;
    obj[0x21] = 0;
    *(short*)(obj + 0x22) = -1;
    obj[0x24] = 0;
#endif
}
