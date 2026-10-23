#include <globaldefs.h>

extern "C" void func_020c99ac(void*);
extern "C" int func_ov031_0223fc7c(char*, unsigned int, int);
extern "C" int func_ov031_0223e454(void*, const void*, int);

// USA: func_ov031_0223fae8
extern "C" ARM void func_ov031_0223fae8(void* arg0) {
    unsigned char var0[6];
    char var1[12];
    func_020c99ac(var0);
    for (int var2 = 0; var2 < 6; var2++) {
        func_ov031_0223fc7c(var1 + var2 * 2, var0[var2], 2);
    }
    func_ov031_0223e454(arg0, var1, 12);
}
