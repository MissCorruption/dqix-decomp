#include <globaldefs.h>

struct Struct_020b033c {
    char unknown_0_[8];
    int unknown_8_[3];
};
extern "C" void func_020b033c(struct Struct_020b033c* arg0);

struct Struct_0205ab78 {
    unsigned char unknown_0_[0xc];
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};
extern "C" int func_020b022c(struct Struct_0205ab78* arg0, void** arg1);
extern "C" int func_020b01f0(struct Struct_0205ab78* arg0, void** arg1);

extern "C" void func_020b08b8(void* arg0, void* arg1, int arg2, int arg3, void* arg4);
extern "C" void func_020b07c0(void* arg0, int arg1, int arg2, void* arg3);

struct Struct_0205ab78_2 {
    char unknown_0_[0x24];
    struct Struct_020b033c unknown_24_;
    char unknown_38_[0x50 - 0x38];
    unsigned char unknown_50_;
};

// USA: func_0205ab78
extern "C" ARM int func_0205ab78(struct Struct_0205ab78_2* arg0, struct Struct_0205ab78* arg1, void* arg2) {
    int var0;
    int var1;

    func_020b033c(&arg0->unknown_24_);
    void* var2 = 0;
    void* var3 = 0;
    int var4 = func_020b022c(arg1, &var3);

    if (arg1 == 0) {
        var0 = 1;
    } else if (arg2 == 0) {
        var0 = 1;
    } else {
        if (func_020b01f0(arg1, &var2)) {
            var0 = 0;
        } else {
            var0 = 1;
        }
    }
    if (var0) {
        return 1;
    }

    var1 = (arg0->unknown_50_ == 0) ? 1 : 2;
    if (var4) {
        func_020b08b8(var2, var3, 0, var1, &arg0->unknown_24_);
    } else {
        func_020b07c0(var2, 0, var1, &arg0->unknown_24_);
    }
    return 0;
}
