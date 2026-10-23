#include <globaldefs.h>

struct Struct_ov003_021638e4 { unsigned char unknown_0_[0x24]; void* unknown_24_; };

extern "C" void func_ov003_0215fb94(void*);
extern "C" void func_ov017_021b67d8(Struct_ov003_021638e4*);

// USA: func_ov017_021b6b8c
extern "C" ARM void func_ov017_021b6b8c(Struct_ov003_021638e4* arg0) {
    void* var0 = arg0->unknown_24_;
    if (var0) func_ov003_0215fb94(var0);
    func_ov017_021b67d8(arg0);
    ((unsigned char*)arg0)[1] = 1;
}
