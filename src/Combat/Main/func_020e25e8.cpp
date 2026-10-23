#include <globaldefs.h>

struct Struct_020e1cb8;

extern "C" void func_020e1cb8(struct Struct_020e1cb8* arg0);
extern "C" void func_020e25cc(signed char* arg0);

struct Struct_020e25e8 {
    char unknown_0_[0x10];
    struct Struct_020e1cb8* unknown_10_;
};

// USA: func_020e25e8
extern "C" ARM void func_020e25e8(struct Struct_020e25e8* arg0) {
    func_020e1cb8(arg0->unknown_10_);
    func_020e25cc((signed char*)arg0);
}
