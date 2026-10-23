#include <globaldefs.h>

typedef void (*Type_0200ee38)(void*);
extern "C" void func_0200efb8();

// USA: func_0200ee38
extern "C" ARM void func_0200ee38(unsigned char* arg0, unsigned char* arg1,
    unsigned int arg2, Type_0200ee38 arg3)
{
    try {
        if (arg1 > arg0) {
            do {
                arg1 -= arg2;
                arg3(arg1);
            } while (arg1 > arg0);
        }
    } catch (...) {
        func_0200efb8();
    }
}
