#include <globaldefs.h>

extern "C" void* func_0207f100(unsigned char* arg0, short arg1);

// USA: func_020810b4
extern "C" ARM void* func_020810b4(unsigned char* arg0, short arg1) {
    short var0 = *(short*)(arg0 + 0x10);
    short var1;
    for (var1 = 0; var1 < var0; var1++) {
        unsigned char* var2 = (unsigned char*)func_0207f100(arg0 + 0xc, var1);
        if (var2 == NULL) {
            continue;
        }
        {
            unsigned char var3 = 0;
            while (var3 < var2[0x13]) {
                short* var4 = *(short**)(var2 + 0);
                if (arg1 == var4[var3]) {
                    return var2;
                }
                var3 = var3 + 1;
            }
        }
    }
    return NULL;
}
