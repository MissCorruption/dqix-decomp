#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov017_021b08f4_1816 = 0x508, Enum_ov017_021b08f4_1792 = 0x4f0 };
#else
enum { Enum_ov017_021b08f4_1816 = 0x718, Enum_ov017_021b08f4_1792 = 0x700 };
#endif

extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void func_ov000_021682ec(void* arg0);
extern "C" void func_ov017_021d0b30(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021b0bc0(void* arg0);
extern "C" int func_ov017_021b0b4c(void*);
extern "C" int func_02046b08(void** arg0);

struct Struct_ov017_021b08f4 {
    char unknown_0_[0x9];
    unsigned char unknown_9_;
    char unknown_a_[0x26 - 0xa];
    unsigned char unknown_26_;
    unsigned char unknown_27_;
    char unknown_28_[0x2c - 0x28];
    unsigned char unknown_2c_;
    char unknown_2d_[0x34 - 0x2d];
    int unknown_34_;
};

// USA: func_ov017_021b08f4
extern "C" ARM unsigned char func_ov017_021b08f4(Struct_ov017_021b08f4* arg0) {
    GameState::GetInstance();
    int var0 = ((int)GetGameResources());
    char* var1 = (char*)var0 + 0x3000;
    void* var2 = *(void**)(var1 + Enum_ov017_021b08f4_1816);
    void* var3 = *(void**)(var1 + Enum_ov017_021b08f4_1792);
    if (*((unsigned char*)var2 + 0x2) != 0) {
        void* var4 = func_ov017_021b8468(var2);
        if (var4 != 0) {
            func_ov000_021682ec(var4);
        }
    }

    if (arg0->unknown_9_ == 0) {
        if (arg0->unknown_26_ == 0) {
            func_ov017_021d0b30(5, 0, 0);
            if (func_ov017_021b0b4c(arg0) != 0) {
                arg0->unknown_26_ = arg0->unknown_26_ + 1;
            } else {
                arg0->unknown_26_ = 2;
            }
        } else if (arg0->unknown_26_ == 1) {
            if (func_02046b08((void**)var3) != 0) {
                arg0->unknown_26_ = arg0->unknown_26_ + 1;
            }
        } else if (arg0->unknown_26_ == 2) {
            if ((arg0->unknown_27_ & 0x10) != 0) {
                func_ov017_021b0bc0(arg0);
                func_ov017_021d0b30(7, 0, 0);
                arg0->unknown_26_ = arg0->unknown_26_ + 1;
            }
        }
    } else {
        if (arg0->unknown_26_ == 0) {
            if (arg0->unknown_34_ != 0) {
                if (func_ov017_021b0b4c(arg0) != 0) {
                    arg0->unknown_26_ = arg0->unknown_26_ + 1;
                } else {
                    func_ov017_021d0b30(6, 0, 0);
                    arg0->unknown_26_ = 2;
                }
            }
        } else if (arg0->unknown_26_ == 1) {
            if (func_02046b08((void**)var3) != 0) {
                func_ov017_021d0b30(6, 0, 0);
                arg0->unknown_26_ = arg0->unknown_26_ + 1;
            }
        } else if (arg0->unknown_26_ == 2 && arg0->unknown_2c_ == 2) {
            func_ov017_021b0bc0(arg0);
        }
    }

    return *((unsigned char*)arg0 + 0xa);
}
