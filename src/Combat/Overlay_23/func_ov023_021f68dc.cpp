#include <globaldefs.h>

struct Struct_ov023_021f68dc_2 {
    virtual void inline_ov023_021f68dc_5(void* arg0);
    virtual void inline_ov023_021f68dc();
    virtual void inline_ov023_021f68dc_2();
    virtual void inline_ov023_021f68dc_3(void* arg0);
    virtual void inline_ov023_021f68dc_4(void* arg0);
    char unknown_4_[0x14];
    Struct_ov023_021f68dc_2* unknown_18_;
};

struct Struct_ov023_021f68dc {
    Struct_ov023_021f68dc_2* unknown_0_;
};

extern "C" int func_ov023_021f6ac8(Struct_ov023_021f68dc* arg0, void* arg1);
extern "C" void func_ov023_021f6a1c(Struct_ov023_021f68dc* arg0, void* arg1);

// USA: func_ov023_021f68dc
extern "C" ARM void func_ov023_021f68dc(Struct_ov023_021f68dc* arg0, void* arg1) {
    Struct_ov023_021f68dc_2* var0;
    for (var0 = arg0->unknown_0_; var0; var0 = var0->unknown_18_) {
        var0->inline_ov023_021f68dc_3(arg1);
    }
    for (var0 = arg0->unknown_0_; var0; var0 = var0->unknown_18_) {
        var0->inline_ov023_021f68dc_5(arg1);
    }
    for (var0 = arg0->unknown_0_; var0; var0 = var0->unknown_18_) {
        var0->inline_ov023_021f68dc_4(arg1);
    }
    if (func_ov023_021f6ac8(arg0, arg1) != 0) return;
    func_ov023_021f6a1c(arg0, arg1);
}
