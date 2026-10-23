#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov017_021cf078_2128 = 0x7b8 };
#else
enum { Enum_ov017_021cf078_2128 = 0x850 };
#endif

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cf078 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov017_021cf078_2 {
    Struct_ov017_021cf078 unknown_0_[3];
};

struct Struct_ov017_021cf078_3 {
    unsigned int unknown_0_0_ : 8;
    unsigned int unknown_1_0_ : 3;
    unsigned int unknown_1_3_ : 1;
    unsigned int unknown_1_4_ : 20;
};

struct Struct_ov017_021cf078_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct {
        Struct_ov017_021cf078 unknown_0_[3];
        Struct_ov017_021cf078_3 unknown_c_;
    } unknown_4_;
};

// USA: func_ov017_021cf078
extern "C" ARM void func_ov017_021cf078(int arg0, unsigned short arg1, unsigned char arg2) {
    void* var0 = func_0202ae24();
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200ff1c(var1, arg0);
    if (!var2) return;

    int var3 = func_02053c6c((unsigned char*)var2);
    if (!var3) return;

    Struct_ov017_021cf078_2* var4 = (Struct_ov017_021cf078_2*)((char*)var3 + Enum_ov017_021cf078_2128);
    Struct_ov017_021cf078_2* var5 = &var4[arg1];

    Struct_ov017_021cf078_4 var6;
    var6.unknown_0_ = 0x15;
    Struct_ov017_021cf078* var7 = var6.unknown_4_.unknown_0_;
    var7[0].unknown_0_0_ = var5->unknown_0_[0].unknown_0_0_;
    var7[0].unknown_1_2_ = var5->unknown_0_[0].unknown_1_2_;
    var7[0].unknown_2_4_ = var5->unknown_0_[0].unknown_2_4_;
    var7[1].unknown_0_0_ = var5->unknown_0_[1].unknown_0_0_;
    var7[1].unknown_1_2_ = var5->unknown_0_[1].unknown_1_2_;
    var7[1].unknown_2_4_ = var5->unknown_0_[1].unknown_2_4_;
    var7[2].unknown_0_0_ = var5->unknown_0_[2].unknown_0_0_;
    var7[2].unknown_1_2_ = var5->unknown_0_[2].unknown_1_2_;
    var7[2].unknown_2_4_ = var5->unknown_0_[2].unknown_2_4_;
    Struct_ov017_021cf078_3* var8 = (Struct_ov017_021cf078_3*)(var7 + 3);
    var8->unknown_0_0_ = arg1;
    var8->unknown_1_0_ = arg0;
    var8->unknown_1_3_ = arg2;

    func_0205e330(var0, &var6, 0);
}
