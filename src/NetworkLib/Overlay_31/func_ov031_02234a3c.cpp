#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" void func_ov031_02223568(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_02234a68(void);

// USA: func_ov031_02234a3c
extern "C" ARM void func_ov031_02234a3c(void) {
    if (func_ov031_0223c054(0) != 0) {
        return;
    }
    func_ov031_02223568(2);
    func_ov031_022274c0((int)func_ov031_02234a68);
}
