#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" ARM int func_ov031_02222ddc(void);
extern "C" void func_ov031_0223c078(int, int, int, int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_022323f0(void);

// USA: func_ov031_022323a0
extern "C" ARM void func_ov031_022323a0(void) {
    if (func_ov031_0223c054(1) != 0) {
        return;
    }
    func_ov031_02222ddc();
    func_ov031_0223c078(3, 1, 1, 8);
    func_ov031_0223c078(3, 0, 0x15, 8);
    func_ov031_022274c0((int)func_ov031_022323f0);
}
