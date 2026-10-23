#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_021d6134(void*, short);

// USA: func_ov023_021ea978
extern "C" ARM int func_ov023_021ea978(void* arg0) {
    short var0 = *(short*)func_02012fe4();
    func_ov017_021d6134(arg0, (short)(var0 - var0 % 100));
    return 1;
}
