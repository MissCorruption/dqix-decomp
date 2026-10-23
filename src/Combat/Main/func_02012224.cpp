#include <globaldefs.h>

extern "C" void func_0200f3a4(void*);
extern "C" int func_020998ac(int*);

// USA: func_02012224
extern "C" ARM char* func_02012224(char* arg0) {
    func_0200f3a4(arg0);
    func_020998ac((int*)(arg0 + 0x468));
    return arg0;
}
