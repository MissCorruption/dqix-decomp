#include <globaldefs.h>

extern "C" int func_ov015_0218cc24(void* arg0, void* arg1);
extern "C" int func_ov015_0218d50c(void* arg0, void* arg1);
extern "C" int func_ov015_0218dbec(void* arg0, void* arg1);
extern "C" int func_ov015_0218df0c(void* arg0, void* arg1);
extern "C" int func_ov015_0218e02c(void* arg0, void* arg1);
extern "C" int func_ov015_0218e2a4(void* arg0, void* arg1);

// USA: func_ov015_0218f27c
extern "C" ARM int func_ov015_0218f27c(void* arg0, void* arg1) {
    int var0 = 1;
    unsigned char var1 = *(unsigned char*)((char*)arg0 + 0x1c);
    switch (var1) {
    case 0:
        var0 = func_ov015_0218cc24(arg0, arg1);
        break;
    case 1:
        var0 = func_ov015_0218d50c(arg0, arg1);
        break;
    case 3:
        var0 = func_ov015_0218dbec(arg0, arg1);
        break;
    case 2:
        var0 = func_ov015_0218df0c(arg0, arg1);
        break;
    case 4:
        var0 = func_ov015_0218e02c(arg0, arg1);
        break;
    case 5:
        var0 = func_ov015_0218e2a4(arg0, arg1);
        break;
    case 6:
        var0 = func_ov015_0218e2a4(arg0, arg1);
        break;
    }
    return var0;
}
