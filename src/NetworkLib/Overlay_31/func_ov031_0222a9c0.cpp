#include <globaldefs.h>

extern "C" int func_ov031_02227840(void);
extern "C" void* func_ov031_0223c7c4(int);
extern "C" void func_ov031_0223cbbc(int, int);
extern "C" void func_ov031_02223440(void);
extern "C" void func_ov031_022274d0(int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222a35c(void);
extern "C" void func_ov031_0222905c(void);
extern "C" void func_ov031_02229774(void);
extern unsigned char data_ov031_02290c78[2];

// USA: func_ov031_0222a9c0
extern "C" ARM void func_ov031_0222a9c0(void) {
    if (data_ov031_02290c78[0] != 0 || data_ov031_02290c78[1] == 0) {
        if (func_ov031_02227840() == 0) return;
    }
    func_ov031_0223c7c4(0);
    func_ov031_0223cbbc(0, 0x15);
    if (data_ov031_02290c78[1] == 0) {
        func_ov031_02223440();
        func_ov031_0223cbbc(1, 1);
    }
    func_ov031_022274d0(0, 1);
    if (data_ov031_02290c78[0] != 0) {
        func_ov031_022274c0((int)func_ov031_0222a35c);
        return;
    }
    if (data_ov031_02290c78[1] == 0) {
        func_ov031_0223cbbc(1, 1);
        func_ov031_022274c0((int)func_ov031_0222905c);
        return;
    }
    func_ov031_022274c0((int)func_ov031_02229774);
}
