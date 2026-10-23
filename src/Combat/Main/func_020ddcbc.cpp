#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020ddcbc_336 = 0x144 };
#else
enum { Enum_020ddcbc_336 = 0x150 };
#endif
#include "GameState/GameState.h"

struct Struct_0201099c_9 { unsigned int unknown_0_[8]; };
struct Struct_020ddcbc {
    unsigned int unknown_0_0_ : 4;
    unsigned int : 27;
    unsigned int unknown_3_7_ : 1;
};
struct Struct_0201099c_10;
struct Struct_02061c04_22 { unsigned char unknown_0_[0x454]; short unknown_454_[8]; };
struct Struct_020a0504;

extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" int func_020ddb20(unsigned int* arg0);
extern "C" void func_0208386c(struct Struct_02061c04_22* arg0, int arg1);
extern "C" int func_020ac4c0(void* arg0);
extern "C" void func_020a0504(struct Struct_020a0504* arg0, unsigned int arg1);
extern "C" int func_020ac494(void* arg0);

// USA: func_020ddcbc
extern "C" ARM int func_020ddcbc(int arg0, int arg1, struct Struct_0201099c_10* arg2) {
    GameObject* var0;
    short* var1;
    struct Struct_0201099c_9* var2;
    int var3;
    char var4[0xb0];

    var3 = (arg0 >= 0 && arg0 <= 3);
    if (!var3) return 0;
    if (arg2 == 0) return 0;
    if (arg1 < 0 || arg1 >= 8) return 0;

    var0 = func_0200ff1c(GameState::GetInstance(), arg0);
    if (var0 == 0) return 0;

    var1 = (short*)((char*)(*(struct Struct_02061c04_22**)((char*)var0 + Enum_020ddcbc_336)) + 0x454);
    if (var1 == 0) return 0;

    var2 = func_020dedd0(arg2, var1[arg1]);
    if (var2 == 0) return 0;
    if (!func_020ddb20(var2->unknown_0_)) return 0;

    switch (((struct Struct_020ddcbc*)&var2->unknown_0_[2])->unknown_0_0_) {
        case 8:
        case 9:
        case 0xa:
            func_0208386c(*(struct Struct_02061c04_22**)((char*)var0 + Enum_020ddcbc_336), (signed char)arg1);
            break;
    }

    if (((struct Struct_020ddcbc*)&var2->unknown_0_[2])->unknown_3_7_) {
        func_020ac4c0(var4);
        func_020a0504((struct Struct_020a0504*)var4, 1);
        func_020ac494(var4);
    }
    return 1;
}
