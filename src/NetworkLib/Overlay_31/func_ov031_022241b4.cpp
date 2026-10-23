#include <globaldefs.h>

struct Struct_ov031_02222ddc_5 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_ov031_022241b4 {
    unsigned char unknown_0_[0xc0];
    Struct_ov031_02222ddc_5* unknown_c0_;
    unsigned char unknown_c4_[0x59];
    unsigned char unknown_11d_;
};

extern Struct_ov031_022241b4* data_ov031_02250bfc;
extern "C" void func_ov031_02224ca4(int arg0, int arg1, int arg2);
extern "C" void func_ov031_0223e2b8(void* arg0, int arg1);
extern "C" void func_ov031_02224248(void* arg0);

static inline void inline_ov031_022241b4(const Struct_ov031_02222ddc_5* arg0, unsigned int* arg1, unsigned int* arg2) {
    *arg1 = (arg0->unknown_0_ & 0x1ff0000) >> 16;
    *arg2 = arg0->unknown_0_ & 0xff;
}

// USA: func_ov031_022241b4
extern "C" ARM void func_ov031_022241b4(void* arg0) {
    Struct_ov031_022241b4* var0 = data_ov031_02250bfc;
    int var1, var2;
    inline_ov031_022241b4(var0->unknown_c0_, (unsigned int*)&var1, (unsigned int*)&var2);
    var2 -= 12;
    if (var2 > 0x93) {
        func_ov031_02224ca4(var0->unknown_11d_, 3, var2);
        return;
    }
    func_ov031_02224ca4(var0->unknown_11d_, 3, 0x93);
    func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 4, 0xc0);
    func_ov031_0223e2b8(arg0, (int)func_ov031_02224248);
}
