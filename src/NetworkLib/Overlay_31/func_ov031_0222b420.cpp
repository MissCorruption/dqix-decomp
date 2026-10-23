#include <globaldefs.h>

extern "C" void func_ov031_022368e0(void);
extern "C" void func_ov031_02236878(int);
extern unsigned char data_ov031_02290c80;
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_0222b1f0(void);

// USA: func_ov031_0222b420
extern "C" ARM void func_ov031_0222b420(void) {
    func_ov031_022368e0();
    func_ov031_02236878(7);
    data_ov031_02290c80 = 0;
    func_ov031_022274c0((int)func_ov031_0222b1f0);
}
