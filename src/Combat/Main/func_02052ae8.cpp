#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#if defined(jpn)
#define func_02052bfc func_02053fd8
#endif

int fix32abs(int x);
extern "C" void func_0205416c(void* arg0);

extern "C" {
    void _ZN8Object3D14AdvanceEffectsEv(void* arg0);
    void func_02053634(void* arg0);
    void func_020489e8(void* arg0);
    void func_02052bfc(void* arg0);
}

struct Struct_02037d88_11 {
    char unknown_0_[IS_JPN ? 0x170 : 0x17c];
    signed char unknown_17c_;
    char unknown_17d_[0x1b4 - 0x17d];
    int unknown_1b4_;
    int unknown_1b8_;
    int unknown_1bc_;
};

// USA: func_02052ae8
extern "C" ARM void func_02052ae8(struct Struct_02037d88_11* arg0) {
    int var0 = arg0->unknown_17c_ > 0;
    if (var0) {
        _ZN8Object3D14AdvanceEffectsEv(arg0);
        func_02053634(arg0);
    } else {
        func_020489e8(arg0);
        func_02052bfc(arg0);
    }

    if (arg0->unknown_1b4_ > 0 || arg0->unknown_1b8_ > 0) {
        int var1 = fix32abs((int)((float)(arg0->unknown_1b4_ - arg0->unknown_1b8_) * 0.1f));
        if (var1 == 0) {
            arg0->unknown_1b8_ = arg0->unknown_1b4_;
        }
        if (var1 < arg0->unknown_1bc_) {
            arg0->unknown_1bc_ = var1;
        } else if (arg0->unknown_1bc_ < var1) {
            arg0->unknown_1bc_ += 0x14;
            if (var1 < arg0->unknown_1bc_) {
                arg0->unknown_1bc_ = var1;
            }
            if (arg0->unknown_1bc_ > 0x199) {
                arg0->unknown_1bc_ = 0x199;
            }
            var1 = arg0->unknown_1bc_;
        }

        if (arg0->unknown_1b4_ < arg0->unknown_1b8_) {
            arg0->unknown_1b8_ = arg0->unknown_1b8_ - var1;
            if (arg0->unknown_1b8_ < arg0->unknown_1b4_) {
                arg0->unknown_1b8_ = arg0->unknown_1b4_;
            }
        } else if (arg0->unknown_1b8_ < arg0->unknown_1b4_) {
            arg0->unknown_1b8_ = arg0->unknown_1b8_ + var1;
            if (arg0->unknown_1b4_ < arg0->unknown_1b8_) {
                arg0->unknown_1b8_ = arg0->unknown_1b4_;
            }
        }
    }

    func_0205416c(arg0);
}
