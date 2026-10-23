#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02098f20(int arg0, int arg1, int arg2);

struct Struct_ov023_021fd72c { int unknown_0_[12]; };
extern struct Struct_ov023_021fd72c data_ov023_021fd72c;

// USA: func_ov023_021e61f4
extern "C" ARM void func_ov023_021e61f4(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e61f4_5035=0x1373, Enum_ov023_021e61f4_5116=0x1454, Enum_ov023_021e61f4_5118=0x1456, Enum_ov023_021e61f4_5119=0x1457};
#else
 enum {Enum_ov023_021e61f4_5035=0x13ab, Enum_ov023_021e61f4_5116=0x13fc, Enum_ov023_021e61f4_5118=0x13fe, Enum_ov023_021e61f4_5119=0x13ff};
#endif
    struct Struct_ov023_021fd72c var0 = data_ov023_021fd72c;
    char* var1 = (char*)arg0;
    *(unsigned char*)(var1 + Enum_ov023_021e61f4_5035) = 0;

    GameState::GetInstance();

    int var2 = func_02098f20(*(unsigned short*)(var1 + Enum_ov023_021e61f4_5116), *(unsigned char*)(var1 + Enum_ov023_021e61f4_5118), *(unsigned char*)(var1 + Enum_ov023_021e61f4_5119));
    if (var2 < 0x82) *(unsigned char*)(var1 + Enum_ov023_021e61f4_5035) |= 0x2;
    if (var2 > 0) *(unsigned char*)(var1 + Enum_ov023_021e61f4_5035) |= 0x1;

    if (*(unsigned char*)(var1 + Enum_ov023_021e61f4_5118) < 12) {
        int var3 = func_02098f20(*(unsigned short*)(var1 + Enum_ov023_021e61f4_5116), *(unsigned char*)(var1 + Enum_ov023_021e61f4_5118) + 1, *(unsigned char*)(var1 + Enum_ov023_021e61f4_5119));
        if (var3 >= 0) *(unsigned char*)(var1 + Enum_ov023_021e61f4_5035) |= 0x4;
    }
    if (*(unsigned char*)(var1 + Enum_ov023_021e61f4_5118) > 1) {
        int var4 = func_02098f20(*(unsigned short*)(var1 + Enum_ov023_021e61f4_5116), *(unsigned char*)(var1 + Enum_ov023_021e61f4_5118) - 1, *(unsigned char*)(var1 + Enum_ov023_021e61f4_5119));
        if (var4 <= 0x82) *(unsigned char*)(var1 + Enum_ov023_021e61f4_5035) |= 0x8;
    }

    if (*(unsigned short*)(var1 + Enum_ov023_021e61f4_5116) % 4 == 0) var0.unknown_0_[1] = 29;
    unsigned char var5 = *(unsigned char*)(var1 + Enum_ov023_021e61f4_5118);
    unsigned char var6 = *(unsigned char*)(var1 + Enum_ov023_021e61f4_5119);
    if (var6 < var0.unknown_0_[var5 - 1]) {
        int var7 = func_02098f20(*(unsigned short*)(var1 + Enum_ov023_021e61f4_5116), var5, var6 + 1);
        if (var7 >= 0) *(unsigned char*)(var1 + Enum_ov023_021e61f4_5035) |= 0x10;
    }

    if (*(unsigned char*)(var1 + Enum_ov023_021e61f4_5119) > 1) {
        int var8 = func_02098f20(*(unsigned short*)(var1 + Enum_ov023_021e61f4_5116), *(unsigned char*)(var1 + Enum_ov023_021e61f4_5118), *(unsigned char*)(var1 + Enum_ov023_021e61f4_5119) - 1);
        if (var8 <= 0x82) *(unsigned char*)(var1 + Enum_ov023_021e61f4_5035) |= 0x20;
    }
}
