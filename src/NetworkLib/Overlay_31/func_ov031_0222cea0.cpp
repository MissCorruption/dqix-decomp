#include <globaldefs.h>

extern "C" ARM unsigned char func_ov031_02223fa0(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" ARM void func_ov031_0222cec0(void);

// USA: func_ov031_0222cea0
extern "C" ARM void func_ov031_0222cea0(void) {
    if (func_ov031_02223fa0() == 0xff) return;
    func_ov031_022274c0((int)func_ov031_0222cec0);
}
