#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202b2f0;
struct Struct_0202bad4;
struct Struct_0202bad4_2;

extern "C" void* func_0202ae18(void);
extern "C" void func_0202b0f4(void* arg0);
extern "C" void func_0202c288(void* arg0);
extern "C" unsigned short func_0202bc8c(struct Struct_0202b2f0* arg0);
extern "C" int func_0202baec(void* arg0);
extern "C" struct Struct_0202bad4* func_0202bad4(struct Struct_0202bad4_2* arg0, int arg1);
extern "C" void func_0202c1e8(struct Struct_0202b2f0* arg0, int arg1);

struct Struct_ov003_02171640 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    unsigned int unknown_4_;
    char unknown_8_[0x199 - 8];
    signed char unknown_199_;
};

// USA: func_ov003_02171640
extern "C" ARM void func_ov003_02171640(struct Struct_ov003_02171640* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    unsigned int var2 = var0->GetEffectiveDeltaTime();

    if (var2 < arg0->unknown_4_) {
        arg0->unknown_4_ -= var2;
        unsigned short var3 = func_0202bc8c((struct Struct_0202b2f0*)var1);
        int var4 = func_0202baec(var1);
        for (int var5 = 1; var5 < var4; var5++) {
            if (var3 & (1 << var5)) {
                func_0202bad4((struct Struct_0202bad4_2*)var1, var5);
                arg0->unknown_199_ = var5;
                func_0202c1e8((struct Struct_0202b2f0*)var1, (unsigned char)var5);
                func_0202c288(var1);
                arg0->unknown_0_ = 2;
                return;
            }
        }
    } else {
        arg0->unknown_4_ = 0;
        func_0202b0f4(var1);
        arg0->unknown_0_ = 4;
    }
}
