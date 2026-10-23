#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void func_ov023_021e60e0(void* arg0, unsigned int arg1);
extern "C" void func_ov023_021e6088(void* arg0, Struct_ov009_02188454* arg1);
extern "C" void func_ov023_021e613c(Struct_ov009_02188454* arg0, char* arg1);
extern "C" void func_ov023_021e6158(void* arg0, int arg1);

struct Struct_ov023_021e447c {
#if defined(jpn)
    char unknown_0_[0x124];
#else
    char unknown1_0_[0x128];
#endif
    void* unknown_128_;
    void* unknown_12c_;
#if defined(jpn)
    char unknown1_12c_[0x56c - 0x12c];
#else
    char unknown_130_[0x634 - 0x130];
#endif
    unsigned short unknown_634_;
};

// USA: func_ov023_021e447c
extern "C" ARM void func_ov023_021e447c(Struct_ov023_021e447c* arg0) {
    if (!(arg0->unknown_634_ & 0x8)) return;
    if (*(unsigned char*)((char*)arg0->unknown_12c_ + 0xc12) != 0) return;
    if (arg0->unknown_634_ & 0x40) {
        func_ov023_021e60e0(arg0->unknown_128_, 0x1eb);
        func_ov023_021e60e0(arg0->unknown_12c_, 0x1eb);
    } else {
        Struct_ov009_02188454 var0;
        func_ov023_021e613c(&var0, (char*)arg0->unknown_128_);
        func_ov023_021e6088(arg0->unknown_12c_, &var0);
    }
    void* var1 = arg0->unknown_128_;
    arg0->unknown_128_ = arg0->unknown_12c_;
    arg0->unknown_12c_ = var1;
    func_ov023_021e6158(arg0->unknown_12c_, 0);
    func_ov023_021e6158(arg0->unknown_12c_, 1);
    func_ov023_021e6158(arg0->unknown_12c_, 5);
    func_ov023_021e6158(arg0->unknown_12c_, 6);
    func_ov023_021e6158(arg0->unknown_12c_, 2);
    func_ov023_021e6158(arg0->unknown_12c_, 3);
    func_ov023_021e6158(arg0->unknown_12c_, 4);
    arg0->unknown_634_ &= ~0x8;
    arg0->unknown_634_ &= ~0x40;
}
