#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" void func_020ae694(int arg0, int arg1, unsigned short arg2);
extern "C" void func_020ae4ec(int arg0, int arg1);

// USA: func_020ae990
extern "C" ARM void func_020ae990(int arg0) {
    if (*(unsigned short*)func_02012fe4() != 0x1647) return;
    if (arg0 == 0) {
        func_020ae694(1, 0, 4);
    } else {
        func_020ae694(0, 0, 4);
    }
    func_020ae4ec(0x2e, arg0 != 0);
}
