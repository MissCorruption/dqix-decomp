#include <globaldefs.h>

struct Struct_ov031_02222ddc_2 { unsigned int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };

struct Struct_ov031_02223ff8 {
    unsigned char unknown_0_[0x30];
    Struct_ov031_02222ddc_2* unknown_30_;
    unsigned char unknown_34_[0x11d - 0x34];
    unsigned char unknown_11d_;
};

extern Struct_ov031_02223ff8* data_ov031_02250bfc;
extern "C" void func_ov031_02224ca4(int arg0, int arg1, int arg2);
extern "C" void func_ov031_0223e2b8(void* arg0, int arg1);
extern "C" void func_ov031_0222408c(void* arg0);

static inline void inline_ov031_02223ff8(const Struct_ov031_02222ddc_2* arg0, unsigned int* arg1, unsigned int* arg2) {
    *arg1 = (arg0->unknown_0_ & 0x1ff0000) >> 16;
    *arg2 = arg0->unknown_0_ & 0xff;
}

// USA: func_ov031_02223ff8
extern "C" ARM void func_ov031_02223ff8(void* arg0) {
    int var0, var1;
    inline_ov031_02223ff8(data_ov031_02250bfc->unknown_30_, (unsigned int*)&var0, (unsigned int*)&var1);
    var1 -= 0xc;
    if (var1 > 0x51) {
        func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 0, var1);
        return;
    }
    func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 0, 0x51);
    func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 1, 0xc0);
    func_ov031_0223e2b8(arg0, (int)func_ov031_0222408c);
}
