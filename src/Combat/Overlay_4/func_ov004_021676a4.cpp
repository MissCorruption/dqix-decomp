#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);

extern "C" void* func_ov011_021849c8(void* arg0);

struct Struct_ov004_021676a4 { char unknown_0_[0xc]; unsigned char unknown_c_; };
extern "C" Struct_ov004_021676a4* func_ov023_021f6880(void* arg0, int arg1);

extern "C" int func_ov024_021f6f10(void* arg0);
extern "C" void* func_ov023_021f79e4(void* arg0);

struct Struct_0204b988;
extern "C" void func_0204b988(struct Struct_0204b988* arg0, unsigned int arg1, int arg2, int arg3, unsigned short arg4);
struct Struct_0204b8d0;
extern "C" void func_0204b8d0(struct Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2* arg0, void* arg1);

// USA: func_ov004_021676a4
extern "C" ARM int func_ov004_021676a4(void* arg0) {
    int var0 = func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());
    unsigned int var1 = 1;
    switch (var0) {
    case 2:
        var1 = 2;
        break;
    case 4:
        var1 = 3;
        break;
    case 3:
        var1 = 4;
        break;
    case 5:
        var1 = 5;
        break;
    }

    void* var2 = func_ov011_021849c8(arg0);
    Struct_ov004_021676a4* var3 = func_ov023_021f6880(var2, 0xd);
    if (!var3) return 0;
    if (func_ov024_021f6f10(var3) != 2) return 0;

    var3->unknown_c_ |= 1;
    void* var4 = func_ov023_021f79e4(var3);
    func_0204b988((struct Struct_0204b988*)var4, 1, 0, 0, 0xffff);

    if (var1 > 1) {
        func_0204b8d0((struct Struct_0204b8d0*)var4, var1, 0, 0, 0x16, 2, 9, 2, 0xffff);
    }
    func_0204b0e8((struct Struct_02020cb8_2*)var4, 0);
    return 0;
}
