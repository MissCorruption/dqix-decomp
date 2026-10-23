#include <globaldefs.h>

extern "C" int func_0206dfb0(int, unsigned char*, int);

// USA: func_0206e384
extern "C" ARM unsigned short func_0206e384(unsigned char* arg0) {
    unsigned short var0 = 0;
    int var1;
    for (var1 = 0; var1 < 16; var1++) {
        if (func_0206dfb0((int)arg0, arg0 + 0x8c, var1 + 0xc02)) {
            var0 |= (1 << var1);
        }
    }
    return var0;
}
