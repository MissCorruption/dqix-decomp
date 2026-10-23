#include <globaldefs.h>

extern "C" void func_020464a4(char* arg0, char* arg1, int arg2);

// USA: func_02046558
extern "C" ARM void func_02046558(void* arg0, char* arg1) {
    func_020464a4(arg1, (char*)arg0 + 0x46c, 0x40);
}
