#include <globaldefs.h>

extern "C" void func_020464a4(char* arg0, char* arg1, int arg2);

// USA: func_020464e8
#if defined(jpn)
extern "C" ARM void func_020464e8(char* arg0, char* arg1) {
    func_020464a4(arg1, arg0 + 0x23c, 0x40);
}
#else
extern "C" ARM void func_020464e8(char* arg0, int arg1, char* arg2) {
    func_020464a4(arg2, arg0 + 0x2ec + arg1 * 0x40, 0x40);
}
#endif
