#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);
extern "C" void* func_020bd42c(void* arg0);
extern "C" int func_020bd8ac(unsigned int arg0);
extern "C" void func_020bd8d4(unsigned int arg0, int arg1);

// USA: func_020be3f4
extern "C" ARM void func_020be3f4(int arg0, void* arg1, unsigned int arg2) {
    if (arg1 == NULL) return;
    void* var0;
    unsigned int var1 = DisableIRQInterrupts();
    var0 = func_020bd42c(arg1);
    int var2 = func_020bd8ac(arg2);
    if (arg0 == var2) {
        func_020bd8d4(arg2, 0);
    }
    func_020bd42c(var0);
    SetIRQInterruptState(var1);
}
