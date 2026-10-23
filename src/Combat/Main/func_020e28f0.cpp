#include <globaldefs.h>

struct Struct_0205a254;
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);

struct Struct_020e28f0 {
    char unknown_0_[0x1c];
    unsigned short unknown_1c_;
    char unknown_1e_[2];
    struct Struct_0205a254* unknown_20_;
};

// USA: func_020e28f0
extern "C" ARM void func_020e28f0(struct Struct_020e28f0* arg0, short arg1, short arg2) {
    func_020e27ec(arg0->unknown_20_, arg0->unknown_1c_, arg1, arg2);
}
