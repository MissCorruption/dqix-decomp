#include <globaldefs.h>

struct Struct_ov024_021fc37c;
extern "C" int func_ov024_021fc498(struct Struct_ov024_021fc37c* arg0);

extern "C" void func_ov024_021fb91c(void* arg0);

struct Struct_021fcb60 {
    char unknown_0_[0x6];
    unsigned char unknown_6_;
    char unknown_7_;
    struct Struct_ov024_021fc37c* unknown_8_;
    int unknown_c_;
    char unknown_10_[0x124 - 0x10];
    float unknown_124_;
};

// USA: func_ov024_021fcb60
extern "C" ARM void func_ov024_021fcb60(struct Struct_021fcb60* arg0) {
    float var0 = arg0->unknown_124_;
    arg0->unknown_124_ = 0.6f;
    if (arg0->unknown_6_ == 3) {
        arg0->unknown_124_ = 0.65f;
    }
    if (!(func_ov024_021fc498(arg0->unknown_8_) > 2 && arg0->unknown_c_ > 2)) {
        arg0->unknown_124_ += 0.2f;
    }
    func_ov024_021fb91c(arg0);
    arg0->unknown_124_ = var0;
}
