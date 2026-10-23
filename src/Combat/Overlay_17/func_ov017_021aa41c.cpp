#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "GameState/GameState.h"

extern "C" int func_0201079c(char* arg0);
extern "C" int func_020107d0(char* arg0);
extern "C" int func_02010804(char* arg0);
void SetBrightness(GameResources*, int, int);
extern "C" void func_ov017_0219bcac(unsigned char arg0);
extern "C" void func_02010774(char* arg0, int arg1);
extern "C" void func_020107a8(char* arg0, int arg1);
extern "C" void func_020107dc(char* arg0, int arg1);

struct Struct_ov017_021aa41c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
};

// USA: func_ov017_021aa41c
extern "C" ARM void func_ov017_021aa41c(Struct_ov017_021aa41c* arg0) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)var0;
    int var2 = func_0201079c(var1);
    int var3 = func_020107d0(var1);
    int var4 = func_02010804(var1);
    if (var2 * 10000 + var3 * 100 + var4 != arg0->unknown_8_ * 10000 + arg0->unknown_a_ * 100 + arg0->unknown_c_) {
        func_ov017_0219bcac(0);
    } else {
        GameResources* var5 = GetGameResources();
        SetBrightness(var5, 0, 30);
    }
    func_02010774(var1, arg0->unknown_8_);
    func_020107a8(var1, arg0->unknown_a_);
    func_020107dc(var1, arg0->unknown_c_);
    arg0->unknown_1_ = 1;
}
