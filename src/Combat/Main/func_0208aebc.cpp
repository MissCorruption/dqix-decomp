#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0208aebc_1744 = 0x4c0 };
#else
enum { Enum_0208aebc_1744 = 0x6d0 };
#endif

#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_020482e0_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};
struct Struct_020482e0 {
    char unknown_0_[0x130];
    struct Struct_020482e0_2* unknown_130_;
};
extern "C" int func_020482e0(struct Struct_020482e0* arg0, int arg1, int arg2);

extern "C" void func_02026f08(unsigned char* arg0, int arg1, int arg2);
extern "C" void func_02026f20(int arg0, int arg1);

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);

// USA: func_0208aebc
extern "C" ARM void func_0208aebc(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)GetGameResources() + 0x3000;
    struct Struct_020482e0* var2;
    void* var3;
    int* var4;
    unsigned short var5;

    var4 = *(int**)(var1 + Enum_0208aebc_1744);
    var2 = (struct Struct_020482e0*)var0->GetPartyMemberByIndex(arg1);
    var3 = func_0202ae18();
    var5 = var2->unknown_130_->unknown_4_;

    if (func_0202c508(var3) == 0) {
        var2->unknown_130_->unknown_4_ = 1;
    } else {
        unsigned char var6 = ((unsigned char*)arg0)[5];
        func_020482e0(var2, var6, 0);
    }

    unsigned short var7 = var2->unknown_130_->unknown_4_;
    if (var5 != var7) {
        func_02026f08((unsigned char*)var4, arg1, 1);
        func_02026f20((int)var4, arg1);
    }

    if (func_0202b7d8((int*)var3)) {
        func_ov017_021c9e00(arg1, 1, 0, 1);
    }
}
