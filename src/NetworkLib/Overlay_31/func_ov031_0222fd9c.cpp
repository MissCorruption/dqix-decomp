#include <globaldefs.h>

extern "C" char* func_ov031_02235c70(void);

// USA: func_ov031_0222fd9c
extern "C" ARM int func_ov031_0222fd9c(int arg0) {
    unsigned char* var0 = (unsigned char*)func_ov031_02235c70();
    int var1 = 1;
    switch (arg0) {
    case 7:
        if (var0[0xf5] == 0) var1 = 0;
        break;
    case 0:
    case 1: {
        unsigned char var2 = (unsigned char)(var0[0xe7] + 0xff);
        if (var2 <= 1) var1 = 0;
        break;
    }
    case 4:
    case 5:
    case 6:
        if (var0[0xf5] != 0) var1 = 0;
        break;
    case 9:
    case 10:
        if (var0[0xf6] != 0) var1 = 0;
        break;
    }
    return var1;
}
