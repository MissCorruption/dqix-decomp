#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
#define data_ov004_0216fff8 data_ov004_02170750
#define func_ov004_02167b78 func_ov004_02168074
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" int func_ov023_021f9bc8(char* arg0);
struct Struct_ov004_02170010_2 { short unknown_0_; short unknown_2_; };
extern "C" int func_ov004_02167b78(void* arg0, struct Struct_ov004_02170010_2* arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

extern char data_ov004_0216fff8;

// USA: func_ov004_02168318
extern "C" ARM int func_ov004_02168318(void* arg0) {
    short var0 = func_02086aec((struct Struct_02053f7c*)func_02010828(GameState::GetInstance()), 0x5617);
    void* var1 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xe);
    if (!var1) return 0;
    if (func_ov024_021f6f10(var1) != 7) return 0;

    int var2 = func_ov023_021f9bc8((char*)var1);
    struct Struct_ov004_02170010_2* var3 = 0;
    if (var2 >= 0 && var2 < 6) {
        var3 = (struct Struct_ov004_02170010_2*)(&data_ov004_0216fff8 + var2 * 4);
    }
    func_ov004_02167b78(arg0, var3);

    if (var3 != 0 && var0 >= var3->unknown_0_) {
        func_ov011_021848a0(arg0, 0x82);
    } else {
        func_ov011_021848a0(arg0, 0x84);
    }
    return 0;
}
