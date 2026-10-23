#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" void func_ov023_021dc520(void* arg0);
extern "C" void func_ov023_021dd404(void* arg0);
extern "C" int func_ov023_021ddbb8(void* arg0, int arg1, int arg2);
struct Struct_ov023_021dd59c;
extern "C" int func_ov023_021ddbf8(struct Struct_ov023_021dd59c* arg0);
extern "C" void func_ov023_021dc354(void* arg0);
extern "C" void func_020dc2d0(int arg0);

struct Struct_ov023_021dda04 {
#if defined(jpn)
    char unknown_0_[0x6f0];
#else
    char unknown1_0_[0x774];
#endif
    unsigned short unknown_774_;
    unsigned char unknown_776_;
    unsigned char unknown_777_;
    char unknown_778_[0x77b - 0x778];
    signed char unknown_77b_;
};

// USA: func_ov023_021dda04
extern "C" ARM void func_ov023_021dda04(struct Struct_ov023_021dda04* arg0) {
    func_0200fb8c((int*)GameState::GetInstance());

    if (arg0->unknown_777_ == 0) {
        func_ov023_021dc520(arg0);
        func_ov023_021dd404(arg0);
        if (!(arg0->unknown_774_ & 0x40)) {
            arg0->unknown_776_ = 3;
            return;
        }
        func_ov023_021ddbb8(arg0, ~0xf, 8);
        arg0->unknown_777_ = arg0->unknown_777_ + 1;
    }

    if (arg0->unknown_777_ == 1) {
        func_ov023_021dc520(arg0);
        func_ov023_021dd404(arg0);
        if (func_ov023_021ddbf8((struct Struct_ov023_021dd59c*)arg0) == 0) {
            arg0->unknown_777_ = arg0->unknown_777_ + 1;
        }
    }

    if (arg0->unknown_777_ != 2) return;

    func_ov023_021dc354(arg0);
    if (arg0->unknown_774_ & 0x200) {
        arg0->unknown_776_ = 3;
        return;
    }
    if (arg0->unknown_77b_ != 1) {
        func_020dc2d0(0);
    }
    arg0->unknown_776_ = 3;
}
