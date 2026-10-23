#include <globaldefs.h>

extern "C" ARM signed char func_ov031_02237e9c(void);
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_02237e58(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_0222d6dc(void);

// USA: func_ov031_0222d6b0
extern "C" ARM void func_ov031_0222d6b0(void) {
    if (func_ov031_02237e9c() != 0) {
        return;
    }
    func_ov031_02236878(6);
    func_ov031_02237e58();
    func_ov031_022274c0((int)func_ov031_0222d6dc);
}
