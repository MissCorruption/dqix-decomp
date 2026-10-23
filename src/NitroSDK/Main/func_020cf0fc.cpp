#include <globaldefs.h>
extern "C" int func_020cf08c(int, int, int);

extern char data_02111818;
extern "C" void func_020cf864(void);
extern "C" void func_020cf854(int arg0);

// USA: func_020cf0fc
extern "C" ARM int func_020cf0fc(int arg0) {
    int var0 = func_020cf08c((int)(arg0), (int)(func_020cf854), (int)(0));
    *(int*)(&data_02111818 + 0x2c) = var0;
    if (var0 == 0) {
        func_020cf864();
    }
    return *(int*)(&data_02111818 + 0x2c);
}
