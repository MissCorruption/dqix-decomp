#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020e51cc(int arg0);
extern "C" int func_020420e8(char*, int);

#if defined(jpn)
#define data_020ef6c5 data_020ef5b0
#endif
extern char data_020ef6b5;
extern char data_020ef6c5;

// USA: func_02026470
extern "C" ARM void func_02026470(void* arg0, int arg1) {
    if (arg1 == 0) {
        strcpy((char*)arg0 + 0x5f4, &data_020ef6b5);
    } else {
#if defined(jpn)
        sprintf((char*)arg0 + 0x5f4, &data_020ef6c5, arg1);
#else
        const char* var0 = (const char*)func_020e51cc(0x3f3);
        sprintf((char*)arg0 + 0x5f4, &data_020ef6c5, var0, arg1);
#endif
    }
#if !defined(jpn)
    int var1 = func_020420e8((char*)arg0 + 0x5f4, 0);
    *(int*)((char*)arg0 + 0xbe4) += var1 + 4;
#endif
}
