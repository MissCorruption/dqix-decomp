#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_02231a9c(void);

// USA: func_ov031_02231a78
extern "C" ARM void func_ov031_02231a78(void) {
    if (func_ov031_0223c054(0) != 0) {
        return;
    }
    func_ov031_022274c0((int)func_ov031_02231a9c);
}
