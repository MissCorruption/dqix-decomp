#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02010604;
#if defined(jpn)
enum { Enum_ov017_0219cdc0_396 = 0x180 };
#else
enum { Enum_ov017_0219cdc0_396 = 0x18c };
#endif
extern "C" void* func_0202ae18();
extern "C" int func_020100a8(GameState*);
extern "C" void func_02048150(GameObject*, int, int);
extern "C" int func_02033b88(Struct_02010604*, int);
extern "C" void func_ov017_021cedf4(int, int, int);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_ov017_02191108(void*, int, int, int, int);
extern "C" GameObject* func_0200ff58(GameState*, int);
extern "C" int func_020546a8(void*);
extern "C" void func_ov017_021907dc(int, int, int, int, int);
extern "C" void func_02039d58(unsigned char*);
extern "C" int func_0202c508(void*);
extern "C" void* func_02010828(GameState*);

static inline int inline_ov017_0219cdc0(unsigned short arg0, unsigned short arg1) { return arg0 == arg1; }
static inline int inline_ov017_0219cdc0_2(unsigned short arg0, unsigned short arg1) { return !inline_ov017_0219cdc0(arg0, arg1); }

// USA: func_ov017_0219cdc0
extern "C" ARM void func_ov017_0219cdc0(unsigned short arg0, int arg1, signed char arg2) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    GameResources* var2 = GetGameResources();
    int var3 = !inline_ov017_0219cdc0_2(arg0, 10100);
    unsigned short var4 = (arg0 / 100) * 100;
    int var5 = (var3 | (var4 == 4100)) != 0;
    var5 = (var5 | (var4 == 4300)) != 0;
    var5 = (var5 | (var4 == 4500)) != 0;
    var5 = (var5 | (var4 == 6400)) != 0;
    int var6 = (var3 | (var4 == 4300)) != 0;
    var6 = (var6 | (var4 == 6400)) != 0;
    int var7 = inline_ov017_0219cdc0(arg0, 50101) != 0;
    var7 = (var7 | (arg0 == 50201)) != 0;
    var7 = (var7 | (arg0 == 50301)) != 0;
    var7 = (var7 | (arg0 == 50401)) != 0;
    if (var5) {
        int var8 = func_020100a8(var0);
        if (!arg1) var8 = arg2;
        GameObject* var9 = (GameObject*)var0->GetPartyMemberByIndex(var8);
        if (var9 && (**(unsigned int**)((char*)var9 + 0x130) & 1)) {
            if (var6) func_02048150(var9, 1, 1);
            else func_02048150(var9, 0, 1);
            (*(unsigned int*)((char*)var9 + Enum_ov017_0219cdc0_396)) &= ~1;
            func_02033b88((Struct_02010604*)var9, 0);
            if (arg1) {
                func_ov017_021cedf4(var8, 1, 0);
                func_ov017_021c9e00(var8, 0, 0, 1);
                func_ov017_02191108(var2, 1, 1, 1, 1);
            } else {
                if (var0->GetPartyMemberByIndex(var8)) {
                    GameObject* var10 = func_0200ff58(var0, arg2);
                    if (var10) var8 = func_020546a8(var10);
                    func_ov017_021907dc((int)var2, var8, 1, 1, 1);
                    GameObject* var11 = (GameObject*)var0->GetPartyMemberByIndex(var8);
                    if (var11) {
                        var11->obj3D_.SetInheritedAlpha(31);
                        func_02039d58((unsigned char*)var11);
                    }
                }
            }
        }
    }
    if (var7 && func_0202c508(var1) && arg1) {
        unsigned char* var12 = (unsigned char*)func_02010828(var0);
        GameObject* var13;
        int var14;
        int var15;
        int var16;
        var14 = 1;
        for (var15 = 0; var15 < var12[0xf7c]; var15++) {
            var16 = (var12 + var15)[0xf78];
            var13 = (GameObject*)var0->GetPartyMemberByIndex(var16);
            if (!var13) continue;
            GameObject* var17 = var0->GetGameObjectByIndex(var16 * 12 + 20);
            if (var17 && (var17->obj3D_.unknown_2_ == 9031 || var17->obj3D_.unknown_2_ == 9032 || var17->obj3D_.unknown_2_ == 9033)) {
                if (**(unsigned int**)((char*)var13 + 0x130) & 1) {
                    func_02048150(var13, 0, 1);
                    (*(unsigned int*)((char*)var13 + Enum_ov017_0219cdc0_396)) &= ~1;
                    func_02033b88((Struct_02010604*)var13, 0);
                    func_ov017_021cedf4(var16, 1, 0);
                    func_ov017_021c9e00(var16, 0, 0, 1);
                    func_ov017_02191108(var2, 1, 1, 1, 1);
                }
            } else if (var16 && !(**(unsigned int**)((char*)var13 + 0x130) & 1)) var14 = 0;
        }
        if (var14 && arg1) {
            GameObject* var18 = (GameObject*)var0->GetProtagonist();
            if (var18 && (**(unsigned int**)((char*)var18 + 0x130) & 1)) {
                func_02048150(var18, 0, 1);
                (*(unsigned int*)((char*)var18 + Enum_ov017_0219cdc0_396)) &= ~1;
                func_02033b88((Struct_02010604*)var18, 0);
                func_ov017_021cedf4(0, 1, 0);
                func_ov017_021c9e00(0, 0, 0, 1);
                func_ov017_02191108(var2, 1, 1, 1, 1);
            }
        }
    }
}
