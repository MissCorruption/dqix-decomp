#include <globaldefs.h>

extern "C" int func_0200d8a8(void);

// USA: func_0200d8cc
extern "C" ARM int func_0200d8cc(int arg0, unsigned char* arg1, unsigned int* arg2) {
    unsigned int var0 = 0;
    unsigned int var1 = *arg2;
    if (var0 >= var1) goto end;
    do {
        int var2 = func_0200d8a8();
        int var3 = var2 & 0xff;
        arg1[var0] = (unsigned char)var2;
        if (var3 == 0xd || var3 == 0xa) {
            *arg2 = var0 + 1;
            goto end;
        }
        var0++;
    } while (var0 < var1);
end:
    return 0;
}
