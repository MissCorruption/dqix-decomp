#include <globaldefs.h>

extern "C" void func_020bb740(int* arg0);
extern "C" void func_020bb92c(int* arg0);

// USA: func_0207df90
extern "C" ARM void func_0207df90(char* arg0) {
    func_020bb740((int*)(arg0 + 0x28));
    func_020bb92c((int*)(arg0 + 0x60));
}
