#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" int func_020535c8(signed char* arg0);
extern "C" void func_020531f0(void* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);

struct Struct_02037d88_2;
extern "C" int func_02052f44(struct Struct_02037d88_2* arg0, signed char* arg1, int arg2);

struct Struct_ov017_021cc26c {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[0xa - 0x6];
    unsigned char unknown_a_;
};

// USA: func_ov017_021cc26c
extern "C" ARM void func_ov017_021cc26c(int arg0, Struct_ov017_021cc26c* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cc26c_1816=0x508};
#else
 enum {Enum_ov017_021cc26c_1816=0x718};
#endif
    int var0 = arg1->unknown_4_;
    int var1 = arg1->unknown_5_;
    GameObject* var2 = func_0200ff1c(arg2, var0);
    if (var2 == NULL) return;

    if (arg1->unknown_a_ != 0) {
        if (func_020535c8((signed char*)var2) == 0) return;
        func_020531f0(var2);
        return;
    }

    void* var3 = *(void**)(arg3 + 0x3000 + Enum_ov017_021cc26c_1816);
    void* var4 = func_ov017_021b8478(var3);
    if (var4 != NULL) {
        if (func_020a35e0((unsigned char*)var4, var0 & 0xff) != 0) return;
    }
    func_02052f44((struct Struct_02037d88_2*)var2, (signed char*)((char*)arg1 + 6), var1);
}
