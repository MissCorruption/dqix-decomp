#include <globaldefs.h>

extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);

// USA: func_0209ca70
extern "C" ARM void func_0209ca70(void* arg0, int arg1) {
    if (arg1 < 1) return;
    if (arg1 > 5) return;
    *(unsigned char*)((char*)arg0 + 0xcc) = arg1;
    func_0209c2e0(arg0, *(unsigned char*)((char*)arg0 + 0xcd), 0);
}
