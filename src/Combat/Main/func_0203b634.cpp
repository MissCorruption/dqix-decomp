#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0203b634
extern "C" ARM void func_0203b634(char* obj) {
    memset(obj, 0, 0x20);
    memset(obj + 0x20, 0, 0x20);
    memset(obj + 0x40, 0, 0x20);
}
