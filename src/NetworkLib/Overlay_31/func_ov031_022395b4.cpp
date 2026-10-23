#include <globaldefs.h>

struct Struct_ov031_022395b4_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[4];
    unsigned short unknown_8_;
    unsigned char unknown_a_[6];
    unsigned short unknown_10_;
};

struct Struct_ov031_022395b4 {
    unsigned char unknown_0_[0x4c];
    int (*unknown_4c_)(Struct_ov031_022395b4_2* event);
    unsigned short unknown_50_;
    unsigned short unknown_52_;
};

struct Struct_ov031_02290d18_10 {
    void (*unknown_0_)(int, const char*, ...);
    Struct_ov031_022395b4* unknown_4_;
};

extern Struct_ov031_02290d18_10 data_ov031_02290d18 __attribute__((aligned(4)));
extern const char data_ov031_0224c34c[];
extern const char data_ov031_0224c378[];
extern const char data_ov031_0224c3a4[];
extern "C" void func_ov031_022393e4(int arg0);
extern "C" void func_ov031_02239368(int);
extern "C" int func_ov031_02239724(void);
extern "C" int func_020d559c(int arg0, unsigned int arg1);

// USA: func_ov031_022395b4
extern "C" ARM void func_ov031_022395b4(Struct_ov031_022395b4_2* arg0) {
    unsigned short var0 = 1 << arg0->unknown_10_;
    if (arg0->unknown_2_) {
        func_ov031_022393e4(arg0->unknown_2_);
        func_ov031_02239368(9);
        return;
    }
    unsigned short var1 = arg0->unknown_8_;
    switch (var1) {
    case 7:
        if (data_ov031_02290d18.unknown_0_) data_ov031_02290d18.unknown_0_(0x8000000, data_ov031_0224c34c, arg0->unknown_10_);
        if (data_ov031_02290d18.unknown_4_->unknown_4c_ && data_ov031_02290d18.unknown_4_->unknown_4c_(arg0) == 0) {
            int var2 = func_020d559c(0, arg0->unknown_10_);
            if (var2 == 2) return;
            func_ov031_022393e4(var2);
            func_ov031_02239368(9);
            return;
        }
        data_ov031_02290d18.unknown_4_->unknown_52_ |= var0;
        break;
    case 9:
        if (data_ov031_02290d18.unknown_0_) data_ov031_02290d18.unknown_0_(0x8000000, data_ov031_0224c378, arg0->unknown_10_);
        data_ov031_02290d18.unknown_4_->unknown_52_ &= ~var0;
        break;
    case 0:
        if (func_ov031_02239724() == 0) func_ov031_02239368(9);
        break;
    case 2:
        break;
    default:
        if (data_ov031_02290d18.unknown_0_) data_ov031_02290d18.unknown_0_(0x8000000, data_ov031_0224c3a4, var1);
    }
}
