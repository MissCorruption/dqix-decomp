#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0203e074
extern "C" ARM void func_0203e074(char* arg0) {
    memset(arg0 + 0x9e, 0, 0x140);
    *(short*)(arg0 + 0x1de) = 0;
    *(int*)(arg0 + 0x1e4) = 0;
}
