#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov024_021f6f10(void* arg0);
struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);
extern "C" void* func_ov023_021f79e4(void* arg0);

struct Struct_0204b988;
extern "C" void func_0204b988(struct Struct_0204b988*, unsigned int, int, int, unsigned short);

struct Struct_0204b8d0;
extern "C" void func_0204b8d0(struct Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);

struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2*, void*);

// USA: func_ov004_0216ad20
extern "C" ARM int func_ov004_0216ad20(void* arg0) {
    unsigned char var0 = func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());
    int var1 = 0;
    switch (var0) {
    case 2: var1 = 1; break;
    case 4: var1 = 2; break;
    case 3: var1 = 3; break;
    case 5: var1 = 4; break;
    }

    void* var2 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x67);
    if (!var2) return 0;
    if (func_ov024_021f6f10(var2) != 2) return 0;

    *(unsigned char*)((char*)var2 + 0xc) |= 1;
    void* var3 = func_ov023_021f79e4(var2);
    func_0204b988((struct Struct_0204b988*)var3, 0, 0, 0, 0xffff);
    if (var1 != 0) {
        func_0204b8d0((struct Struct_0204b8d0*)var3, var1, 0, 0, 2, 2, 0x1c, 2, 0xffff);
    }
    func_0204b0e8((struct Struct_02020cb8_2*)var3, 0);
    return 0;
}
