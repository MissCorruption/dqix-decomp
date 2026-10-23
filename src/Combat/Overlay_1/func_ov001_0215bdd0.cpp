#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" int func_ov001_0215ad2c(int arg0);
extern "C" void func_ov001_0215acb4(void* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_ov001_02164214(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov001_02164248(void* arg0, int arg1, int arg2, int arg3, int arg4);

#include "Combat/EntryGetterTypes.h"
struct Struct_0203dce4_2;
extern "C" void* func_0203cf4c(void);
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);

struct Struct_ov001_02165880_10 { void* unknown_0_; char* unknown_4_; };
extern Struct_ov001_02165880_10 data_ov001_02165880;

// USA: func_ov001_0215bdd0
extern "C" ARM int func_ov001_0215bdd0(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    int var2 = func_ov017_021d60f4(arg0);
    var1 = func_ov017_021d60f4(arg0 + 0x8);
    int var3 = func_ov017_021d60f4(arg0 + 0x10);
    var1 = func_ov001_0215ad2c(var1);

    func_ov001_0215acb4(data_ov001_02165880.unknown_4_ + (var2 << 4));

    if (var3 == 0 || var3 == 1 || (unsigned)(var3 - 4) <= 1) {
        GameObject* var4 = NULL;
        if (var3 == 0) {
            var4 = var0->GetGameObjectByIndex(func_020100a8(var0));
        } else if (var3 == 1) {
            var4 = var0->GetGameObjectByIndex(var1);
        } else if (var3 == 4) {
            var4 = var0->GetGameObjectByIndex(0);
        } else if (var3 == 5) {
            var4 = var0->GetGameObjectByIndex(var1);
        }
        if (var4 == NULL) return 0;
        return func_ov001_02164214(data_ov001_02165880.unknown_4_, var2, var3, var1, (int)var4);
    }

    if (var3 == 2 || var3 == 6) {
        struct Struct_0203dce4* var5 = func_0203dce4((struct Struct_0203dce4_2*)func_0203cf4c(), var1);
        if (var5 == NULL) return 0;
        var5->unknown_0_ |= 0x10000;
        return func_ov001_02164248(data_ov001_02165880.unknown_4_, var2, var3, var1, (int)var5);
    }
    return 0;
}
