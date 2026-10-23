#include <globaldefs.h>

struct Struct_020200c0_4 { int unknown_0_; int unknown_4_; unsigned char unknown_8_; };
struct Struct_0204df9c { int unknown_0_; short unknown_4_; short unknown_6_; short unknown_8_; short unknown_a_; };

struct Struct_0204df9c_2 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    short unknown_a8_;
    short unknown_aa_;
};

extern "C" void func_0205b20c(struct Struct_020200c0_4* arg0);
extern "C" void func_0205b220(void* arg0, int arg1);
extern "C" void func_0205b228(void* arg0, int arg1, unsigned char arg2);
extern "C" void func_0205b36c(void* arg0, short arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5);

// USA: func_0204df9c
extern "C" ARM void func_0204df9c(Struct_0204df9c_2* arg0, short arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5) {
    if (arg1 == 0) return;
    Struct_0204df9c var0;
    var0.unknown_0_ = 0;
    var0.unknown_4_ = 0;
    var0.unknown_6_ = 0;
    var0.unknown_8_ = 0;
    var0.unknown_a_ = 0;
    var0.unknown_8_ = arg0->unknown_a8_ << 3;
    var0.unknown_a_ = arg0->unknown_aa_ << 3;
    Struct_020200c0_4 var1;
    func_0205b20c(&var1);
    func_0205b220(&var1, arg0->unknown_8_);
    func_0205b228(&var1, (int)&var0, 1);
    func_0205b36c(&var1, arg1, arg2, arg3, arg4, arg5);
}
