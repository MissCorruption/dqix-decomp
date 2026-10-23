#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov012_0218a9ec_5108 = 0x144c, Enum_ov012_0218a9ec_4924 = 0x1314, Enum_ov012_0218a9ec_4984 = 0x1348, Enum_ov012_0218a9ec_22172 = 0x543c };
#else
enum { Enum_ov012_0218a9ec_5108 = 0x13f4, Enum_ov012_0218a9ec_4924 = 0x133c, Enum_ov012_0218a9ec_4984 = 0x1378, Enum_ov012_0218a9ec_22172 = 0x569c };
#endif

struct Struct_02072a68 {
    short unknown_0_;
    void* unknown_4_;
};

struct Struct_02072a68_2 {
    struct Struct_02072a68* unknown_0_;
    short unknown_4_;
};

struct Struct_ov012_0218a9ec {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};

extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov012_0218a9ec
extern "C" ARM void func_ov012_0218a9ec(unsigned char* arg0, char* arg1, int arg2) {
    if (arg1 == 0) return;

    int var0 = *(int*)(arg0 + Enum_ov012_0218a9ec_5108) & 7;
    Struct_ov012_0218a9ec* var1 =
        (Struct_ov012_0218a9ec*)((char*)GameState::GetInstance() + Enum_ov012_0218a9ec_22172);

    if (arg2 != 0) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    int var2;
    for (var2 = 0; var2 < 8; var2++) {
        if (var2 != 0) {
            func_02042058(arg1, *(char**)(arg0 + Enum_ov012_0218a9ec_4984));
        }
        void* var3 = func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov012_0218a9ec_4924),
                                    (short)(((short)var1->unknown_3_1_) + var2 * 2 + 0x7530));
        func_02041b70(arg1, var2, (const char*)var3);
    }
}
