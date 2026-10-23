#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define REGION(j,u) (j)
#else
#define REGION(j,u) (u)
#endif

struct Struct_ov023_021dd974 {
    char unknown_0_[REGION(0x6f0,0x774)];
    unsigned short unknown_774_;
    char unknown_776_[7];
    signed char unknown_77d_;
};

extern "C" void func_ov023_021dfb4c(void* arg0);
extern "C" void func_ov023_021ddae4(void* arg0);
extern "C" void func_ov023_021dc520(void* arg0);
extern "C" void func_ov023_021dd404(void* arg0);
extern "C" int func_0200fb8c(int* arg0);
extern "C" int func_ov023_021ddbb8(void* arg0, int arg1, int arg2);

// USA: func_ov023_021dd974
extern "C" ARM void func_ov023_021dd974(void* arg0) {
    Struct_ov023_021dd974* var0 = (Struct_ov023_021dd974*)arg0;
    if (!(var0->unknown_774_ & 0x4000)) {
        func_ov023_021dfb4c(arg0);
    }
    func_ov023_021ddae4(arg0);

    if (var0->unknown_77d_ >= 0) {
        func_ov023_021dc520(arg0);
        func_ov023_021dd404(arg0);
    }

    if (!(var0->unknown_774_ & 0x40)) return;

    func_0200fb8c((int*)GameState::GetInstance());

    if (!(var0->unknown_774_ & 0x20)) return;

    func_ov023_021ddbb8(arg0, 0, 8);
    var0->unknown_774_ &= ~0x20;
}
