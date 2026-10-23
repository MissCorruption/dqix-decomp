#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_02233f40(void);

// USA: func_ov031_02233f1c
extern "C" ARM void func_ov031_02233f1c(void) {
    if (func_ov031_0223c054(0) != 0) {
        return;
    }
    func_ov031_022274c0((int)func_ov031_02233f40);
}
