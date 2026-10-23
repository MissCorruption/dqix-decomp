#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov004_021589e8 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 5;
    unsigned int unknown_3_2_ : 6;
};

struct Struct_ov031_02243e34 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov031_02243e34_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_01ff8b48_18 {
    short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 7;
    unsigned int unknown_4_7_ : 25;
    unsigned char unknown_8_[0x20];
};

struct Struct_ov004_0215c900 {
    short unknown_0_;
    unsigned short unknown_2_;
    Struct_01ff8b48_18 unknown_4_[6];
    Struct_ov004_021589e8 unknown_f4_;
    short unknown_f8_;
    unsigned short unknown_fa_;
    unsigned short unknown_fc_;
    unsigned short unknown_fe_;
    Struct_ov004_021589e8 unknown_100_;
    Struct_ov004_021589e8 unknown_104_;
    unsigned int unknown_108_;
    unsigned short unknown_10c_0_ : 13;
    unsigned short unknown_10d_5_ : 3;
    unsigned short unknown_10e_;
};

struct Struct_02245528;
extern "C" void func_ov031_022125c8();
extern "C" int func_ov031_0221268c();
extern "C" void func_ov031_022120f8();
extern "C" void func_ov031_02245528(Struct_02245528*, int);
extern "C" int func_ov031_0221244c(void*, void*);
extern "C" int func_ov017_021b2090(Struct_ov004_021589e8, Struct_ov004_021589e8);
extern "C" void func_ov031_02212784();
extern "C" void func_ov031_02245478(Struct_02245528*);

#if defined(jpn)
extern "C" void func_ov031_02211c50(int);
extern unsigned char data_ov031_0224a1b4[];
#endif

// USA: func_ov031_02243e34
extern "C" ARM void func_ov031_02243e34(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    switch (var0[0x35]) {
    case 0:
#if defined(jpn)
        func_ov031_02211c50(2);
#endif
        var0[0x35] = 4;
        break;
    case 4:
        func_ov031_022125c8();
        var0[0x35] = 5;
        break;
    case 5: {
        int var1 = func_ov031_0221268c();
        if (var1 == 3) var0[0x35] = 6;
        else if (var1 == 4) var0[0x35] = 8;
        else if (var1 == 5 || var1 == 0) {
            func_ov031_022120f8();
            func_ov031_02245528((Struct_02245528*)arg0, 0);
        }
        int& var2 = *(int*)(var0 + 0x384);
        if (var2 < 0x46000) var2 += 0x333;
        break;
    }
    case 6: {
        Struct_ov031_02243e34 var3;
        Struct_ov031_02243e34_2 var4;
        if (func_ov031_0221244c(&var3, &var4)) {
            var3.unknown_0_ += 2000;
#if defined(jpn)
            var4.unknown_0_ += 9;
            if (var4.unknown_0_ >= 24) {
                var4.unknown_0_ -= 24;
                ++var3.unknown_8_;
                unsigned int var5 = *(const unsigned int*)(data_ov031_0224a1b4 + var3.unknown_4_ * sizeof(unsigned int));
                if (var5 < var3.unknown_8_) {
                    var3.unknown_8_ = 1;
                    if (++var3.unknown_4_ > 12) {
                        var3.unknown_4_ = 1;
                        ++var3.unknown_0_;
                    }
                }
            }
#endif
            Struct_ov004_021589e8& var6 = *(Struct_ov004_021589e8*)(var0 + 0x378);
            var6.unknown_0_0_ = var3.unknown_0_;
            var6.unknown_1_4_ = var3.unknown_4_;
            var6.unknown_2_0_ = var3.unknown_8_;
            var6.unknown_2_5_ = var4.unknown_0_;
            var6.unknown_3_2_ = var4.unknown_4_;
            var0[0x44] |= 4;
            if (var0[0x374] & 0x10) {
#if defined(jpn)
                Struct_ov004_0215c900* var7 = (Struct_ov004_0215c900*)((char*)GameState::GetInstance() + 0x5c0c);
#else
                Struct_ov004_0215c900* var7 = (Struct_ov004_0215c900*)((char*)GameState::GetInstance() + 0x5e6c);
#endif
                bool var8 = func_ov017_021b2090(var7->unknown_104_, var6) != 0;
                if (!var8) {
                    var0[0x44] |= 0x80;
                    var0[0x374] &= ~1;
                }
            }
        } else var0[0x374] &= ~1;
        if (var0[0x374] & 0x80) var0[0x35] = 7;
        else if (var0[0x374] & 2) {
            var0[0x3d0] = 1;
            func_ov031_02245528((Struct_02245528*)arg0, 5);
        } else if (!(var0[0x374] & 1)) var0[0x35] = 7;
        else func_ov031_02245528((Struct_02245528*)arg0, 4);
        break;
    }
    case 7:
        func_ov031_02212784();
        var0[0x35] = 5;
        break;
    case 8:
        func_ov031_02245478((Struct_02245528*)arg0);
        func_ov031_022120f8();
        break;
    }
}
