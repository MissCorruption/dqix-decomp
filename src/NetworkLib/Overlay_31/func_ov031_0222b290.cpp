#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int arg0);
extern "C" int func_ov031_02222e54(void);
extern "C" void func_ov031_02226f18(int arg0);
extern "C" void func_ov031_02222bdc(void);
extern "C" void* func_ov031_0223c7c4(int arg0);
extern "C" void func_ov031_02223440(void);
extern "C" void func_ov031_0223cbbc(int arg0, int arg1);
extern "C" void func_ov031_022274d0(int arg0, int arg1);
extern "C" void func_ov031_022274c0(int arg0);

extern unsigned char data_ov031_02290c80;
extern "C" void func_ov031_02233248(void);
extern "C" void func_ov031_0222b450(void);

// USA: func_ov031_0222b290
extern "C" ARM void func_ov031_0222b290(void) {
    if (func_ov031_0223c054(0) != 0) return;
    if (data_ov031_02290c80 == 0) {
        if (func_ov031_0223c054(1) != 0) return;
    }

    if (func_ov031_02222e54() == 0) return;

    func_ov031_02226f18(data_ov031_02290c80 != 0 ? 1 : 0);
    func_ov031_02222bdc();
    func_ov031_0223c7c4(0);

    if (data_ov031_02290c80 == 0) {
        func_ov031_02223440();
        func_ov031_0223cbbc(1, 1);
    }
    func_ov031_0223cbbc(0, 0x15);

    if (data_ov031_02290c80 == 0) {
        func_ov031_022274d0(2, 1);
        func_ov031_022274c0((int)func_ov031_02233248);
    } else {
        func_ov031_022274d0(0, 0);
        func_ov031_022274c0((int)func_ov031_0222b450);
    }
}
