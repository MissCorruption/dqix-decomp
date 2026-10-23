#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02012084_29918 = 0x729e };
#else
enum { Enum_02012084_29918 = 0x74de };
#endif

#include "std_library_functions.h"

// USA: func_02012084
extern "C" ARM void* func_02012084(unsigned char* arg0) {
    return memset(arg0 + Enum_02012084_29918, 0, 0x20);
}
