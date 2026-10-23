#include <globaldefs.h>

extern "C" void func_020464a4(char* arg0, char* arg1, int arg2);

#if defined(jpn)
enum { Enum_02046504_940 = 0x27c };
#else
enum { Enum_02046504_940 = 0x3ac };
#endif

// USA: func_02046504
extern "C" ARM void func_02046504(char* arg0, char* arg1) {
    func_020464a4(arg1, arg0 + Enum_02046504_940, 0x40);
}
