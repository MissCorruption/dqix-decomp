#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define data_020ef6bc data_020ef59f
#endif
extern char data_020ef6bc;

extern "C" {
    int func_020420e8(char*, int);
}

// USA: func_02026428
extern "C" ARM void func_02026428(void* arg0, const char* arg1) {
    if (arg1 == NULL)
        strcpy((char*)arg0 + 0x5b4, &data_020ef6bc);
    else
        strcpy((char*)arg0 + 0x5b4, arg1);
#if !defined(jpn)
    *(int*)((char*)arg0 + 0xbe4) = func_020420e8((char*)arg0 + 0x5b4, 0);
#endif
}
