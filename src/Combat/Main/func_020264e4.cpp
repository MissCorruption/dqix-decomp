#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_02042764(const char*, char*, int);
extern char data_020ef6ca;

// USA: func_020264e4
extern "C" ARM void func_020264e4(char* arg0, char* arg1) {
#if defined(jpn)
    if (arg1 != NULL && *arg1 != 0) {
        strcpy(arg0 + 0x688, arg1);
    } else {
        strcpy(arg0 + 0x688, &data_020ef6ca);
    }
#else
    if (arg1 != NULL && *arg1 != 0) {
        func_02042764(arg1, arg0 + 0x6f4, 1);
    } else {
        strcpy(arg0 + 0x6f4, &data_020ef6ca);
    }
#endif
}
