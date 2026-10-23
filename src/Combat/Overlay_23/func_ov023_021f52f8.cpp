#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov023_021f5410(void* arg0);
extern "C" int func_ov023_021f5340(void* arg0);

// USA: func_ov023_021f52f8
extern "C" ARM int func_ov023_021f52f8(void* arg0, void* arg1) {
    func_ov023_021f5410(arg0);
    memset(arg0, 0, 0xc);
    *(int*)((char*)arg0 + 0x10) = -1;
    func_ov023_021f5410(arg0);
    *(void**)((char*)arg0 + 0x14) = arg1;
    *(short*)((char*)arg0 + 0xc) = 1;
    return func_ov023_021f5340(arg0);
}
