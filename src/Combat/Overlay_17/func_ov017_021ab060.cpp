#include <globaldefs.h>

extern "C" void func_02080b54(void* arg0, int arg1);
extern "C" int func_02080b40(void* arg0, int arg1);
extern "C" void func_020813ec(void* arg0, int arg1);

struct Struct_ov017_021aa59c_4 {
    char unknown_0_[0x18];
    void* unknown_18_;
    char unknown_1c_[0x4c - 0x1c];
    short unknown_4c_;
};

// USA: func_ov017_021ab060
extern "C" ARM void func_ov017_021ab060(Struct_ov017_021aa59c_4* arg0) {
    int var0 = 2;
    if (arg0->unknown_4c_ == 1) {
        var0 = 5;
    }
    void* var1 = arg0->unknown_18_;
    int var2;
    func_02080b54(var1, 1);
    for (var2 = 0; var2 < 3; var2++) {
        func_02080b40(var1, var0);
        var0 = (short)(var0 + 1);
    }
    func_020813ec(var1, 1);
}
