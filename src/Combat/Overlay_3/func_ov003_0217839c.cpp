#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov003_0217839c_336 = 0x144 };
#else
enum { Enum_ov003_0217839c_336 = 0x150 };
#endif

struct Struct_ov003_0217839c {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 27;
    unsigned int unknown_7_3_ : 1;
    unsigned int unknown_7_4_ : 1;
    unsigned int unknown_7_5_ : 1;
    unsigned int unknown_7_6_ : 2;
};

struct Struct_ov003_0217839c_2 {
    Struct_ov003_0217839c* unknown_0_;
    unsigned char unknown_4_[0x18 - 4];
    short unknown_18_;
};

struct Struct_ov003_0217839c_3 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
};

struct Struct_ov003_0217839c_4 {
    unsigned char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    unsigned char unknown_49c_1_ : 7;
};

extern unsigned char data_ov003_0217fb60[];

// USA: func_ov003_0217839c
extern "C" ARM int func_ov003_0217839c(int arg0, void* arg1) {
    if (((Struct_ov003_0217839c_3*)arg1)->unknown_8_0_ != 7) return 0;
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg0);
    if (var0 == 0) return 0;

    unsigned char var1;
    uintptr_t var2 = *(uintptr_t*)((char*)var0 + Enum_ov003_0217839c_336);
    uintptr_t var3 = var2 + 0x2d4;
    if (var3 == 0) return 0;
    if (*(short*)(var3 + 0x18) != 0x4680) return 0;

    unsigned char var4[2];
    var1 = 0;
    while (var1 < 8) {
        unsigned char var5 = data_ov003_0217fb60[var1];
        if (var5 == 0xff) break;
        uintptr_t var6 = var2 + 0x194 + ((unsigned int)var5 << 5);
        if (var6 != 0) {
            Struct_ov003_0217839c_2* var7 = (Struct_ov003_0217839c_2*)var6;
            if (var7->unknown_18_ >= 0) {
                Struct_ov003_0217839c* var8 = var7->unknown_0_;
                if (var8 != 0 && !var8->unknown_7_5_) {
                    var4[0] = var8->unknown_7_3_ ? 1 : 0;
                    var4[1] = var8->unknown_7_4_ ? 1 : 0;
                    if (var4[((Struct_ov003_0217839c_4*)var2)->unknown_49c_0_] == 0) return 1;
                }
            }
        }
        ++var1;
    }
    return 0;
}
