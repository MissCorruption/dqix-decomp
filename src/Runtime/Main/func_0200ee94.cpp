#include <globaldefs.h>

typedef void (*Type_0200ee94)(void*);
extern "C" void func_0200ee38(void*, void*, unsigned int, Type_0200ee94);

// USA: func_0200ee94
extern "C" ARM void func_0200ee94(void* arg0, unsigned int arg1, unsigned int arg2, Type_0200ee94 arg3, Type_0200ee94 arg4) {
    if (arg3) {
        if (arg4) {
            unsigned char* var0 = static_cast<unsigned char*>(arg0);
            try {
                if (arg1) {
                    do {
                        arg3(var0);
                        var0 += arg2;
                    } while (--arg1);
                }
            } catch (...) {
                func_0200ee38(arg0, var0, arg2, arg4);
                throw;
            }
        } else {
            unsigned char* var1 = static_cast<unsigned char*>(arg0);
            if (arg1) {
                do {
                    arg3(var1);
                    var1 += arg2;
                } while (--arg1);
            }
        }
    }
}
