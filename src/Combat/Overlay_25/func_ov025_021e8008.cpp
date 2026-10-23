#include <globaldefs.h>

extern int data_02109bf4;
extern "C" void func_0209c6d8(void*, int);

// USA: func_ov025_021e8008
extern "C" ARM int func_ov025_021e8008(void* arg0) {
    func_0209c6d8(&data_02109bf4, *(int*)((char*)arg0 + 0x8));
    return 1;
}
