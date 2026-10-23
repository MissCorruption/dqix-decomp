#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0204a4ac(void*);

// USA: func_0204a488
extern "C" ARM void func_0204a488(char* arg0, const char* arg1) {
    strcpy(arg0 + 0x244, arg1);
    *(int*)(arg0 + 0x25c) = -1;
    func_0204a4ac(arg0);
}
