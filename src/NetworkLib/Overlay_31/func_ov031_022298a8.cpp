#include <globaldefs.h>

extern "C" void func_ov031_0223c078(int, int, int, int);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_022298d0(void);

// USA: func_ov031_022298a8
extern "C" ARM void func_ov031_022298a8(void) {
    func_ov031_0223c078(3, 0, 0x15, 8);
    func_ov031_022274c0((int)func_ov031_022298d0);
}
