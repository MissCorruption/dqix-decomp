#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020ddb38_336 = 0x144 };
#else
enum { Enum_020ddb38_336 = 0x150 };
#endif
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_020ddb38 { unsigned int unknown_0_[8]; };
struct Struct_020ddb38_2 {
    unsigned int unknown_0_0_ : 4;
    unsigned int : 27;
    unsigned int unknown_3_7_ : 1;
};
struct Struct_020ddb38_3 {
    char unknown_0_[0x2c];
    short unknown_2c_;
};
struct Struct_02061c04_22 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
struct Struct_020a0504;

extern "C" int func_020ddb20(unsigned int* arg0);
extern "C" void func_0208386c(struct Struct_02061c04_22* arg0, int arg1);
extern "C" void* func_ov000_02171b9c(void* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_020ac4c0(void* arg0);
extern "C" void func_020a0504(struct Struct_020a0504* arg0, unsigned int arg1);
extern "C" int func_020ac494(void* arg0);
extern "C" void func_02083738(void* arg0, int arg1);

// USA: func_020ddb38
extern "C" ARM int func_020ddb38(int arg0, int arg1, struct Struct_020ddb38_3* arg2, struct Random* arg3) {
    int var0;
    GameObject* var1;
    struct Struct_020ddb38* var2;
    char var3[0xb0];

    var1 = func_0200ff1c(GameState::GetInstance(), arg0);
    var0 = (arg0 >= 0 && arg0 <= 3);
    if (!var0) return 0;
    if (var1 == 0) return 0;
    if (arg2 == 0) return 0;
    if (arg2->unknown_2c_ != 0x4667) {
        if (arg1 < 0) goto fail;
        if (arg1 < 0x10) goto ok;
    fail:
        return 0;
    ok:
        var2 = (struct Struct_020ddb38*)func_ov000_02171b9c(arg2, arg1);
    } else {
        var2 = (struct Struct_020ddb38*)((char*)(*(struct Struct_02061c04_22**)((char*)var1 + Enum_020ddb38_336)) + 0x2d4);
    }
    if (var2 == 0) return 0;
    if (!func_020ddb20(var2->unknown_0_)) return 0;
    switch (((struct Struct_020ddb38_2*)&var2->unknown_0_[2])->unknown_0_0_) {
    case 8:
    case 9:
    case 0xa:
        func_0208386c(*(struct Struct_02061c04_22**)((char*)var1 + Enum_020ddb38_336), (signed char)arg1);
        break;
    default:
        if (*(short*)((char*)var2 + 0x18) == 0x4667) {
            if (arg3 == 0) arg3 = GetBTRandom();
            if (NextRandomMax(arg3, 100) < 0x19) {
                func_02083738((void*)(int)func_02053c6c((unsigned char*)var1), 7);
                return 2;
            }
        }
        return 0;
    }
    if (((struct Struct_020ddb38_2*)&var2->unknown_0_[2])->unknown_3_7_) {
        func_020ac4c0(var3);
        func_020a0504((struct Struct_020a0504*)var3, 1);
        func_020ac494(var3);
    }
    return 1;
}
