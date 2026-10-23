#include <globaldefs.h>

extern "C" void func_ov023_021e2bdc(void* arg0, int arg1, short* arg2, short* arg3);
extern "C" void func_0205ac40(void* arg0, void* arg1);

struct Struct_ov023_021e4358 {
    char unknown_0_[0xc8];
    void* unknown_c8_;
    void* unknown_cc_;
    #if defined(jpn)
    char unknown_d0_[0x4e4 - 0xd0];
#else
    char unknown1_d0_[0x4e8 - 0xd0];
#endif
    int unknown_4e8_;
    #if defined(jpn)
    char unknown1_4e8_[0x56c - 0x4e8];
#else
    char unknown_4ec_[0x634 - 0x4ec];
#endif
    unsigned short unknown_634_;
};

struct Struct_ov023_021e4358_2 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
    char unknown_23_[0x26 - 0x23];
    unsigned char unknown_26_;
};

// USA: func_ov023_021e4358
extern "C" ARM void func_ov023_021e4358(Struct_ov023_021e4358* arg0) {
    if (arg0->unknown_4e8_ == 1) return;
    short var0, var1;
    void* var2 = arg0->unknown_cc_;
    func_ov023_021e2bdc((char*)arg0 + 0xd4, 0x20, &var0, &var1);
    if (arg0->unknown_634_ & 0x400) {
        var0++;
        var1++;
        arg0->unknown_634_ &= ~0x400;
    }
    Struct_ov023_021e4358_2* var3 = (Struct_ov023_021e4358_2*)var2;
    var3->unknown_14_ = var0 << 12;
    var3->unknown_18_ = var1 << 12;
    var3->unknown_22_ = 0x7b;
    var3->unknown_26_ = 2;
    func_0205ac40(arg0->unknown_c8_, var2);
}
