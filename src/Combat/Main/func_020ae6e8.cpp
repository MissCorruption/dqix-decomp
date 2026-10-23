#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" void func_020ae694(int mode, int key1, unsigned short key2);
extern "C" void func_020ae4ec(int id, int flag);

// USA: func_020ae6e8
extern "C" ARM void func_020ae6e8(int enable) {
    if (*(unsigned short*)func_02012fe4() != 0x2010) return;
    func_020ae694(enable, 0, 2);
    func_020ae4ec(0, enable == 0);
}
