#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_020243b8 {
    char unknown_0_[0x40];
    unsigned char unknown_40_0_ : 3;
    unsigned char unknown_40_3_ : 5;
};

struct Vector3i;

struct Struct_02037d88_9 {
    char unknown_0_[0x40];
    unsigned char unknown_40_0_ : 3;
    unsigned char unknown_40_3_ : 5;
    char unknown_41_[0x2f];
    unsigned short unknown_70_;
};

extern "C" void func_02076ccc(void*, int);

// USA: func_02077630
extern "C" ARM void func_02077630(void* arg0) {
    if (((Object3D*)((struct Struct_020243b8*)arg0))->GetInheritedAlpha() != 0 && ((Object3D*)((struct Struct_020243b8*)arg0))->GetInheritedAlpha() != 0x1f) {
        return;
    }
    if (((Object3D*)((struct Struct_020243b8*)arg0))->GetInheritedAlpha() == 0) {
        *(Vector3i*)((int*)((char*)arg0 + 0x44)) = *(Vector3i const*)((int*)((char*)arg0 + 0x158));
        ((Object3D*)((struct Struct_02037d88_9*)arg0))->TransitionInheritedAlpha(0x1f, 0xfa);
    }
    if (((Object3D*)((struct Struct_020243b8*)arg0))->GetInheritedAlpha() != 0x1f) {
        return;
    }
    func_02076ccc(arg0, 1);
}
