#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" void func_ov031_0222785c(int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02229964(void);
extern "C" void func_ov031_02229890(void);

// USA: func_ov031_02229860
extern "C" ARM void func_ov031_02229860(void) {
    if (func_ov031_0223c054(0) != 0) {
        return;
    }
    func_ov031_0222785c((int)func_ov031_02229964);
    func_ov031_022274c0((int)func_ov031_02229890);
}
