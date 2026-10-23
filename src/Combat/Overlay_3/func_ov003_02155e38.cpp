#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02155e38_503 = 0x1f3 };
enum { Enum_ov003_02155e38_336 = 0x144 };
enum { Enum_ov003_02155e38_2384 = 0x8b8 };
#else
enum { Enum_ov003_02155e38_503 = 0x1f7 };
enum { Enum_ov003_02155e38_336 = 0x150 };
enum { Enum_ov003_02155e38_2384 = 0x950 };
#endif

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083cbc(void* arg0, void* arg1, void* arg2);
extern "C" void func_02083e28(void* arg0, int arg1);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

extern "C" void func_ov017_021cc730(int arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3);
extern "C" void func_ov017_021cf078(int arg0, unsigned short arg1, unsigned char arg2);
extern "C" void func_ov017_021ccc34(int arg0);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov003_02155e38
extern "C" ARM void func_ov003_02155e38(void* arg0) {
    char* var0 = (char*)arg0;
    GameState* var1 = GameState::GetInstance();
    signed char var2 = *(signed char*)(var0 + Enum_ov003_02155e38_503);
    GameObject* var3 = var1->GetPartyMemberByIndex(var2);
    if (var3 == 0) {
        return;
    }
    int var4 = *(int*)((char*)var3 + Enum_ov003_02155e38_336);
    int var5 = *(int*)((char*)var4 + Enum_ov003_02155e38_2384);
    int var6 = func_02053c6c((unsigned char*)var3);
    char* var7 = (char*)var6;
    *(short*)(var7 + var5 * 2 + 0x16c) = 1;
    unsigned char* var8 = (unsigned char*)(var7 + 0x186);
    *(int*)(var7 + var5 * 4 + 0x138) = 0;
    unsigned char var9 = ++var8[var5];
    if (var9 > 10) {
        var8[var5] = var9 = 10;
    }
    func_02083cbc(var7, var0 + 0x90, var0 + 0xcc);
    func_02083e28(var7, 0);
    *(unsigned short*)(*(char**)((char*)var3 + 0x130) + 4) = *(unsigned short*)(*(char**)((char*)var3 + 0x134) + 0x30);
    *(unsigned short*)(*(char**)((char*)var3 + 0x130) + 6) = *(unsigned short*)(*(char**)((char*)var3 + 0x134) + 0x32);
    if (func_0202b7d8((int*)func_0202ae18()) == 0) {
        return;
    }
    signed char var10 = *(signed char*)(var0 + Enum_ov003_02155e38_503);
    func_ov017_021cc730(var10, 1, 0, 0);
    func_ov017_021cf078(var10, (unsigned char)var5, 0);
    func_ov017_021ccc34(var10);
    func_ov017_021c9e00(var10, 1, 0, 1);
}
