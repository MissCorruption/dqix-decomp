#if defined(jpn)
enum { Enum_ov017_021b05c4_2384 = 0x8b8 };
#else
enum { Enum_ov017_021b05c4_2384 = 0x950 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021b05c4 {
    char unknown_0_[0xa];
    unsigned char unknown_a_;
    char unknown_b_[0xc - 0xb];
    unsigned char unknown_c_;
    char unknown_d_[0x1b - 0xd];
    unsigned char unknown_1b_[4];
    char unknown_1f_[0x23 - 0x1f];
    unsigned char unknown_23_;
    unsigned char unknown_24_;
    unsigned char unknown_25_;
};

extern "C" void func_ov017_021d0d58(void);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void* func_0202ae24(void);
extern "C" int func_0205e488(void* arg0);
extern "C" void* func_ov017_021b0fe0(int arg0, int arg1);

// USA: func_ov017_021b05c4
extern "C" ARM unsigned char func_ov017_021b05c4(struct Struct_ov017_021b05c4* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_23_ == 0) {
        if (arg0->unknown_24_ == 4) {
            func_ov017_021d0d58();
            arg0->unknown_25_ = 0;
            return 0xa;
        }
        int var1 = -1;
        unsigned char* var2 = &arg0->unknown_24_;
        while (arg0->unknown_24_ < 4) {
            if (arg0->unknown_c_ != arg0->unknown_24_ && arg0->unknown_1b_[arg0->unknown_24_] != 3 && arg0->unknown_1b_[arg0->unknown_24_] != 0) {
                var1 = arg0->unknown_24_;
                arg0->unknown_24_ = *var2 + 1;
                break;
            }
            arg0->unknown_24_ = *var2 + 1;
        }
        if (var1 < 0) {
            return arg0->unknown_a_;
        }
        GameObject* var3 = func_0200ff1c(var0, var1);
        if (var3 == 0) {
            return arg0->unknown_a_;
        }
        int var4 = func_02053c6c((unsigned char*)var3);
        int var5 = *(int*)((char*)var4 + Enum_ov017_021b05c4_2384) & 0xff;
        func_ov017_021b0fe0(var1, var5);
        arg0->unknown_23_ = arg0->unknown_23_ + 1;
    } else if (arg0->unknown_23_ == 1) {
        void* var6 = func_0202ae24();
        if (func_0205e488(var6) != 0) {
            arg0->unknown_23_ = 0;
        }
    }
    return arg0->unknown_a_;
}
