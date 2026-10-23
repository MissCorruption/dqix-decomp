#include <globaldefs.h>

extern "C" void func_ov017_021b6f9c(void* arg0);

struct Struct_ov017_021b6f9c {
    char unknown_0_[0x600 + 0xb4];
};

// USA: func_ov017_021b8b6c
extern "C" ARM void func_ov017_021b8b6c(char* arg0) {
    unsigned short* var0 = (unsigned short*)(arg0 + 0x600 + 0xb4);
    if (*var0 != 1) return;
    func_ov017_021b6f9c(arg0);
    arg0[1] = 1;
}
