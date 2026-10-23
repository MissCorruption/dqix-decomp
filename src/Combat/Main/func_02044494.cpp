#include <globaldefs.h>
#include "Resource/MessageUpdate.h"
#include "std_library_functions.h"

#if defined(jpn)
extern "C" ARM int func_02069430(void* arg0, unsigned short arg1) {
    return (arg1 & 0xff00) == 0xff00;
}
#else
// USA: func_02044494
extern "C" ARM bool func_02044494(void* arg0, void* arg1) {
    unsigned short var0;
    memcpy(&var0, arg1, 2);
    return (var0 & 0xff00) == 0xff00;
}

#endif
