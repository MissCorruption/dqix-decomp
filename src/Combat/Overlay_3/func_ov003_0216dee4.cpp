#include <globaldefs.h>

struct Struct_ov003_0216dee4_2 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
    char unknown_23_[0x25 - 0x23];
    unsigned char unknown_25_;
    unsigned char unknown_26_;
};

struct Struct_ov003_0216dee4 {
    char unknown_0_[0x40];
    struct Struct_ov003_0216dee4_2* unknown_40_;
};

extern "C" void func_0205ac40(void*, struct Struct_ov003_0216dee4_2*);

// USA: func_ov003_0216dee4
extern "C" ARM void func_ov003_0216dee4(struct Struct_ov003_0216dee4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    struct Struct_ov003_0216dee4_2* var0 = (struct Struct_ov003_0216dee4_2*)((char*)arg0->unknown_40_ + arg1 * 0x28);
    if (var0 == 0) return;
    var0->unknown_14_ = arg2 << 12;
    var0->unknown_18_ = arg3 << 12;
    if (arg4 >= 0) var0->unknown_22_ = (unsigned char)arg4;
    if (arg5 >= 0) var0->unknown_25_ = (unsigned char)arg5;
    if (arg6 >= 0) var0->unknown_26_ = (unsigned char)arg6;
    func_0205ac40(arg0, var0);
}
