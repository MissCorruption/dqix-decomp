#include <globaldefs.h>

extern "C" int func_ov031_02237eb0(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_022287d4(void);

// USA: func_ov031_02228960
extern "C" ARM void func_ov031_02228960(void) {
    if (func_ov031_02237eb0() != 0) {
        return;
    }
    func_ov031_022274c0((int)func_ov031_022287d4);
}
