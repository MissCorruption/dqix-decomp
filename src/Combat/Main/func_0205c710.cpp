#include <globaldefs.h>

// USA: func_0205c710
extern "C" ARM unsigned int func_0205c710(unsigned char* obj) {
    unsigned int result = 0;
    if (obj[0x94] && obj[0x50]) result = *(unsigned int*)(obj + 0x18);
    if (obj[0x95]) result = *(unsigned int*)(obj + 0x68);
    return result;
}
