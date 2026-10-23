#include <globaldefs.h>

extern "C" void func_ov023_021f66bc(void* arg0, int arg1, void* arg2);
extern "C" void* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" void* func_02012fe4(void);
extern "C" void func_02017d68(void* arg0);

// USA: func_ov004_02162d78
extern "C" ARM int func_ov004_02162d78(void* arg0) {
    func_ov023_021f66bc(arg0, 0x83, (void*)1);
    for (int var0 = 0; var0 < 9; var0++) {
        unsigned char* var1 = (unsigned char*)func_ov004_0215e47c(arg0, 0x83 + var0);
        if (var1 != NULL) var1[0xc] &= ~0x20;
    }
    func_ov011_021848a0(arg0, 0x69);
    func_02017d68(func_02012fe4());
    return 0;
}
