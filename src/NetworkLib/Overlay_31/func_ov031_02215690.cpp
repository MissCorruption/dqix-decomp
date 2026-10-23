#include <globaldefs.h>

extern "C" ARM unsigned int func_ov031_022135ac(unsigned int arg0);
extern "C" ARM unsigned int func_ov031_022155e8(unsigned char* arg0);
extern "C" ARM int func_ov031_02207538(unsigned int* arg0, unsigned int* arg1);

// USA: func_ov031_02215690
extern "C" ARM void func_ov031_02215690(unsigned char* arg0) {
    if (arg0[0xd0d] < 6) {
        arg0 += func_ov031_022135ac(arg0[0xd0d]) << 8;
    } else {
        return;
    }
    unsigned char var0 = arg0[0xc0];
    int var1 = arg0[0xc8] + arg0[0xc9] + arg0[0xca] + arg0[0xcb];
    if (var0 != 0) {
        return;
    }
    if (var1 == 0) {
        return;
    }
    unsigned int var2 = func_ov031_022155e8(arg0 + 0xc8);
    unsigned int var3 = func_ov031_022155e8(arg0 + 0xcc);
    func_ov031_02207538(&var2, &var3);
}
