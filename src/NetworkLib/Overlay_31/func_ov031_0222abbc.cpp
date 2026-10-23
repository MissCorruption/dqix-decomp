#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" void func_ov031_02223568(int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_0222abe8(void);

// USA: func_ov031_0222abbc
extern "C" ARM void func_ov031_0222abbc(void) {
    if (func_ov031_0223c054(0) != 0) {
        return;
    }
    func_ov031_02223568(1);
    func_ov031_022274c0((int)func_ov031_0222abe8);
}
