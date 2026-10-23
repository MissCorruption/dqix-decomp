#include <globaldefs.h>

struct Struct_ov031_02222ddc_3 {
    unsigned long unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov031_0222408c {
    unsigned char unknown_0_[0x60];
    Struct_ov031_02222ddc_3* unknown_60_;
    unsigned char unknown_64_[0xb9];
    unsigned char unknown_11d_;
};
extern Struct_ov031_0222408c* data_ov031_02250bfc;
extern "C" void func_ov031_02224ca4(int, int, int);
extern "C" void func_ov031_0223e2b8(void*, int);
extern "C" void func_ov031_02224120(void*);
static inline void inline_ov031_0222408c(const Struct_ov031_02222ddc_3* arg0, unsigned long* arg1, unsigned long* arg2) {
    unsigned long var0 = arg0->unknown_0_;
    *arg1 = (var0 & 0x1ff0000) >> 16;
    *arg2 = var0 & 0xff;
}

// USA: func_ov031_0222408c
extern "C" ARM void func_ov031_0222408c(void* arg0) {
    Struct_ov031_0222408c* var0 = data_ov031_02250bfc;
    int var1, var2;
    inline_ov031_0222408c(var0->unknown_60_, (unsigned long*)&var1, (unsigned long*)&var2);
    var2 -= 12;
    if (var2 > 0x67) {
        func_ov031_02224ca4(var0->unknown_11d_, 1, var2);
        return;
    }
    func_ov031_02224ca4(var0->unknown_11d_, 1, 0x67);
    func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 2, 0xc0);
    func_ov031_0223e2b8(arg0, (int)func_ov031_02224120);
}
