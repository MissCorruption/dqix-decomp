#include <globaldefs.h>

struct Struct_0202e6a8 {
    char unknown_0_[0x70];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
};

extern "C" void func_0202e5d8(struct Struct_0202e6a8*, int, int, int);

// USA: func_0202e6a8
extern "C" ARM void func_0202e6a8(struct Struct_0202e6a8* arg0, int arg1) {
    arg0->unknown_70_ = arg1;
    func_0202e5d8(arg0, arg1, arg0->unknown_74_, arg0->unknown_78_);
}
