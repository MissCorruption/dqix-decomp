#include <globaldefs.h>

extern "C" void func_ov031_022393e4(int arg0);
extern "C" void func_ov031_02239368(int);
extern "C" int func_ov031_02239cd4(int);

struct Struct_ov031_02290d18_2 { void (*unknown_0_)(int, void*, int, int); void* unknown_4_; };
extern Struct_ov031_02290d18_2 data_ov031_02290d18;

struct Struct_ov031_02239d70 { unsigned char unknown_0_[0x5e]; unsigned short unknown_5e_; unsigned short unknown_60_; };

struct Struct_ov031_02239d70_2 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    unsigned char unknown_4_[4];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern int data_ov031_0224c44c;

// USA: func_ov031_02239d70
extern "C" ARM void func_ov031_02239d70(Struct_ov031_02239d70_2* arg0) {
    unsigned short var0 = arg0->unknown_2_;
    if (var0 != 0) {
        func_ov031_022393e4(var0);
        func_ov031_02239368(9);
        return;
    }
    if (data_ov031_02290d18.unknown_0_ != 0) {
        data_ov031_02290d18.unknown_0_(0x8000000, &data_ov031_0224c44c, arg0->unknown_8_, arg0->unknown_a_);
    }
    unsigned short var1 = arg0->unknown_8_;
    unsigned short var2 = arg0->unknown_a_;
    unsigned short var3 = ((Struct_ov031_02239d70*)data_ov031_02290d18.unknown_4_)->unknown_5e_;
    if (var3 > var2) {
        ((Struct_ov031_02239d70*)data_ov031_02290d18.unknown_4_)->unknown_5e_ = var2;
        unsigned short var4 = 1 << (var1 - 1);
        ((Struct_ov031_02239d70*)data_ov031_02290d18.unknown_4_)->unknown_60_ = var4;
    } else if (var3 == var2) {
        ((Struct_ov031_02239d70*)data_ov031_02290d18.unknown_4_)->unknown_60_ = ((Struct_ov031_02239d70*)data_ov031_02290d18.unknown_4_)->unknown_60_ | (1 << (var1 - 1));
    }
    int var5 = func_ov031_02239cd4((unsigned short)(var1 + 1));
    if (var5 == 0x18) {
        func_ov031_02239368(7);
        return;
    }
    if (var5 == 2) return;
    func_ov031_02239368(9);
}
