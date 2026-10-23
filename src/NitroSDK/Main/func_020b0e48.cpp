#include <globaldefs.h>

struct Struct_020b2a58;
extern "C" unsigned short func_020b2a58(struct Struct_020b2a58*);
extern "C" void func_020b27c8(void*, void*);

struct Struct_020b0e48 {
    int unknown_0_;                                                // 0x0
    unsigned short (*unknown_4_)(struct Struct_020b2a58*);  // 0x4
};

// USA: func_020b0e48
extern "C" ARM void func_020b0e48(struct Struct_020b0e48* arg0, void* arg1) {
    func_020b27c8(arg1, arg0);
    arg0->unknown_4_ = func_020b2a58;
}
