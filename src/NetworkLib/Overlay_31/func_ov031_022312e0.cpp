#include <globaldefs.h>

extern "C" ARM int func_ov031_02222e0c(void);
extern "C" void func_ov031_022368e0(void);
extern "C" void func_ov031_02236878(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_0223130c(void);

// USA: func_ov031_022312e0
extern "C" ARM void func_ov031_022312e0(void) {
    if (func_ov031_02222e0c() != 0) {
        return;
    }
    func_ov031_022368e0();
    func_ov031_02236878(7);
    func_ov031_022274c0((int)func_ov031_0223130c);
}
