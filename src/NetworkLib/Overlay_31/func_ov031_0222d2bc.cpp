#include <globaldefs.h>

struct Struct_ov031_0222d2bc_3 { void* unknown_0_; unsigned int unknown_4_; unsigned char unknown_8_[32]; };
struct Struct_ov031_0222d2bc {
    unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_;
};
struct Struct_ov031_0222d2bc_2 { unsigned short unknown_0_, unknown_2_; };
extern Struct_ov031_0222d2bc_3* data_ov031_02290c94;
extern unsigned char data_ov031_02248ed0[16];
extern "C" void func_ov031_0223ca40(void*, int);
extern "C" void func_ov031_0223c980(void*, unsigned short, unsigned short, unsigned short, unsigned short, int, int, Struct_ov031_0222d2bc_2*);
extern "C" void func_ov031_0223caec(void*);

// USA: func_ov031_0222d2bc
extern "C" ARM void func_ov031_0222d2bc() {
    Struct_ov031_0222d2bc var0 = {0, 0, 0, 0};
    var0.unknown_2_ = 0x20;
    var0.unknown_4_ = 0xe;
    var0.unknown_6_ = 0x10;
    func_ov031_0223ca40(data_ov031_02290c94->unknown_0_, 0);
    Struct_ov031_0222d2bc_2 var1;
    int var2;
    int var3 = 0;
    var2 = 0;
    var1.unknown_2_ = 0;
    do {
        if (var3 == 16) {
            var2 = 0;
            var0.unknown_2_ = 0x31;
        }
        unsigned char var4 = data_ov031_02290c94->unknown_8_[var3];
        if (var4 == 0x20) var1.unknown_0_ = 0xe01d;
        else var1.unknown_0_ = var4;
        var0.unknown_0_ = data_ov031_02248ed0[var2];
        func_ov031_0223c980(data_ov031_02290c94->unknown_0_, var0.unknown_0_,
            var0.unknown_2_, var0.unknown_4_, var0.unknown_6_, 2, 0x480, &var1);
        ++var3;
        ++var2;
    } while (var3 < 32);
    func_ov031_0223caec(data_ov031_02290c94->unknown_0_);
}
