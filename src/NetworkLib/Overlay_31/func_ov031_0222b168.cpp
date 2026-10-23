#include <globaldefs.h>

extern "C" int func_ov031_0223d354(int);
extern "C" void func_ov031_02222e20(int);
extern "C" int func_ov031_0222ae94(void);

// USA: func_ov031_0222b168
extern "C" ARM void func_ov031_0222b168(void) {
    if (func_ov031_0223d354(2)) {
        func_ov031_02222e20(0);
        return;
    }
    if (func_ov031_0222ae94() == 0) return;
    func_ov031_02222e20(0);
}
