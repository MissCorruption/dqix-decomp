#include <globaldefs.h>

extern "C" void func_ov000_0216d560(void* arg0, int arg1);
extern "C" void func_0202e0a4(void* arg0);

// USA: func_ov000_0216d50c
extern "C" ARM void func_ov000_0216d50c(void* arg0) {
    int var0 = *(int*)((char*)arg0 + 0x224);
    if (var0 >= 0) {
        func_ov000_0216d560(arg0, var0);
    }
    func_0202e0a4(arg0);
}
