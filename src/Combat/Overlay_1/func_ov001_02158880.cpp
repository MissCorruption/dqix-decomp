#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov001_021588e4(void* arg0);

// USA: func_ov001_02158880
extern "C" ARM void func_ov001_02158880(void* arg0) {
    *(int*)((char*)arg0 + 0x0) = 0;
    *(int*)((char*)arg0 + 0x4) = 0;
    memset((char*)arg0 + 0x4c, 0, 0xc);
    memset((char*)arg0 + 0x58, 0, 0xc);
    func_ov001_021588e4(arg0);
}
