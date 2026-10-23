#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern unsigned char data_ov031_02290ce4;
extern "C" int func_ov031_02222e54(void);
extern "C" void func_ov031_02237600(void);
extern "C" void func_ov031_02222bdc(void);
extern "C" void* func_ov031_0223c7c4(int);
extern "C" int func_ov031_02223440(void);
extern "C" void func_ov031_0223cbbc(int, int);
extern "C" void func_ov031_022274d0(int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02234520(void);
extern "C" void func_ov031_02234314(void);
extern "C" void func_ov031_02232508(void);

// USA: func_ov031_02234bb8
extern "C" ARM void func_ov031_02234bb8(void) {
    if (func_ov031_0223c054(0)) return;
    if (data_ov031_02290ce4 == 2) {
        if (func_ov031_0223c054(1)) return;
    }
    if (!func_ov031_02222e54()) return;
    func_ov031_02237600();
    func_ov031_02222bdc();
    func_ov031_0223c7c4(0);
    if (data_ov031_02290ce4 == 2 || data_ov031_02290ce4 == 3) {
        func_ov031_02223440();
        func_ov031_0223cbbc(1, 1);
    }
    func_ov031_0223cbbc(0, 0x15);
    if (data_ov031_02290ce4 == 2) {
        func_ov031_022274d0(2, 1);
        func_ov031_022274c0((int)func_ov031_02232508);
        return;
    }
    if (data_ov031_02290ce4 == 3) {
        func_ov031_022274d0(2, 1);
        func_ov031_022274c0((int)func_ov031_02234520);
        return;
    }
    func_ov031_022274d0(0, 0);
    func_ov031_022274c0((int)func_ov031_02234314);
}
