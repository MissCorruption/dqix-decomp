#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern char data_021015a0;
extern "C" void func_020c9be0(void);

// USA: func_0202dae0
ARM void SetState9IfField0x2Is8_0202dae0(unsigned short* obj) {
    if (obj[1] != 8) return;
    *(int*)(&data_021015a0 + 0x10) = 9;
    func_020c9be0();
}
