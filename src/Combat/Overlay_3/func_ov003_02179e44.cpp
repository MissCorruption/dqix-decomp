#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02179e44_4112 = 0xf8c };
enum { Enum_ov003_02179e44_4116 = 0xf90 };
enum { Enum_ov003_02179e44_4118 = 0xf92 };
enum { Enum_ov003_02179e44_4124 = 0xf98 };
enum { Enum_ov003_02179e44_4144 = 0xfac };
enum { Enum_ov003_02179e44_4163 = 0xfbf };
enum { Enum_ov003_02179e44_2204 = 0x818 };
#else
enum { Enum_ov003_02179e44_4112 = 0x1010 };
enum { Enum_ov003_02179e44_4116 = 0x1014 };
enum { Enum_ov003_02179e44_4118 = 0x1016 };
enum { Enum_ov003_02179e44_4124 = 0x101c };
enum { Enum_ov003_02179e44_4144 = 0x1030 };
enum { Enum_ov003_02179e44_4163 = 0x1043 };
enum { Enum_ov003_02179e44_2204 = 0x89c };
#endif

#include "GameState/GameState.h"

extern "C" short func_02080468(void* arg0, int arg1);
struct Struct_020a0b8c;
extern "C" int func_020a0b8c(struct Struct_020a0b8c* arg0);

// USA: func_ov003_02179e44
extern "C" ARM int func_ov003_02179e44(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    int var2 = *(int*)(arg0 + Enum_ov003_02179e44_4144);
    void* var3 = *(void**)(arg0 + Enum_ov003_02179e44_2204);
    int var4;
    switch (var2) {
        case 1: var4 = 0x11; break;
        case 2: var4 = 0x12; break;
        case 3: var4 = 0x13; break;
        case 4: var4 = 0x14; break;
    }

    *(char*)(arg0 + Enum_ov003_02179e44_4163) = -1;
    short var5 = func_02080468(var3, var4);
    short var6 = *(short*)(arg0 + Enum_ov003_02179e44_4112);
    int var7 = *(int*)(arg0 + Enum_ov003_02179e44_4144);
    short var8 = (short)(var6 - var5);
    if (var7 > var8) {
        int var9 = *(int*)(arg0 + Enum_ov003_02179e44_4124 + var8 * 4);
        *(char*)(arg0 + Enum_ov003_02179e44_4163) = (char)var9;
        *(short*)(arg0 + Enum_ov003_02179e44_4116) = 0;
        *(short*)(arg0 + Enum_ov003_02179e44_4118) = 1;
        return 1;
    } else {
        int var10 = func_020a0b8c((struct Struct_020a0b8c*)var1);
        int var11 = (var10 + 7) / 8;
        *(short*)(arg0 + Enum_ov003_02179e44_4116) = 0;
        *(short*)(arg0 + Enum_ov003_02179e44_4118) = var11;
        short var12 = *(short*)(arg0 + Enum_ov003_02179e44_4118);
        if (var12 == 0) {
            var12 = 1;
            *(short*)(arg0 + Enum_ov003_02179e44_4118) = var12;
        }
        return var12;
    }
}
