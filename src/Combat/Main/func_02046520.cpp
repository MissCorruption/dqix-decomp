#include <globaldefs.h>

extern "C" void func_020464a4(char* arg0, char* arg1, int arg2);

#if defined(jpn)
enum { Enum_02046520_1004 = 0x2bc };
#else
enum { Enum_02046520_1004 = 0x3ec };
#endif

// USA: func_02046520
extern "C" ARM void func_02046520(char* arg0, char* arg1) {
    func_020464a4(arg1, arg0 + Enum_02046520_1004, 0x40);
}
