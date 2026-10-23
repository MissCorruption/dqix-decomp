#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202b2f0;

struct Struct_020dc920 {
    unsigned char unknown_0_0_ : 5;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_0_6_ : 2;
};

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_0202be08(struct Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202be70(struct Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202bed8(struct Struct_0202b2f0* arg0, int arg1);
extern "C" char* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);

// USA: func_020dc920
extern "C" ARM int func_020dc920(int arg0, int arg1, int arg2, int arg3) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetProtagonist();
    struct Struct_0202b2f0* var2 = (struct Struct_0202b2f0*)func_0202ae18();
    if (var1 != NULL) {
        GameObject* var3 = var0->GetPartyMemberByIndex(arg0);
        if (var3 != NULL) {
            if (func_0202b7d8((int*)var2) && arg3) {
                int var4 = arg0;
                if (var3->obj3D_.unknown_0_ & 0x1000)
                    var4 = 0;
                if (var4 != func_020100a8(var0)) {
                    if (!func_0202be70(var2, var4))
                        return 0;
                }
            }
            if (arg1 != 0 && arg0 != func_020100a8(var0)) {
                if (func_0202be08(var2, arg0))
                    return 0;
                char* var5 = func_0200ff58(var0, arg0);
                if (var5 != NULL) {
                    int var6 = func_020546a8(var5);
                    if (func_0202be08(var2, var6)) {
                        if (var6 != func_020100a8(var0))
                            return 0;
                    }
                }
                if (func_0202bed8(var2, arg0))
                    return 0;
                var5 = func_0200ff58(var0, arg0);
                if (var5 != NULL) {
                    int var7 = func_020546a8(var5);
                    if (func_0202bed8(var2, var7)) {
                        if (var7 != func_020100a8(var0))
                            return 0;
                    }
                }
            }
            int var8 = 0;
            if (var1->obj3D_.GetField06() == var3->obj3D_.GetField06()) {
                var8 = 1;
            } else if (arg2 != 0 && ((var1->obj3D_.GetField06() == 10000 && var3->obj3D_.GetField06() == 5900) ||
                                  (var1->obj3D_.GetField06() == 5900 && var3->obj3D_.GetField06() == 10000))) {
                var8 = 1;
            } else if (arg2 != 0 && ((var1->obj3D_.GetField06() == 10100 && var3->obj3D_.GetField06() == 6401) ||
                                  (var1->obj3D_.GetField06() == 6401 && var3->obj3D_.GetField06() == 10100))) {
                var8 = 1;
            }
            if (var8 != 0) {
                if (((struct Struct_020dc920*)((unsigned char*)var1 + 0xc2))->unknown_0_5_)
                    return ((struct Struct_020dc920*)((unsigned char*)var3 + 0xc2))->unknown_0_5_ != 0;
                return ((struct Struct_020dc920*)((unsigned char*)var3 + 0xc2))->unknown_0_5_ == 0;
            }
        }
    }
    return 0;
}
