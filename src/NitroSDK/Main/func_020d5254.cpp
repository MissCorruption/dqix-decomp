#include <globaldefs.h>

extern "C" void* func_020d41d8(void);
extern "C" int func_020d424c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d4168(void* arg0, unsigned int arg1);

struct Struct_020d5254 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_, unknown_9_, unknown_a_, unknown_b_, unknown_c_, unknown_d_;
};

struct Struct_020d5254_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_, unknown_b_, unknown_c_, unknown_d_, unknown_e_, unknown_f_;
};


// USA: func_020d5254
extern "C" ARM int func_020d5254(int arg0, struct Struct_020d5254* arg1) {
    int var0 = func_020d424c(3, 2, 3, 5);
    if (var0 != 0) {
        return var0;
    }
    if (arg1 == NULL) {
        return 6;
    }
    if (arg1->unknown_0_ == 0) {
        return 6;
    }
    if (arg1->unknown_4_ < 1 || arg1->unknown_4_ > 0xe) {
        return 6;
    }
    func_020d404c(0xa, arg0);
    struct Struct_020d5254_2 var1;
    var1.unknown_0_ = 0xa;
    var1.unknown_2_ = arg1->unknown_4_;
    var1.unknown_4_ = arg1->unknown_0_;
    var1.unknown_8_ = arg1->unknown_6_;
    var1.unknown_a_ = arg1->unknown_8_;
    var1.unknown_b_ = arg1->unknown_9_;
    var1.unknown_c_ = arg1->unknown_a_;
    var1.unknown_d_ = arg1->unknown_b_;
    var1.unknown_e_ = arg1->unknown_c_;
    var1.unknown_f_ = arg1->unknown_d_;
    var0 = func_020d4168(&var1, 0x10);
    return (var0 == 0) ? 2 : var0;
}
