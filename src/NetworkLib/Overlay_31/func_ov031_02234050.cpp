#include <globaldefs.h>

extern unsigned char data_ov031_02290cd8;
extern "C" ARM void func_ov031_02227520(int* arg0, int* arg1);
extern "C" ARM unsigned int func_ov031_02227558(void);
extern "C" ARM void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_02227ce4(void);
extern "C" void func_ov031_02233f54(void);

// USA: func_ov031_02234050
extern "C" ARM void func_ov031_02234050(void) {
    unsigned char var0 = ++data_ov031_02290cd8;
    if (var0 < 0xb4) return;

    int var1;
    func_ov031_02227520(NULL, &var1);
    unsigned int var2 = func_ov031_02227558();
    if (var2 != 0 && var2 == 1 && var1 != 0) {
        func_ov031_022274c0((int)func_ov031_02227ce4);
    } else {
        func_ov031_022274c0((int)func_ov031_02233f54);
    }
}
