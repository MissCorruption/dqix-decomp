#include <globaldefs.h>

// USA: func_0205c6e4
extern "C" ARM unsigned int func_0205c6e4(unsigned char* obj) {
    unsigned int result = 0;
    if (obj[0x94] && obj[0x50]) result = *(unsigned int*)(obj + 0x8);
    if (obj[0x95]) result = *(unsigned int*)(obj + 0x58);
    return result;
}
