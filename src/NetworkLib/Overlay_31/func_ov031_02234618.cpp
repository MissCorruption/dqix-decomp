#include <globaldefs.h>

extern "C" void func_ov031_0223c078(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov031_0223cb68(int arg0, int arg1);
extern "C" ARM void func_ov031_022274c0(int arg0);
extern "C" ARM void func_ov031_0223466c(void);

// USA: func_ov031_02234618
extern "C" ARM void func_ov031_02234618(void) {
    func_ov031_0223c078(2, 1, 1, 8);
    func_ov031_0223c078(2, 0, 0x15, 8);
    func_ov031_0223cb68(1, 1);
    func_ov031_0223cb68(0, 0x15);
    func_ov031_022274c0((int)func_ov031_0223466c);
}
