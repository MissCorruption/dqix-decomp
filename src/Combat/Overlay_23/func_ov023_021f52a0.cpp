#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov023_021f5410(void*);

// USA: func_ov023_021f52a0
extern "C" ARM void func_ov023_021f52a0(void* arg0) {
    memset(arg0, 0, 0xc);
    *(int*)((char*)arg0 + 0x10) = -1;
    func_ov023_021f5410(arg0);
}
