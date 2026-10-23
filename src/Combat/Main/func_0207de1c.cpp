#include <globaldefs.h>

struct Struct_0207d798 {
    short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_;
    char unknown_5_;
    char unknown_6_[2];
    char unknown_8_;
    char unknown_9_;
    char unknown_a_;
    char unknown_b_;
};
extern "C" void func_0207d7c0(struct Struct_0207d798* arg0);

// USA: func_0207de1c
extern "C" ARM struct Struct_0207d798* func_0207de1c(struct Struct_0207d798* arg0) {
    func_0207d7c0(&arg0[0]);
    func_0207d7c0(&arg0[1]);
    func_0207d7c0(&arg0[2]);
    func_0207d7c0(&arg0[3]);
    return arg0;
}
