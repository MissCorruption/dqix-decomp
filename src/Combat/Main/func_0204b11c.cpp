#include <globaldefs.h>

// USA: func_0204b11c
extern "C" ARM void func_0204b11c(unsigned char* obj, int value) {
    *(int*)(obj + 0x18) = value;
    obj[0x1f] = 0;
}
