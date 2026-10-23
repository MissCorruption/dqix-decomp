#include <globaldefs.h>

extern "C" void func_0200efb8();

// USA: func_0200ef44
extern "C" ARM void func_0200ef44(unsigned char* arg0, unsigned int arg1,
    unsigned int arg2, void (*arg3)(void*))
{
    if (arg3) {
        unsigned char* var0 = arg0 + arg1 * arg2;
        try {
            if (arg1) {
                do {
                    var0 -= arg2;
                    arg3(var0);
                } while (--arg1);
            }
        } catch (...) {
            func_0200efb8();
        }
    }
}
