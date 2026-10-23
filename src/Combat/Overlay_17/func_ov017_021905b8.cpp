#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/ZoneResourceTree.h"

struct Struct_0202b2f0;
struct Struct_0202c1a4;
struct Struct_0207da94;
struct Struct_020e3544;
struct Struct_020e3b08;
struct Struct_0207959c;
struct Struct_0207958c;

extern "C" Struct_0202b2f0* func_0202ae18(void);
extern "C" void func_0207dba8(void* arg0);
extern "C" void func_ov017_02190264(void* arg0, int arg1);
extern "C" void func_ov000_0215fb04(void* arg0, int arg1);
extern "C" void func_ov017_02192654(int arg0, int arg1, int arg2);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);

extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_0202c600(Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c718(Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c21c(Struct_0202b2f0* arg0, int arg1);
extern "C" Struct_0207da94* func_0207d78c(void);
extern "C" void func_ov017_0218d500(void* arg0);
extern "C" void func_0207da94(Struct_0207da94* arg0, int arg1);
extern "C" Struct_020e3544* func_020e2ff8(void);
extern "C" void func_020e3544(Struct_020e3544* arg0, int arg1);
extern "C" Struct_020e3b08* func_020e3808(void);
extern "C" void func_020e3b08(Struct_020e3b08* arg0, int arg1);
extern "C" int func_0207959c(Struct_0207959c* arg0, int arg1);
extern "C" void func_0207958c(Struct_0207958c* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" unsigned short func_ov017_021b8480(void* arg0);

struct Struct_ov017_021905b8 {
    char unknown_0_[6];
    signed char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    signed char unknown_9_;
};

struct Struct_ov017_021905b8_2 {
    char unknown_0_[0x16a];
    unsigned short unknown_16a_;
};

struct Struct_ov017_021905b8_3 {
    char unknown_0_[2];
    unsigned char unknown_2_;
};

struct Struct_ov017_021905b8_4 {
    char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021905b8_5 {
#if defined(jpn)
    char unknown_0_[0xe24];
#else
    char unknown1_0_[0xea8];
#endif
    int unknown_ea8_;
};

// USA: func_ov017_021905b8
extern "C" ARM void func_ov017_021905b8(GameResources* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    Struct_0202b2f0* var1 = func_0202ae18();
    if (arg1 <= 0) {
        return;
    }
    if (arg1 == func_0202c1a4((Struct_0202c1a4*)var1) || arg1 == func_020100b0(var0) ||
        arg1 == func_020100a8(var0)) {
        func_0202c600(var1, arg1);
        func_0202c718(var1, arg1);
        return;
    }

    Struct_0207da94* var2 = func_0207d78c();
    func_0207dba8(var2);
    func_ov017_0218d500(arg0);
    func_0202c600(var1, arg1);
    func_0202c718(var1, arg1);
    if (arg2) {
        func_0202c21c(var1, arg1);
    }
    func_ov017_02190264(arg0, arg1);
    func_0207da94(var2, (unsigned char)arg1);

#if defined(jpn)
    Struct_ov017_021905b8* var3 = (Struct_ov017_021905b8*)((char*)var0 + 0x7280);
#else
    Struct_ov017_021905b8* var3 = (Struct_ov017_021905b8*)((char*)var0 + 0x74c0);
#endif
    for (int var4 = 0; var4 < 3; var4++, var3++) {
        if (var3->unknown_6_ == arg1) {
            VectorizedMemset(var3, 0, 6);
            var3->unknown_6_ = -1;
            var3->unknown_7_ = 0;
            var3->unknown_8_ = 0;
            var3->unknown_9_ = -1;
            break;
        }
    }

    func_020e3544(func_020e2ff8(), arg1);

    Struct_ov017_021905b8_3* var5 = (Struct_ov017_021905b8_3*)arg0->unknown_ptr_3718;
    if (var5->unknown_2_ != 0) {
        void* var6 = func_ov017_021b8470(var5);
        if (var6 != NULL) {
            func_ov000_0215fb04(var6, arg1);
        }
    }

    for (int var7 = 0; var7 < 0x30; var7++) {
        Struct_ov017_021905b8_2* var8 = (Struct_ov017_021905b8_2*)var0->GetMaybeFieldMonsterByIndex(var7 + 0x70);
        if (var8 != NULL && func_0207959c((Struct_0207959c*)var8, arg1)) {
            int var9;
            Struct_ov017_021905b8_3* var10 = (Struct_ov017_021905b8_3*)arg0->unknown_ptr_3718;
            var9 = 1;
            if (var10->unknown_2_ != 0 && func_ov017_021b8480(var10) == 0) {
                Struct_ov017_021905b8_4* var11 = (Struct_ov017_021905b8_4*)func_ov017_021b8478(var10);
                if (var11 != NULL && var11->unknown_8_ == var8->unknown_16a_) {
                    Struct_ov017_021905b8_5* var12 = (Struct_ov017_021905b8_5*)func_ov017_021b8468(var10);
                    if (var12 != NULL && var12->unknown_ea8_ == 7) {
                        var9 = 0;
                    }
                }
            }
            func_ov017_02192654(func_0202c1a4((Struct_0202c1a4*)var1), var8->unknown_16a_, var9);
            func_0207958c((Struct_0207958c*)var8);
        }
    }

    func_020e3b08(func_020e3808(), arg1);
}
