#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_02011ab8
extern "C" ARM void func_02011ab8(char* arg0) {
#if defined(jpn)
    VectorizedMemset(arg0 + 0x621e, 0, 0x80);
#else
    VectorizedMemset(arg0 + 0x649e, 0, 0x40);
#endif
}
