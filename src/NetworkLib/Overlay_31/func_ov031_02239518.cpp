#include <globaldefs.h>

extern "C" void func_ov031_022393e4(int arg0);
extern "C" void func_ov031_02239368(int);
extern "C" int func_ov031_02239550(void);

struct Struct_ov031_02239518 { short unknown_0_; unsigned short unknown_2_; };

// USA: func_ov031_02239518
extern "C" ARM void func_ov031_02239518(Struct_ov031_02239518* arg0) {
    unsigned short var0 = arg0->unknown_2_;
    if (var0 != 0) {
        func_ov031_022393e4(var0);
        func_ov031_02239368(9);
        return;
    }
    if (func_ov031_02239550() != 0) return;
    func_ov031_02239368(9);
}
