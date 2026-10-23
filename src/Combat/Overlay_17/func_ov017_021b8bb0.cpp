#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov017_021b6f18(void* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov017_021b6e70(void* arg0, unsigned short arg1);
extern "C" void func_ov017_021b7104(void* arg0, void* arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_021b8bb0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    int unknown_14_;
};

// USA: func_ov017_021b8bb0
extern "C" ARM void func_ov017_021b8bb0(int arg0) {
#if defined(jpn)
 enum {Enum_ov017_021b8bb0_1788=0x4ec, Enum_ov017_021b8bb0_1816=0x508};
#else
 enum {Enum_ov017_021b8bb0_1788=0x6fc, Enum_ov017_021b8bb0_1816=0x718};
#endif
    GameState* var0 = GameState::GetInstance();
    char* var1 = (char*)(long)((int)GetGameResources()) + 0x3000;
    struct Struct_0201bdac_2* var2 = *(struct Struct_0201bdac_2**)(var1 + Enum_ov017_021b8bb0_1788);
    struct Struct_0201bdac* var3 = *(struct Struct_0201bdac**)(var1 + Enum_ov017_021b8bb0_1816);
    func_ov017_021b6f18(var3);

    struct Struct_ov017_021b8bb0 var4;
    var4.unknown_0_ = 1;
    var4.unknown_12_ = 2;
    var4.unknown_1_ = 0;
    var4.unknown_2_ = 0;
    var4.unknown_4_ = 0;
    var4.unknown_8_ = -1;
    var4.unknown_c_ = 0;
    var4.unknown_d_ = 0;
    var4.unknown_e_ = 0;
    var4.unknown_10_ = -1;
    var4.unknown_f_ = 0;
    var4.unknown_14_ = 0;

    var4.unknown_1_ = func_020100a8(var0);
    var4.unknown_2_ = 0xffff;
    var4.unknown_4_ = (unsigned short)(arg0 + 0x8005);
    var4.unknown_8_ = arg0;
    func_ov017_021b6e70(&var4, var4.unknown_2_);
    func_ov017_021b7104(var3, &var4);
    func_020469b4(var2, var3);
}
