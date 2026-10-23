#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern char data_021015a0;
extern "C" void func_020c9be0(void);

// USA: func_0202dae0
extern "C" ARM void func_0202dae0(unsigned short* arg0) {
    if (arg0[1] != 8) return;
    *(int*)(&data_021015a0 + 0x10) = 9;
    func_020c9be0();
}
