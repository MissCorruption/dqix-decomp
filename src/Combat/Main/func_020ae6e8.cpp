#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" void func_020ae694(int arg0, int arg1, unsigned short arg2);
extern "C" void func_020ae4ec(int arg0, int arg1);

// USA: func_020ae6e8
extern "C" ARM void func_020ae6e8(int arg0) {
    if (*(unsigned short*)func_02012fe4() != 0x2010) return;
    func_020ae694(arg0, 0, 2);
    func_020ae4ec(0, arg0 == 0);
}
