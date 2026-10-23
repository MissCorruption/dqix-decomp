#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_ov023_021fcc68_3 { unsigned int unknown_0_[3]; };
struct Struct_ov023_021fcc68 { struct Struct_ov023_021fcc68_3 unknown_0_; };
struct Struct_ov023_021fcc68_2 { unsigned char unknown_0_[0x864]; unsigned char unknown_864_0_ : 1; };
extern "C" void func_ov023_021e613c(struct Struct_ov023_021fcc68* arg0, void* arg1);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_020c54a4(int arg0, unsigned int arg1, unsigned int arg2, unsigned short arg3);
extern "C" void func_ov023_021e6088(void* arg0, struct Struct_ov009_02188454* arg1);

// USA: func_ov023_021fcc68
extern "C" ARM void func_ov023_021fcc68(void* arg0) {
    func_020c54a4(0, 0, 0, 0);
    unsigned int var0 = ((struct Struct_ov023_021fcc68_2*)((char*)arg0 + 0x1000))->unknown_864_0_;
    void* var1 = (char*)arg0 + 0x20 + var0 * 0xc20;
    struct Struct_ov023_021fcc68 var2;
    struct Struct_ov023_021fcc68 var3;
    func_ov023_021e613c(&var3, var1);
    var2.unknown_0_ = var3.unknown_0_;
    var2.unknown_0_.unknown_0_[1] = var2.unknown_0_.unknown_0_[1] + 0x199u;
    var2.unknown_0_.unknown_0_[1] = fix32ReduceAngle0To2Pi(var2.unknown_0_.unknown_0_[1]);
    func_ov023_021e6088(var1, (struct Struct_ov009_02188454*)&var2);
}
