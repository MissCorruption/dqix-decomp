#include <globaldefs.h>

extern "C" void func_ov031_02239368(int arg0);
extern "C" ARM void func_ov031_022393e4(int arg0);

struct Struct_ov031_02239b10 { unsigned char unknown_0_[2]; unsigned short unknown_2_; };

// USA: func_ov031_02239b10
extern "C" ARM void func_ov031_02239b10(Struct_ov031_02239b10* arg0) {
    unsigned short var0 = arg0->unknown_2_;
    if (var0 != 0) {
        func_ov031_022393e4(var0);
        return;
    }
    func_ov031_02239368(1);
}
