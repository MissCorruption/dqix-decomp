#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov000_02157cdc
extern "C" ARM void func_ov000_02157cdc(void* arg0) {
    memset(arg0, 0, 0x20);
    memset((char*)arg0 + 0xe, -1, 6);
    *(short*)((char*)arg0 + 0xc) = -1;
    *(int*)((char*)arg0 + 0x20) = 0;
}
