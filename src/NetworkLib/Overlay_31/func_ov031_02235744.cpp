#include <globaldefs.h>

struct Struct_ov031_02235744 {
    void* unknown_0_;
    char unknown_4_[0xc];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    char unknown_14_[6];
    unsigned char unknown_1a_;
};
extern Struct_ov031_02235744* data_ov031_02290cf4;
extern "C" void func_ov031_0223bbd8(void*, int, int, int);

// USA: func_ov031_02235744
extern "C" ARM void func_ov031_02235744(int arg0) {
    Struct_ov031_02235744* var0 = data_ov031_02290cf4;
    func_ov031_0223bbd8(var0->unknown_0_, -1, var0->unknown_10_, arg0 + var0->unknown_12_);
    data_ov031_02290cf4->unknown_1a_ = (unsigned char)arg0;
}
