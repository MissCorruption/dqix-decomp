#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021753a0_2164 = 0x7f0 };
enum { Enum_ov003_021753a0_4096 = 0xf00 };
enum { Enum_ov003_021753a0_58 = 0xb6 };
#else
enum { Enum_ov003_021753a0_2164 = 0x874 };
enum { Enum_ov003_021753a0_4096 = 0x1000 };
enum { Enum_ov003_021753a0_58 = 0x3a };
#endif
#include "Combat/Main/MessageSlotTable.h"
#include "GameState/GameState.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);

extern "C" GameObject* func_0200ff94(GameState* arg0, int arg1);

extern "C" int func_020dd4c4(void* arg0, void* arg1);
extern "C" void func_020dd7ac(void* arg0);
extern "C" void func_020dd8b4(int arg0, int arg1, int arg2, int arg3);

extern unsigned char data_ov003_0217fac8[];

struct Struct_ov003_021753a0 {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 7;
    unsigned int unknown_c_7_ : 4;
    unsigned int unknown_d_3_ : 21;
};

// USA: func_ov003_021753a0
#pragma opt_common_subs off
extern "C" ARM int func_ov003_021753a0(char* arg0, int arg1, int arg2, int arg3) {
    int var0 = 1;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200ff94(var1, arg1);
    if (var2 == 0) return var0;

    int var3 = *(short*)(arg0 + Enum_ov003_021753a0_4096 + Enum_ov003_021753a0_58);
    struct Struct_0201099c_9* var4 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_021753a0_2164), var3);
    if (var4 == 0) return var0;

    func_020dd4c4((void*)arg1, var4);

    Struct_020dd7ac var5;
    func_020dd7ac(&var5);
    func_020dd8b4((int)&var5, arg1, (int)var4, 0);

    int var6 = ((struct Struct_ov003_021753a0*)var4)->unknown_c_7_;
    unsigned char var7 = data_ov003_0217fac8[var6];
    func_020dd9b4(&var5, var7, (void*)arg2, (void*)arg3);

    switch (var7) {
    case 3:
    case 4:
        var0 = 0;
        break;
    }
    return var0;
}
