#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0205faf4_3;
struct Struct_0205faf4_13;
struct Struct_0202c1a4;
struct Struct_02064490_3;
struct Struct_0206dee8;
struct Struct_02095924 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 9;
    unsigned short unknown_3_1_ : 1;
    unsigned short unknown_3_2_ : 1;
    unsigned short unknown_3_3_ : 1;
    unsigned short unknown_3_4_ : 4;
    unsigned int unknown_4_0_ : 8;
    unsigned int unknown_5_0_ : 6;
    unsigned int unknown_5_6_ : 5;
    unsigned int unknown_6_3_ : 13;
    Struct_02064490_3* unknown_8_;
    Struct_02095924* unknown_c_;
};
struct Struct_02095924_2 { char unknown_0_[0xa0]; Struct_02095924* unknown_a0_; };
struct Struct_02095924_3 { char unknown_0_[0xc]; int unknown_c_; char unknown_10_[0x24]; };
extern "C" Struct_0205faf4_3* func_0205ec34();
extern "C" Struct_0202c1a4* func_0202ae18();
extern "C" unsigned short* func_02012fe4();
extern "C" int func_0206e2dc(Struct_0205faf4_13*, int);
extern "C" int func_0202b7d8(int*);
extern "C" signed char func_0202c1a4(Struct_0202c1a4*);
extern "C" int func_02064704(void*, Struct_02064490_3*, void*);
extern "C" int func_0206e120(Struct_0205faf4_3*, int);
extern "C" int func_02095ae0(Struct_0205faf4_3*, int);
extern "C" void func_0206dee8(Struct_0206dee8*, unsigned char, unsigned char*, unsigned char*, unsigned char*);
extern "C" void func_0206e164(Struct_0205faf4_3*, int, int);

static inline int inline_02095924(Struct_0205faf4_3* arg0, int arg1, int arg2) {
    return func_0206e120(arg0, arg1) == arg2;
}

// USA: func_02095b30
extern "C" ARM void func_02095b30(Struct_02095924_2* arg0, int arg1) {
    GameState::GetInstance();
    Struct_0205faf4_3* var0 = func_0205ec34();
    Struct_0202c1a4* var1 = func_0202ae18();
    unsigned char var2[3];
    Struct_02095924_3 var3;
    for (Struct_02095924* var4 = arg0->unknown_a0_; var4; var4 = var4->unknown_c_) {
        if (var4->unknown_3_2_ && !func_0206e2dc((Struct_0205faf4_13*)var0, var4->unknown_2_0_)) continue;
        if (func_0202b7d8((int*)var1) && func_0202c1a4(var1) && !var4->unknown_3_1_) continue;
        if (arg1) {
            func_0206dee8((Struct_0206dee8*)var0, 0, &var2[2], &var2[1], &var2[0]);
            if (!var4->unknown_3_2_) continue;
            if (var4->unknown_5_0_ * 100 + var4->unknown_5_6_ > (unsigned int)(var2[2] * 100 + var2[1])) continue;
        }
        var3.unknown_c_ = *func_02012fe4();
        if (!func_02064704(var0, var4->unknown_8_, &var3)) continue;
        if (inline_02095924(var0, var4->unknown_2_0_, 3) && !var4->unknown_3_1_) continue;
        if (!func_02095ae0(var0, var4->unknown_2_0_)) {
            if (!inline_02095924(var0, var4->unknown_2_0_, 3) || !var4->unknown_3_3_) continue;
        }
        func_0206e164(var0, var4->unknown_2_0_, 1);
    }
}
