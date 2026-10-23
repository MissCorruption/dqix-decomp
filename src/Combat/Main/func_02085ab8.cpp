#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_0201137c(char* arg0, int arg1);

struct Struct_02085ab8 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 12;
    unsigned int unknown_19_4_ : 4;
    unsigned int unknown_1a_0_ : 16;
};

struct Struct_02085ab8_2 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 5;
    unsigned int unknown_1_1_ : 23;
};

struct Struct_020e8c00 {
    int unknown_0_;
    int unknown_4_;
};
extern struct Struct_020e8c00 data_020e8c00[];

#if defined(jpn)
enum { Enum_02085ab8_2296 = 0x860 };
#else
enum { Enum_02085ab8_2296 = 0x8f8 };
#endif

// USA: func_02085ab8
extern "C" ARM int func_02085ab8(unsigned char* arg0, struct Struct_02085ab8* arg1) {
    GameState* var0 = GameState::GetInstance();
    unsigned int var1 = arg1->unknown_19_4_;
    if (var1 == 2) {
        if ((arg0[Enum_02085ab8_2296] & 0x80) == 0) {
            return 0;
        }
        return func_0201137c((char*)var0, 0x67);
    }

    int var2 = 0x21;
    if (*(short*)(arg0 + 0x2ac) > 0) {
        var2 = ((struct Struct_02085ab8_2*)(arg0 + 0x29c))->unknown_0_4_;
    }

    int var3 = -1;
    struct Struct_020e8c00* var4 = data_020e8c00;
    while (var4->unknown_0_ != var3) {
        if (var4->unknown_0_ == var2) {
            var3 = (short)var4->unknown_4_;
            break;
        }
        var4++;
    }

    int var5 = 0;
    if (var3 != -1) {
        if (func_02083b00(arg0, var3)) {
            var5 += func_0201137c((char*)var0, var3);
        }
    }
    return var5;
}
