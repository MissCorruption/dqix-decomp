#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020de848
extern "C" ARM void func_020de848(void* obj) {
    memset(obj, 0, 0x14);
    *((unsigned char*)obj + 0x14) = 0;
}
