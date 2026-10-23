#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov011_02186548 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0xc];
    int unknown_20_;
    int unknown_24_;
    unsigned char unknown_28_;
    unsigned char unknown_29_;
};

extern "C" void func_ov023_021f6ed8(void*);
extern "C" void func_ov023_021fd03c(void*, int);

// USA: func_ov023_021fcdd4
extern "C" ARM int func_ov023_021fcdd4(struct Struct_ov011_02186548* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0x14;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = arg4;
    arg0->unknown_10_ = arg5;
    ((Object3D*)((char*)arg0 + 0x20))->Initialize();
    func_ov023_021fd03c(arg0, arg1);
    return 1;
}
