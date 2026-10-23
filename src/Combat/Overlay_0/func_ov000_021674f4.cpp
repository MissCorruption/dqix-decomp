#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
struct Struct_02048150;
extern "C" int func_02086ef0(struct Struct_02048150* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083c48(void* arg0, int arg1, int arg2);

// USA: func_ov000_021674f4
extern "C" ARM void func_ov000_021674f4(unsigned char* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_02048150* var1 = (struct Struct_02048150*)func_02010828(var0);
#if defined(jpn)
    enum { Enum_ov000_021674f4_668 = 0x218 };
#else
    enum { Enum_ov000_021674f4_668 = 0x29c };
#endif
    unsigned char* var2 = *(unsigned char**)((char*)*(void**)(arg0 + Enum_ov000_021674f4_668) + 0x8000 + 0xe18);
    for (int var3 = 0; var3 < 4; var3++) {
        if (!func_020a35e0(var2, var3)) continue;
        if (arg1 == 0) {
            if (!func_02086ef0(var1, var3)) continue;
        }
        GameObject* var4 = var0->GetPartyMemberByIndex(var3);
        if (!var4) continue;
        int var5 = func_02053c6c((unsigned char*)var4);
        int var6 = func_02086ef0(var1, var3);
        func_02083c48((void*)var5, var6, 1);
    }
}
