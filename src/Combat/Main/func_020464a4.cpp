#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020464a4
extern "C" ARM void func_020464a4(char* arg0, char* arg1, int arg2) {
    if (arg0 == NULL || arg1 == NULL) return;
    strncpy(arg1, arg0, arg2 - 1);
    arg1[arg2 - 1] = 0;
}
