#include <globaldefs.h>

extern "C" void func_020bb740(int* out);
extern "C" void func_020bb92c(int* src);

// USA: func_0207df90
extern "C" ARM void func_0207df90(char* obj) {
    func_020bb740((int*)(obj + 0x28));
    func_020bb92c((int*)(obj + 0x60));
}
