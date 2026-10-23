#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_02042764(const char*, char*, int);
extern char data_020ef6ca;

// USA: func_02026528
extern "C" ARM void func_02026528(char* arg0, char* arg1) {
#if defined(jpn)
    if (arg1 != NULL && *arg1 != 0) {
        strcpy(arg0 + 0x698, arg1);
    } else {
        strcpy(arg0 + 0x698, &data_020ef6ca);
    }
#else
    if (arg1 != NULL && *arg1 != 0) {
        func_02042764(arg1, arg0 + 0x724, 1);
    } else {
        strcpy(arg0 + 0x724, &data_020ef6ca);
    }
#endif
}
