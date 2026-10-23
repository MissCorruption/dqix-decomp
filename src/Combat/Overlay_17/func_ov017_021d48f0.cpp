#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0205e57c_6;
extern "C" int func_0205e830(struct Struct_0205e57c_6* arg0, int arg1);
extern "C" void* func_0202ae24(void);
extern "C" void* func_0202ae18(void);

struct Struct_ov017_021d48f0 { unsigned char unknown_0_; };
extern "C" Struct_ov017_021d48f0* func_0205e41c(void* arg0, int* arg1);

typedef void (*Type_01ff91ac_3)(int, Struct_ov017_021d48f0*, GameState*, GameResources*, void*);
extern Type_01ff91ac_3 data_ov017_021d7f98[];

// USA: func_ov017_021d48f0
extern "C" ARM void func_ov017_021d48f0(void) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    void* var2 = func_0202ae24();
    void* var3 = func_0202ae18();
    int var4;
    Struct_ov017_021d48f0* var5;
    while ((var5 = func_0205e41c(var2, &var4)) != NULL) {
        unsigned char var6 = var5->unknown_0_;
        if (var6 < 0xbc) {
            if (func_0205e830((struct Struct_0205e57c_6*)var2, var6)) {
                data_ov017_021d7f98[var6](var4, var5, var0, var1, var3);
            }
        }
    }
}
