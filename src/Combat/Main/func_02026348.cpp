#include <globaldefs.h>

#if defined(jpn)
#define data_020fdcce data_020fda36
#define LIST_VALUES 0x6ac
#define LIST_COUNT 0x6b0
#else
#define LIST_VALUES 0x758
#define LIST_COUNT 0x75c
#endif
extern unsigned char data_020fdcce;

// USA: func_02026348
extern "C" ARM void func_02026348(char* arg0, unsigned char* arg1, int arg2) {
    int var0;
    if ((unsigned int)arg2 > 4) {
        arg0[LIST_COUNT] = 0;
        return;
    }
    for (var0 = 0; var0 < arg2; var0++) {
        char* var1 = arg0 + var0;
        unsigned char var2 = arg1[var0];
        var1[LIST_VALUES] = var2;
        (&data_020fdcce)[var2 << 5] = 1;
    }
    arg0[LIST_COUNT] = arg2;
}

