#include <globaldefs.h>

struct Struct_0202e95c_2;
extern "C" void func_0202e98c(struct Struct_0202e95c_2* arg0);

struct Struct_0202e95c {
    char unknown_0_[0x212];
    unsigned short unknown_212_;
    unsigned short unknown_214_;
    unsigned short unknown_216_;
};

// USA: func_0202e95c
extern "C" ARM void func_0202e95c(Struct_0202e95c* arg0, short arg1, unsigned short arg2) {
    if (arg2 != 0) {
        arg0->unknown_214_ = arg1;
        arg0->unknown_216_ = arg2;
        return;
    }
    func_0202e98c((struct Struct_0202e95c_2*)arg0);
    arg0->unknown_212_ = arg1;
}
