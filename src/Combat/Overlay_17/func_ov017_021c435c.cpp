#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4*);
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void* func_ov017_021b8478(void* arg0);

struct Struct_0203d028_13;

struct Struct_ov017_021c435c {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_0_ : 4;
    unsigned char unknown_5_4_ : 4;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
};

// USA: func_ov017_021c435c
extern "C" ARM void func_ov017_021c435c(int arg0, struct Struct_ov017_021c435c* arg1, GameState* arg2, unsigned char* arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021c435c_1816=0x508, Enum_ov017_021c435c_348=0x150};
#else
 enum {Enum_ov017_021c435c_1816=0x718, Enum_ov017_021c435c_348=0x15c};
#endif
    if (arg1->unknown_4_ & 1) {
        if (func_0202c1a4(arg4) != arg1->unknown_5_4_) return;
    }
    unsigned int var0 = arg1->unknown_5_0_;
    if (var0 == func_0202c1a4(arg4)) return;
    GameObject* var1 = func_0200ff1c(arg2, var0);
    if (!var1) return;
    unsigned short var2 = arg1->unknown_6_;
    if (arg1->unknown_4_ & 2) var2 = arg1->unknown_8_;
    unsigned char* var3 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021c435c_1816);
    void* var4 = func_ov017_021b8478(var3);
    if (var3[2] != 0) {
        if (func_020a35e0((unsigned char*)var4, arg1->unknown_5_0_)) {
            *(unsigned int*)((char*)var1 + Enum_ov017_021c435c_348) = var2;
            return;
        }
    }
    ((Object3D*)((struct Struct_0203d028_13*)var1))->SetField06(var2);
}
