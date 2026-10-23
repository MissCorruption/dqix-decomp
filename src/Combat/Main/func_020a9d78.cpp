#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020a9d78_32376 = 0x7c38 };
#else
enum { Enum_020a9d78_32376 = 0x7e78 };
#endif
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" void* func_02012fe4();
struct Struct_0201bc7c;
extern "C" void func_0201bc7c(struct Struct_0201bc7c* arg0, unsigned short arg1);
struct Struct_0201bc88;
extern "C" void func_0201bc88(struct Struct_0201bc88* arg0, unsigned short arg1);

struct Struct_02109bf4_6 {
    unsigned char unknown_0_[0xc8];
    unsigned char unknown_c8_0_ : 1;
    unsigned char unknown_c8_1_ : 1;
    unsigned char unknown_c8_2_ : 1;
    unsigned char unknown_c8_3_ : 1;
};
extern struct Struct_02109bf4_6 data_02109bf4;

struct Struct_020a9d78_3 {
    unsigned short unknown_0_;
    short unknown_2_;
    Vector3i unknown_4_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned char unknown_14_;
    signed char unknown_15_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_020a9d78_4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[5];
    unsigned char unknown_7_;
    unsigned char unknown_8_[8];
    Vector3i unknown_10_;
    short unknown_1c_;
};

struct Struct_020a9d78 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    signed char unknown_6_;
};

struct Struct_020a9d78_2 {
    unsigned char unknown_0_[Enum_020a9d78_32376];
    Struct_020a9d78 unknown_7e78_;
};

// USA: func_020a9d78
extern "C" ARM int func_020a9d78(void* arg0) {
    Struct_020a9d78_3* var0 = static_cast<Struct_020a9d78_3*>(arg0);
    GameState* var1 = GameState::GetInstance();
    Struct_020a9d78_4* var2 = static_cast<Struct_020a9d78_4*>(func_0200fd0c(var1));

    var2->unknown_0_ = var0->unknown_0_;
    var2->unknown_10_ = var0->unknown_4_;

    var2->unknown_1c_ = var0->unknown_2_;
    var2->unknown_7_ = 1;

    void* var3 = func_02012fe4();
    func_0201bc7c((struct Struct_0201bc7c*)var3, var0->unknown_12_);
    func_0201bc88((struct Struct_0201bc88*)var3, var0->unknown_10_);

    data_02109bf4.unknown_c8_3_ = (var0->unknown_14_ != 0);

    Struct_020a9d78* var4 = &reinterpret_cast<Struct_020a9d78_2*>(var1)->unknown_7e78_;
    var4->unknown_0_ = var0->unknown_16_;
    var4->unknown_2_ = var0->unknown_18_;
    var4->unknown_4_ = var0->unknown_1a_;
    var4->unknown_6_ = var0->unknown_15_;
    return 1;
}
