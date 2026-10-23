#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02033f5c(unsigned char* arg0);
extern "C" void* func_02033fc4(void* arg0);
extern "C" int func_0204be78(unsigned short* arg0);
struct Struct_02033f44;
extern "C" void* func_02033f44(Struct_02033f44*);
extern "C" int func_0204bea0(unsigned short* arg0);
extern "C" int func_0204be90(unsigned short* arg0);

struct Struct_020a7d74 {
    char unknown_0_[0x24];
    Vector3fix unknown_24_;
};

struct Struct_020a7d74_2 {
    char unknown_0_[0x50];
    Vector3fix unknown_50_;
    char unknown_5c_[0x134 - 0x5c];
    int unknown_134_;
    int unknown_138_;
};

// USA: func_020a7d74
extern "C" ARM int func_020a7d74(struct Struct_020a7d74_2* arg0, int* arg1, int* arg2) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 1;
    if (arg0->unknown_134_ == 0) {
        var1 = 0;
    }
    if (func_02033f5c((unsigned char*)arg0) == 0) {
        var1 = 0;
    }
    unsigned short* var2 = (unsigned short*)func_02033fc4(arg0);
    if (var2 == 0) {
        var1 = 0;
    }
    if (func_0204be78(var2) == 0) {
        var1 = 0;
    }
    if (var1 == 0) {
        arg0->unknown_138_ = 0;
        return 0;
    }

    Vector3fix var3;
    Vector3fix var4;
    Vector3fix var5 = arg0->unknown_50_;
    int var6 = var5.y;
    int var7 = fix32cos(var6);
    var3.x = fix32sin(var6);
    var3.y = 0;
    var3.z = var7;
    Vector3fix_Normalize(&var3, &var3);

    struct Struct_020a7d74* var8 = (struct Struct_020a7d74*)func_02033f44((Struct_02033f44*)arg0);
    int var9 = var8->unknown_24_.z;
    int var10 = var8->unknown_24_.x;
    var4.y = 0;
    var4.x = var10;
    var4.z = var9;
    Vector3fix_Normalize(&var4, &var4);

    int var11 = Vector3fix_InnerProduct(&var4, &var3);
    if (var11 >= -0xc00) {
        arg0->unknown_138_ = 0;
    } else {
        arg0->unknown_138_ = arg0->unknown_138_ + (int)var0->GetTickCount();
    }
    if (arg0->unknown_138_ < 0x28) {
        return 0;
    }
    *arg1 = func_0204bea0(var2);
    *arg2 = func_0204be90(var2);
    return 1;
}
