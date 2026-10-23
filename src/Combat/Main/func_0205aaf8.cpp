#include <globaldefs.h>

extern "C" void func_020b0318(int* arg0);
extern "C" int func_0205a1f0(void* arg0, void* arg1, int arg2);
extern "C" void func_020b0594(int arg0, int arg1, int arg2, void* arg3);
extern "C" void func_020b0368(int arg0, int arg1, int arg2, void* arg3);

struct Struct_0205a528 {
    int unknown_0_[3];
    char unknown_c_[0x38 - 0xc];
    int unknown_38_;
    char unknown_3c_[0x44 - 0x3c];
    int unknown_44_;
    char unknown_48_[0x50 - 0x48];
    unsigned char unknown_50_;
};

// USA: func_0205aaf8
extern "C" ARM int func_0205aaf8(struct Struct_0205a528* arg0, void* arg1, int arg2) {
    int var0;
    int var1;
    func_020b0318((int*)arg0);
    if (func_0205a1f0(&var0, arg1, arg2) != 0) {
        return 1;
    }
    var1 = (arg0->unknown_50_ == 0) ? 1 : 2;
    if (arg0->unknown_38_ == 4) {
        func_020b0594(var0, 0, var1, arg0);
    } else {
        func_020b0368(var0, arg0->unknown_44_, var1, arg0);
    }
    return 0;
}
