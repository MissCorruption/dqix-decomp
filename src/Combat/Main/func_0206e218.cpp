#include <globaldefs.h>

extern "C" void func_0206e164(void* arg0, int arg1, int arg2);

// USA: func_0206e218
extern "C" ARM void func_0206e218(unsigned char* arg0, int arg1) {
    unsigned char* var0;
    int var1;
    if (arg1 >= 0xcc) return;
    if (arg1 < 0) return;
    var1 = arg1 / 2;
    var0 = arg0 + 0x2cc;
    var0[var1] |= (arg1 % 2) ? 0x40 : 0x4;
    func_0206e164(arg0, arg1, 1);
}
