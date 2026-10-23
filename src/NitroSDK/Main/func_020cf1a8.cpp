#include <globaldefs.h>

extern char data_02111818;
extern "C" int func_020cf134(int a, void (*cb)(int), int c);
extern "C" void func_020cf864(void);
extern "C" void func_020cf854(int val);

// USA: func_020cf1a8
extern "C" ARM int func_020cf1a8(int a) {
    int result = func_020cf134(a, func_020cf854, 0);
    *(int*)(&data_02111818 + 0x2c) = result;
    if (result == 0) {
        func_020cf864();
    }
    return *(int*)(&data_02111818 + 0x2c);
}
