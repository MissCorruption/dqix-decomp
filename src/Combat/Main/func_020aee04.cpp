#include <globaldefs.h>

extern "C" unsigned short* func_02012fe4(void);
extern "C" void func_020ae694(int, int, unsigned short);
extern "C" void func_020ae4ec(int arg0, int arg1);

// USA: func_020aee04
extern "C" ARM void func_020aee04(int arg0, int arg1) {
    if (*func_02012fe4() != 0x1cea) return;
    if (arg0 == 1) {
        int var0 = 0x4e;
        for (; var0 <= 0x58; var0++) {
            func_020ae694((unsigned char)arg1, 0, var0);
        }
        func_020ae4ec(0x47, arg1 != 0);
    } else if (arg0 == 0) {
        int var1 = 0x37;
        for (; var1 <= 0x4b; var1++) {
            func_020ae694((unsigned char)arg1, 0, var1);
        }
        func_020ae4ec(0x48, arg1 != 0);
    }
}
