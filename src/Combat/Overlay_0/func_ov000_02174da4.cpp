#include <globaldefs.h>
#include "std_library_functions.h"

extern int data_ov000_021833e8;

// USA: func_ov000_02174da4
extern "C" ARM void* func_ov000_02174da4(int arg0, void* arg1) {
    return memcpy(arg1, &data_ov000_021833e8, 0x10);
}
