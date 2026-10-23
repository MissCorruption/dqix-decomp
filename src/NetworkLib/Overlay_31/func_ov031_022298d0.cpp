#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" int func_ov031_02227840(void);
extern "C" void func_ov031_02223b1c(void);
extern "C" void func_ov031_02222bdc(void);
extern "C" void* func_ov031_0223c7c4(int);
extern "C" void func_ov031_0223cbbc(int, int);
extern "C" void func_ov031_022274d0(int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222a35c(void);
extern "C" ARM void func_ov031_0222a174(void);
extern "C" ARM void func_ov031_022299ec(void);
extern unsigned char data_ov031_02290c68;

// USA: func_ov031_022298d0
extern "C" ARM void func_ov031_022298d0(void) {
    if (func_ov031_0223c054(0) != 0) return;
    if (func_ov031_02227840() == 0) return;
    func_ov031_02223b1c();
    func_ov031_02222bdc();
    func_ov031_0223c7c4(0);
    func_ov031_0223cbbc(0, 0x15);
    func_ov031_022274d0(0, 1);

    if (data_ov031_02290c68 == 0) {
        func_ov031_022274c0((int)func_ov031_0222a35c);
    } else if (data_ov031_02290c68 == 2) {
        func_ov031_022274c0((int)func_ov031_0222a174);
    } else {
        func_ov031_022274c0((int)func_ov031_022299ec);
    }
}
