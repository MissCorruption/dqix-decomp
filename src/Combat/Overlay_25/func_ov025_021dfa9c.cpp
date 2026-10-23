#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" int func_ov000_02160f9c(void* arg0);
struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;
extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
struct Struct_ov000_0215440c;
struct Struct_ov000_021600f8;
extern "C" struct Struct_ov000_021600f8* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" int func_02048bd0(unsigned char* arg0);
extern "C" short func_ov000_0215ffa0(void* arg0);
extern "C" int func_02048ae0(void* arg0, int arg1, void* arg2, int arg3);

// USA: func_ov025_021dfa9c
extern "C" ARM int func_ov025_021dfa9c(void* arg0, void* arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_ov000_02160f20(arg0);
    int var2 = func_ov000_02160f9c(arg0);
    struct Struct_ov000_02160094* var3 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)var1, 0);
    int var4;
    GameObject* var5;
    char* var6;
    struct Struct_ov000_02160094* var7;
    struct Struct_ov000_021600f8* var8;
    struct Struct_ov000_021600f8* var9;
    int var10[2];
    int var11;

    if (var3 == NULL) goto fail;
    var4 = *(unsigned short*)var1;
    var5 = var0->GetCombatantByIndex(*(unsigned short*)((char*)var3 + 0x20));
    if (var5 == NULL) goto fail;
    if (var2 <= 0) goto fail;
    if (var4 != 1) goto fail;
    if (!func_02048bd0((unsigned char*)var5)) goto fail;

    var6 = (char*)arg1 + 0x21c + 0x8000 + (var2 - 1) * 0x28;
    if (var6 == NULL) goto fail;

    var7 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)var6, 0);
    if (var7 == NULL) goto fail;
    if (*(unsigned short*)((char*)var7 + 0x20) != *(unsigned short*)((char*)var3 + 0x20)) goto fail;

    var8 = func_ov000_021600f8((struct Struct_ov000_0215440c*)var1, 0);
    var9 = func_ov000_021600f8((struct Struct_ov000_0215440c*)var6, 0);
    if (var8 == NULL || var9 == NULL) goto fail;
    if (*(short*)((char*)var8 + 0xe) != *(short*)((char*)var9 + 0xe)) goto fail;
    if (*(unsigned short*)var6 != 1) goto fail;

    if (*(short*)((char*)var9 + 0xe) != func_ov000_0215ffa0(var9)) goto fail;

    var11 = func_02048ae0(var5, var4, &var10[0], 2);
    if (var11 >= 2) return var10[1];

fail:
    return 0;
}
