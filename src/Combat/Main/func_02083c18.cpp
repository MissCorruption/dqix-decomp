#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02083c18
extern "C" ARM void func_02083c18(char* arg0) {
#if defined(jpn)
    memset(arg0 + 0x854, 0, 0x24);
#else
    memset(arg0 + 0x8ec, 0, 0x24);
#endif
#if defined(jpn)
    memset(arg0 + 0x878, 0, 9);
#else
    memset(arg0 + 0x910, 0, 9);
#endif
}
