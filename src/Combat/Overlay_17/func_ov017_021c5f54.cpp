#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);

extern "C" void* func_0207d78c(void);

struct Struct_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern "C" Struct_0207d7f4* func_0207d9bc(Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" int func_0207d978(Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" int func_0207da30(unsigned char* arg0, int arg1, int arg2);

extern "C" GameObject* func_ov017_021a278c(void* arg0, int arg1);

extern "C" void func_ov017_021c5e28(int arg0, int arg1);

extern "C" void func_0207d7f4(Struct_0207d7f4* arg0, unsigned short arg1, int arg2, unsigned char arg3, int arg4, unsigned short arg5, int arg6);
extern "C" void func_0207dcf0(int arg0);

struct Struct_ov017_021c5f54 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
};

// USA: func_ov017_021c5f54
extern "C" ARM void func_ov017_021c5f54(int arg0, Struct_ov017_021c5f54* arg1, int arg2, void* arg3, Struct_0202c1a4* arg4) {
    Struct_0207d7f4* var0;
    if (func_0202c1a4(arg4) != 0)
        return;
    var0 = (Struct_0207d7f4*)func_0207d78c();
    if (arg1->unknown_9_ == 0 && arg1->unknown_a_ == 0
        && func_ov017_021a278c(arg3, arg1->unknown_4_) == NULL
        && func_0207d9bc(var0, arg1->unknown_4_) == NULL) {
        ((void(*)(int, unsigned short))func_ov017_021c5e28)(arg0, arg1->unknown_4_);
        return;
    }
    if (func_0207d978(var0, arg1->unknown_4_))
        return;
    if (func_0207da30((unsigned char*)var0, arg1->unknown_4_, arg0))
        return;
    func_0207d7f4(var0, arg1->unknown_4_, arg0, arg1->unknown_8_, -1, arg1->unknown_6_, 0);
    func_0207dcf0(arg1->unknown_4_);
}
