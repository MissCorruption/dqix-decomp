#include <globaldefs.h>

struct Struct_02108760_2;

extern "C" void func_0203a914(void* arg0);
extern "C" void func_0205e9f4(struct Struct_02108760_2* arg0, int arg1);
extern "C" void func_0205e944(void*, int);

struct Struct_02000c9c_17 {
    char unknown_0_[0xb0];
    int unknown_b0_;
    short unknown_b4_;
    char unknown_b6_[0xb8 - 0xb6];
    int unknown_b8_;
    short unknown_bc_;
    char unknown_be_[0xc0 - 0xbe];
    int unknown_c0_;
    short unknown_c4_;
};

// USA: func_0205e88c
extern "C" ARM void func_0205e88c(struct Struct_02000c9c_17* arg0) {
    func_0203a914(arg0);
    arg0->unknown_b0_ = 0;
    arg0->unknown_b4_ = -1;
    arg0->unknown_b8_ = 0;
    arg0->unknown_bc_ = -1;
    arg0->unknown_c0_ = 0;
    arg0->unknown_c4_ = -1;
    func_0205e944(arg0, 0x7f);
    func_0205e9f4((struct Struct_02108760_2*)arg0, 3);
}
