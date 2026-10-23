#include <globaldefs.h>

extern "C" void* func_ov031_022133f8(int arg0);
extern "C" void func_ov031_02213694(int);

struct Struct_ov031_02213c10 { short unknown_0_; short unknown_2_; int unknown_4_; int unknown_8_; };

// USA: func_ov031_02213c10
extern "C" ARM void func_ov031_02213c10(Struct_ov031_02213c10* arg0) {
    void* var0 = func_ov031_022133f8(0x10);
    if (arg0->unknown_0_ == 5) {
        if (arg0->unknown_2_ == 0) return;
        switch (arg0->unknown_8_) {
        case 0xd: *((unsigned char*)var0 + 0xd14) = 1; return;
        case 0xf: *((unsigned char*)var0 + 0xd14) = 2; return;
        case 0x11: *((unsigned char*)var0 + 0xd14) = 3; return;
        default: *((unsigned char*)var0 + 0xd14) = 4; return;
        }
    }
    if (arg0->unknown_0_ != 7) return;
    func_ov031_02213694(arg0->unknown_4_);
}
