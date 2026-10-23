#include <globaldefs.h>
extern "C" void func_020dc70c(int, int, int, int, unsigned short, unsigned short, unsigned int);
static inline int inline_020dc7e8(unsigned int arg0) { return arg0 >= 6; }
// USA: func_020dc7e8
extern "C" ARM void func_020dc7e8(unsigned int arg0, int arg1) {
    int var0;
    int var1 = 0;
    unsigned short var2 = 0;
    unsigned short var3 = 0;
    var0 = 15;
    unsigned int var4 = 2;
    int var5 = inline_020dc7e8(arg0);
    switch (arg0) {
    case 0: var1 = 1; var2 = 2; var3 = 9; break;
    case 1: var2 = 6; var3 = 14; break;
    case 2: var0 = 0; var1 = 1; var2 = 12; var4 = 32; break;
    case 3: var1 = 1; var3 = 13; break;
    case 4: var3 = 13; break;
    case 5: var2 = 2; var3 = 4; break;
    case 6: var1 = 1; var3 = 2; break;
    case 7: var1 = 1; var2 = 4; var3 = 3; break;
    case 8: var2 = 9; var3 = 15; break;
    }
    if (arg1 < 0) {
        signed char var6 = 0;
        while (var6 < 4) {
            func_020dc70c(var6, var0, var1, var5, var2, var3, var4);
            var2++;
            var6++;
        }
    } else func_020dc70c(arg1, var0, var1, var5, var2, var3, var4);
}
