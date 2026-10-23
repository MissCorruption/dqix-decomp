#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" GameObject* func_ov017_021a278c(void* arg0, int arg1);
struct Struct_02046b38;
struct Struct_02046b38_2;
extern "C" int func_02046b38(struct Struct_02046b38* arg0, struct Struct_02046b38_2* arg1);
extern "C" void func_ov017_021b6f18(void* arg0);
extern "C" void func_ov017_02196c08(unsigned char* arg0);
extern "C" bool func_ov017_021b6e70(void* arg0, int arg1);
extern "C" void func_ov017_021b7104(unsigned char* arg0, void* arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_021c5b44 {
#if defined(jpn)
    unsigned char unknown_0_[0x4ec];
#else
    unsigned char unknown1_0_[0x6fc];
#endif
    void* unknown_6fc_;
    unsigned char unknown_700_[0x718 - 0x6fc - 4];
    void* unknown_718_;
};

struct Struct_ov017_021c5b44_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    unsigned int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    unsigned int unknown_14_;
};

// USA: func_ov017_021c5b44
extern "C" ARM void func_ov017_021c5b44(unsigned char arg0, int arg1, unsigned int arg2, unsigned char arg3, unsigned char arg4) {
    GameState::GetInstance();
    void* var0 = (void*)(int)((int)GetGameResources());
    struct Struct_ov017_021c5b44* var1 = (struct Struct_ov017_021c5b44*)((char*)var0 + 0x3000);
    int var2 = -1;
    void* var3 = var1->unknown_6fc_;
    void* var4 = var1->unknown_718_;

    GameObject* var5 = func_ov017_021a278c(var0, arg1);
    if (var5 != 0) {
        var2 = var5->obj3D_.unknown_4_;
    }

    if (!func_02046b38((struct Struct_02046b38*)var3, (struct Struct_02046b38_2*)var4)) {
        func_ov017_021b6f18(var4);

        struct Struct_ov017_021c5b44_2 var6;
        func_ov017_02196c08((unsigned char*)&var6);

        var6.unknown_0_ = 0;
        var6.unknown_1_ = arg0;
        var6.unknown_4_ = arg1;
        var6.unknown_2_ = var2;
        var6.unknown_8_ = arg2;
        var6.unknown_f_ = arg3;

        func_ov017_021b6e70(&var6, var2);

        var6.unknown_12_ = arg4;

        func_ov017_021b7104((unsigned char*)var4, &var6);

        func_020469b4((struct Struct_0201bdac_2*)var3, (struct Struct_0201bdac*)var4);
    }
}
