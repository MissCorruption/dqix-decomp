#include <globaldefs.h>

extern char data_020fe9cc;

// USA: func_0202ad4c
extern "C" ARM void func_0202ad4c(int arg0, int arg1, int arg2, char* arg3) {
    int var0 = arg0;
    while (*arg3 != 0) {
        *(unsigned short*)((&data_020fe9cc + (arg1 << 6)) + var0 * 2) =
            (unsigned short)(signed char)*arg3 | (unsigned short)(arg2 << 12);
        var0++;
        if (var0 >= 0x100) {
            return;
        }
        arg3 = arg3 + 1;
    }
}
