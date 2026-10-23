#include <globaldefs.h>

extern "C" void func_020464a4(char* arg0, char* arg1, int arg2);

// USA: func_0204653c
extern "C" ARM void func_0204653c(void* arg0, char* arg1) {
#if defined(jpn)
    func_020464a4(arg1, (char*)arg0 + 0x2fc, 0x40);
#else
    func_020464a4(arg1, (char*)arg0 + 0x42c, 0x40);
#endif
}
