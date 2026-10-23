#include <globaldefs.h>

// USA: func_0202ea10
extern "C" ARM void func_0202ea10(unsigned char* obj, int a, int b) {
    if (b != 0) {
        *(int*)(obj + 0x1e4) = a;
        *(int*)(obj + 0x1e8) = b;
    }
}
