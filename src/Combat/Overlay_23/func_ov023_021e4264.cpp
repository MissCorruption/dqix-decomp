#if defined(jpn)
enum {Enum_ov023_021e4264_1588=0x56c};
#else
enum {Enum_ov023_021e4264_1588=0x634};
#endif
#include <globaldefs.h>

extern "C" void func_ov023_021e2bdc(void* arg0, int arg1, short* arg2, short* arg3);
extern "C" void func_0205ac40(void* arg0, void* arg1);

struct Struct_ov023_021e4264 {
    char unknown_0_[0xc8];
    void* unknown_c8_;
    void* unknown_cc_;
    char unknown_d0_[Enum_ov023_021e4264_1588 - 0xd0];
    unsigned short unknown_634_;
};

struct Struct_ov023_021e4264_2 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
    char unknown_23_[0x26 - 0x23];
    unsigned char unknown_26_;
};

// USA: func_ov023_021e4264
extern "C" ARM void func_ov023_021e4264(Struct_ov023_021e4264* arg0) {
    short var0, var1;
    Struct_ov023_021e4264_2* var2 = (Struct_ov023_021e4264_2*)arg0->unknown_cc_;
    func_ov023_021e2bdc((char*)arg0 + 0xd4, 0x11, &var0, &var1);
    if (arg0->unknown_634_ & 0x100) {
        var0--;
        var1++;
    }
    Struct_ov023_021e4264_2* var3 = (Struct_ov023_021e4264_2*)((char*)var2 + 0x50);
    var3->unknown_14_ = var0 << 12;
    var3->unknown_18_ = var1 << 12;
    var3->unknown_22_ = 0x7f;
    var3->unknown_26_ = 2;
    func_0205ac40(arg0->unknown_c8_, var3);

    var2 = (Struct_ov023_021e4264_2*)arg0->unknown_cc_;
    func_ov023_021e2bdc((char*)arg0 + 0xd4, 0x12, &var0, &var1);
    if (arg0->unknown_634_ & 0x200) {
        var0++;
        var1++;
    }
    Struct_ov023_021e4264_2* var4 = (Struct_ov023_021e4264_2*)((char*)var2 + 0x78);
    var4->unknown_14_ = var0 << 12;
    var4->unknown_18_ = var1 << 12;
    var4->unknown_22_ = 0x7e;
    var4->unknown_26_ = 2;
    func_0205ac40(arg0->unknown_c8_, var4);
}
