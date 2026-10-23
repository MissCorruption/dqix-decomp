#include <globaldefs.h>

extern "C" int func_0206dfb0(int, unsigned char*, int);

// USA: func_0206e384
extern "C" ARM unsigned short func_0206e384(unsigned char* obj) {
    unsigned short result = 0;
    int i;
    for (i = 0; i < 16; i++) {
        if (func_0206dfb0((int)obj, obj + 0x8c, i + 0xc02)) {
            result |= (1 << i);
        }
    }
    return result;
}
