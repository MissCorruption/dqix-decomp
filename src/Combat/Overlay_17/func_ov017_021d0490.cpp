#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "World/ZoneResourceTree.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" int func_0202c508(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" int func_0201079c(char* arg0);
extern "C" int func_020107d0(char* arg0);
extern "C" int func_02010804(char* arg0);
struct Struct_ov017_021d0490_4;
extern "C" Struct_ov017_021d0490_4* func_ov017_021b8470(void* arg0);

struct Struct_ov017_0218e674;
extern "C" int func_ov017_021bd3a4(Struct_ov017_0218e674* arg0);

struct Struct_ov017_021d0490_7 {
    unsigned char unknown_0_[0x12];
    unsigned char unknown_12_;
    unsigned char unknown_13_[0x16 - 0x13];
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
    unsigned char unknown_1e_[0x52 - 0x1e];
    short unknown_52_;
#if defined(jpn)
    unsigned char unknown1_54_[0x98 - 0x54];
#else
    unsigned char unknown_54_[0x9c - 0x54];
#endif

    unsigned char unknown_9c_;
};

struct Struct_ov017_021d0490 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov017_021d0490_2 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    unsigned char unknown_4_[0xc - 4];
    int unknown_c_;
};

struct Struct_ov017_021d0490_3 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
};

struct Struct_ov017_021d0490_4 {
    unsigned char unknown_0_[0x8e14];
    signed char unknown_8e14_;
    unsigned char unknown_8e15_[3];
    Struct_ov017_021d0490_3* unknown_8e18_;
};

struct Struct_ov017_021d0490_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_0_ : 2;
    unsigned char : 1;
    unsigned char unknown_3_3_ : 2;
    unsigned char unknown_3_5_ : 1;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};

struct Struct_ov017_021d0490_6 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021d0490_5 unknown_4_;
};

static inline Struct_ov017_021d0490_7* inline_ov017_021d0490(GameResources* arg0) { return (Struct_ov017_021d0490_7*)arg0->unknown_ptr_array_371c[6]; }
static inline Struct_ov017_021d0490* inline_ov017_021d0490_2(GameResources* arg0) { return (Struct_ov017_021d0490*)arg0->unknown_ptr_3718; }
static inline Struct_ov017_021d0490* inline_ov017_021d0490_3(GameResources* arg0) { return (Struct_ov017_021d0490*)arg0->unknown_ptr_array_3afc[13]; }

// USA: func_ov017_021d0490
extern "C" ARM void func_ov017_021d0490(int arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    unsigned short* var2 = (unsigned short*)func_02012fe4();
    GameResources* var3 = GetGameResources();
    Struct_ov017_021d0490_7* var4 = inline_ov017_021d0490(var3);
    Struct_ov017_021d0490* var5 = inline_ov017_021d0490_2(var3);
    Struct_ov017_021d0490* var6 = inline_ov017_021d0490_3(var3);
    void* var7 = func_0202ae24();
    Struct_ov017_021d0490_6 var8;
    var8.unknown_0_ = 0x97;
    Struct_ov017_021d0490_5* var9 = &var8.unknown_4_;

    if (func_0202c508(var1) != 0) {
        var9->unknown_3_0_ = arg0;
        var9->unknown_0_ = func_0201079c((char*)var0);
        var9->unknown_1_ = func_020107d0((char*)var0);
        var9->unknown_2_ = func_02010804((char*)var0);
        var9->unknown_4_ = *var2;
        Struct_ov017_021d0490_4* var10 = func_ov017_021b8470(var5);

        if (func_ov017_021bd3a4((Struct_ov017_0218e674*)var4) && var4->unknown_16_ != 0 && var4->unknown_9c_ == 0) {
            var9->unknown_3_3_ = 1;
            var9->unknown_8_ = var4->unknown_16_;
            var9->unknown_a_ = var4->unknown_52_;
            var9->unknown_c_ = var4->unknown_1a_;
            var9->unknown_e_ = var4->unknown_18_;
            var9->unknown_6_ = var4->unknown_1c_;
            var9->unknown_3_5_ = var4->unknown_12_;
        } else if ((var5->unknown_3_ != 0 || (var6->unknown_3_ != 0 && var5->unknown_2_ != 0)) && var10 != NULL &&
                   var10->unknown_8e14_ == 0) {
            Struct_ov017_021d0490_2* var11 = (Struct_ov017_021d0490_2*)func_ov017_021b8478(var5);
            var9->unknown_3_3_ = 0;
            var9->unknown_8_ = var11->unknown_c_;
            var9->unknown_a_ = var11->unknown_2_;
        } else if (var5->unknown_3_ != 0 && var10->unknown_8e18_->unknown_c_ == 0x13) {
            var9->unknown_3_3_ = 1;
            var9->unknown_8_ = 0x71e8;
            var9->unknown_a_ = 0xffff;
            var9->unknown_c_ = 0x199;
            var9->unknown_e_ = 0x71e8;
            var9->unknown_3_5_ = 1;
        } else {
            var9->unknown_3_3_ = 2;
        }
    }
    func_0205e330(var7, &var8, 0);
}
