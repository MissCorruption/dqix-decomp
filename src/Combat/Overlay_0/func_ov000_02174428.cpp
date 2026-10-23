#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" int func_020100a8(GameState* arg0);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern int data_02108760;
struct Struct_ov000_02174428;
extern "C" void func_ov000_02171d90(struct Struct_ov000_02174428* arg0, int arg1);
extern "C" void func_ov000_02170db0(void* arg0);

// USA: func_ov000_02174428
extern "C" ARM void func_ov000_02174428(void* arg0, int arg1, int arg2, int arg3,
                                          signed char arg4, short arg5, signed char arg6, unsigned short arg7) {
    void* var0 = func_ov000_02161318(arg0, arg1);
    if (!var0) return;
    GameState* var1 = GameState::GetInstance();
    int var2 = func_020100a8(var1);
    if (arg1 != var2 && arg2 == 0x64) {
        signed char var3 = *(signed char*)((char*)var0 + 0x18);
        signed char var4 = *(signed char*)((char*)var0 + var3 + 0x10);
        if (arg2 != var4) {
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 0x19, 0);
        }
    }
#if defined(jpn)
    enum { Enum_ov000_02174428_1086 = 0x47e };
#else
    enum { Enum_ov000_02174428_1086 = 0x43e };
#endif
    if (*((unsigned char*)var0 + Enum_ov000_02174428_1086)) return;
    int var5 = 0;
    int var6 = *(int*)((char*)var0 + 0x4c);
    if (var6 >= 0 && var6 <= 3) var5 = 1;
    if (!var5) return;
    signed char var7 = *(signed char*)((char*)var0 + 0x18);
    signed char* var8 = (signed char*)((char*)var0 + var7 + 0x10);
    *var8 = (signed char)arg2;
    *((unsigned char*)var0 + 0x1c) = (unsigned char)arg3;
    *((unsigned char*)var0 + 0x1d) = (unsigned char)arg4;
    *(short*)((char*)var0 + 0x2c) = arg5;
    *((unsigned char*)var0 + 0x2e) = (unsigned char)arg6;
    *(unsigned short*)((char*)var0 + 0x26) = arg7;
    func_ov000_02171d90((struct Struct_ov000_02174428*)var0, arg5);
    func_ov000_02170db0(var0);
}
