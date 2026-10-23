#include <globaldefs.h>

extern "C" void func_ov015_0218e810(void* arg0);
extern "C" void func_ov015_0218eb04(void* arg0);
extern "C" void func_ov015_0218ecd8(void* arg0);
extern "C" void func_ov015_0218edcc(void* arg0);
extern "C" void func_ov015_0218ee38(void* arg0);

// USA: func_ov015_0218f22c
extern "C" ARM void func_ov015_0218f22c(void* arg0) {
    unsigned char var0 = *(unsigned char*)((char*)arg0 + 0x1c);
    switch (var0) {
    case 0:
        func_ov015_0218e810(arg0);
        break;
    case 1:
        func_ov015_0218eb04(arg0);
        break;
    case 3:
        func_ov015_0218ecd8(arg0);
        break;
    case 2:
        func_ov015_0218edcc(arg0);
        break;
    case 4:
        func_ov015_0218ee38(arg0);
        break;
    }
}
