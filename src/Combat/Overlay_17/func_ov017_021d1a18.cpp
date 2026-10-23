#if defined(jpn)
enum { Enum_ov017_021d1a18_10100 = 0x27b4, Enum_ov017_021d1a18_10112 = 0x27c0 };
#else
enum { Enum_ov017_021d1a18_10100 = 0x2774, Enum_ov017_021d1a18_10112 = 0x2780 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0202c1a4 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" void* func_02012fe4(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d1a18 { int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_ov017_021d1a18_2 {
    short unknown_0_0_ : 14;
    short unknown_1_6_ : 2;
};

struct Struct_ov017_021d1a18_3 {
    short unknown_0_;
    struct Struct_ov017_021d1a18_2 unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
};

struct Struct_ov017_021d1a18_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021d1a18_3 unknown_4_;
};

// USA: func_ov017_021d1a18
extern "C" ARM void func_ov017_021d1a18(int arg0, short arg1, short arg2, unsigned char arg3) {
    if (!func_0202b7d8(func_0202ae18())) return;
    if (func_0202c1a4((struct Struct_0202c1a4*)func_0202ae18()) != 0) return;

    ((int)GetGameResources());
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02012fe4(func_0200fd0c(var0));
    void* var2 = func_0202ae24();

    struct Struct_ov017_021d1a18_4 var3;
    var3.unknown_0_ = 0xb2;
    var3.unknown_4_.unknown_0_ = (arg0 == 0) ? 1 : arg0;
    var3.unknown_4_.unknown_2_.unknown_0_0_ = arg1;
    var3.unknown_4_.unknown_2_.unknown_1_6_ = arg2;

    struct Struct_ov017_021d1a18 var4 = *(struct Struct_ov017_021d1a18*)((char*)var1 + Enum_ov017_021d1a18_10100);
    var3.unknown_4_.unknown_4_ = (short)(var4.unknown_0_ >> 7);
    var3.unknown_4_.unknown_6_ = (short)(var4.unknown_4_ >> 7);
    var3.unknown_4_.unknown_8_ = (short)(var4.unknown_8_ >> 7);

    var3.unknown_4_.unknown_a_ = *(int*)((char*)var1 + Enum_ov017_021d1a18_10112);
    var3.unknown_4_.unknown_c_ = arg3;
    func_0205e330(var2, &var3, 0);
}
