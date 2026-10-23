#include <globaldefs.h>
struct Struct_020e1568 { int unknown_0_, unknown_4_; unsigned char unknown_8_, unknown_9_, unknown_a_, unknown_b_; };
struct Struct_020200c0_3 { int unknown_0_; short unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
struct Struct_020200c0_4 { int unknown_0_, unknown_4_; unsigned char unknown_8_; };
struct Struct_020e2018 { int unknown_0_; char unknown_4_[6]; unsigned char unknown_a_, unknown_b_; };
struct Struct_020e2018_2 {
    char unknown_0_[8];
    Struct_020e2018* unknown_8_;
    char unknown_c_[0x24-0xc];
    Struct_020e1568 unknown_24_;
    int unknown_30_, unknown_34_;
    char unknown_38_[2];
    unsigned char unknown_3a_, unknown_3b_;
};
struct Struct_020e2018_3 { int unknown_0_; Struct_020e2018_2* unknown_4_; };
extern "C" void func_020e1568(Struct_020e1568*);
extern "C" void func_02020520(Struct_020200c0_3*);
extern "C" void func_0205b20c(Struct_020200c0_4*);
extern "C" void func_0205b220(void*, int);
extern "C" void func_0205b228(void*, int, unsigned char);
extern "C" void func_0205b734(Struct_020200c0_4*, int, int, int, int, int);
// USA: func_020e2018
extern "C" ARM void func_020e2018(Struct_020e2018_3* arg0) {
    Struct_020e2018_2* var0 = arg0->unknown_4_;
    Struct_020e2018* var1 = var0->unknown_8_;
    func_020e1568(&var0->unknown_24_);
    var0->unknown_24_.unknown_0_ = var1->unknown_0_;
    var0->unknown_24_.unknown_4_ = 0;
    var0->unknown_24_.unknown_8_ = 0;
    var0->unknown_24_.unknown_9_ = 0;
    var0->unknown_24_.unknown_a_ = var1->unknown_a_ - 4;
    var0->unknown_24_.unknown_b_ = var1->unknown_b_ - 4;
    int var2 = arg0->unknown_4_->unknown_3a_ - 4;
    if (var2 <= var0->unknown_24_.unknown_a_) var0->unknown_24_.unknown_a_ = var2;
    int var3 = arg0->unknown_4_->unknown_3b_ - 4;
    if (var3 <= var0->unknown_24_.unknown_b_) var0->unknown_24_.unknown_b_ = var3;
    Struct_020200c0_3 var4;
    func_02020520(&var4);
    var4.unknown_8_ = var1->unknown_a_;
    var4.unknown_a_ = var1->unknown_b_;
    Struct_020200c0_4 var5;
    func_0205b20c(&var5);
    func_0205b220(&var5, arg0->unknown_0_ + (arg0->unknown_4_->unknown_30_ + arg0->unknown_4_->unknown_34_));
    func_0205b228(&var5, (int)&var4, 1);
    func_0205b734(&var5, 0, 0, var0->unknown_24_.unknown_a_, var0->unknown_24_.unknown_b_, 1);
}
