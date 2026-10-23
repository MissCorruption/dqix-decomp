#include <globaldefs.h>

extern "C" void* func_ov031_02240310(void);
extern "C" int func_ov031_022403f4(void);
extern "C" void func_ov031_02240324(void);
extern "C" ARM int func_ov031_02240104(void* arg0);

struct Struct_ov031_02240ee8 {
    int unknown_0_;
    char unknown_4_[0x34];
    int unknown_38_;
    char unknown_3c_[4];
    int unknown_40_;
};

extern int data_ov031_02290fc0;

// USA: func_ov031_02240ee8
extern "C" ARM int func_ov031_02240ee8(Struct_ov031_02240ee8* arg0) {
    int var0;
    if (arg0->unknown_0_ != 0) {
        var0 = 0xb;
        data_ov031_02290fc0 = var0;
        return var0 - 0xc;
    }
    if (arg0->unknown_40_ == 1 && arg0->unknown_38_ == 0) {
        var0 = 0xb;
        data_ov031_02290fc0 = var0;
        return var0 - 0xc;
    }
    func_ov031_02240310();
    int var1 = func_ov031_02240104(arg0);
    if (var1 >= 0) {
        arg0->unknown_0_ = 1;
        func_ov031_022403f4();
    } else {
        data_ov031_02290fc0 = 1;
    }
    func_ov031_02240324();
    return var1;
}
