#include <globaldefs.h>

extern "C" void func_020a1940(int);
extern volatile unsigned char data_02109da4;
extern signed char data_02109dae[];
extern signed char data_020f1962[];

// USA: func_020a1e54
extern "C" ARM void func_020a1e54(int arg0) {
    if (data_02109da4 == 0) return;
    data_02109da4--;
    if (arg0 == 0 || data_02109da4 == 0) return;
    signed char var0 = data_02109dae[data_02109da4 - 1];
    func_020a1940(data_020f1962[var0]);
}
