#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov000_02160030
extern "C" ARM void func_ov000_02160030(void* arg0) {
    memset(arg0, 0, 0x28);
    *(short*)((char*)arg0 + 0x6) = -1;
    memset((char*)arg0 + 0x18, 0, 0xe);
    *(short*)((char*)arg0 + 0x24) = 0;
}
