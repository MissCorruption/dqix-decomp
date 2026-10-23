#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov017_021c37a4_6 {
    char unknown_0_[0x100d];
    unsigned char unknown_100d_;
    char unknown_100e_[0x1029 - 0x100e];
    unsigned char unknown_1029_;
};

struct Struct_ov017_021c37a4_7 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

struct Struct_ov017_021c37a4_8 {
    char unknown_0_[0x130];
    Struct_ov017_021c37a4_7* unknown_130_;
    char* unknown_134_;
#if defined(jpn)
    char unknown_138_[0x180 - 0x138];
#else
    char unknown1_138_[0x18c - 0x138];
#endif
    unsigned int unknown_18c_;
};

struct Struct_ov017_021c37a4_9 {
    unsigned char unknown_0_[6];
    signed char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    signed char unknown_9_;
};

struct Struct_ov017_021c37a4_10 {
#if defined(jpn)
    char unknown_0_[0x5a6c];
#else
    char unknown1_0_[0x5ccc];
#endif
    unsigned int unknown_5ccc_;
#if defined(jpn)
    char unknown_5a70_[0x7280 - 0x5a70];
#else
    char unknown_5cd0_[0x74c0 - 0x5cd0];
#endif
    Struct_ov017_021c37a4_9 unknown_74c0_[3];
    char unknown_74de_[0x7e74 - 0x74de];
    int unknown_7e74_;
};

struct Struct_ov017_021c37a4 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
    char unknown_f7d_[0x2c94 - 0xf7d];
    int unknown_2c94_;
};

struct Struct_ov017_021c37a4_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

struct Struct_ov017_021c37a4_3 {
#if defined(jpn)
    char unknown_0_[0x1b64];
#else
    char unknown1_0_[0x64];
#endif
    unsigned short unknown_64_;
};

struct Struct_ov017_021c37a4_4 {
#if defined(jpn)
    char unknown_0_[0x860];
#else
    char unknown1_0_[0x2340];
#endif
    Struct_ov017_021c37a4_3 unknown_2340_;
#if defined(jpn)
    char unknown_23c6_[0x2860 - 0x23c6];
#else
    char unknown_23a6_[0x2820 - 0x23a6];
#endif
    unsigned char unknown_2820_;
    Struct_ov017_021c37a4_3* inline_ov017_021c37a4() { return &unknown_2340_; }};

struct Struct_02109bf4_11 {
    char unknown_0_[0xc8];
    unsigned char unknown_c8_;
};

struct Struct_ov017_021c37a4_5 {
#if defined(jpn)
    char unknown_0_[0x1790];
#else
    char unknown1_0_[0x1962];
#endif
    unsigned char unknown_1962_;
};

struct Struct_02039d84;
struct Struct_0205faf4_13;
struct Struct_0206e2a0;
struct Struct_02061c04_7;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_020e3004;
struct Struct_020e358c;
struct Struct_020e3814;
struct Struct_02109bf4_4;
struct Struct_02109bf4_3;
struct Struct_02038598_4;

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" void* func_020e2ff8(void);
extern "C" void* func_020e3580(void);
extern "C" void* func_020e3808(void);
extern "C" void* func_020d6c00(void);
extern "C" int func_0202c540(void* arg0);
extern "C" int func_0202ba00(int* arg0);
extern "C" void func_020ac4f8(int arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02012084(unsigned char* arg0);
extern "C" void func_02011af0(void* arg0);
extern "C" void func_02046a8c(void* arg0, void* arg1);
extern "C" void func_020d84e0(void);
extern "C" void func_0202b0f4(void* arg0);
extern "C" void func_0205e22c(void* arg0);
extern "C" unsigned char func_020100a8(GameState* arg0);
extern "C" int func_02039d7c(char* arg0);
extern "C" void func_02039d84(Struct_02039d84* arg0);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);
extern "C" void func_ov017_02190264(void* arg0, int arg1);
extern "C" void func_ov017_021c32b0(Struct_ov017_021c37a4_2* arg0, int arg1);
extern "C" void func_0202c288(void* arg0);
extern "C" void func_020100a0(GameState* arg0, int arg1);
extern "C" void func_020dcd40(void);
extern "C" void func_020dc7e8(int arg0, int arg1);
extern "C" void func_ov017_02191234(void* arg0);
extern "C" void func_ov017_02191108(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_020546a0(void* arg0, int arg1);
extern "C" void func_02039858(unsigned char* arg0, int arg1);
extern "C" void func_02039d24(unsigned char* arg0);
extern "C" void* func_020100f8(char* arg0);
extern "C" void func_020a2770(void* arg0, short arg1);
extern "C" void* func_0205ec34(void);
extern "C" int func_0206e2dc(Struct_0205faf4_13* arg0, int arg1);
extern "C" void func_020abd20(int arg0);
extern "C" void func_0206e2a0(Struct_0206e2a0* arg0, int arg1);
extern "C" void func_020d9ae8(Struct_02061c04_7* arg0, int arg1);
extern "C" void func_020d9dc4(char* arg0, char* arg1);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
extern "C" void func_02086d88(unsigned char* arg0, int arg1);
extern "C" void func_ov017_0218d500(void* arg0);
extern "C" void func_020116c8(void* arg0);
extern "C" void func_02048150(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_02191aac(void* arg0, int arg1, int arg2, unsigned char arg3);
extern "C" void VectorizedMemset(void* dst, int value, int len);
extern "C" char* func_020936f8(void);
extern "C" void func_02093a14(char* arg0);
extern "C" Struct_ov017_021c37a4_4* func_02012fe4(void);
extern "C" void func_ov017_02195748(unsigned char* arg0);
extern "C" void func_020a2718(char* arg0);
extern "C" void func_020e3004(Struct_020e3004* arg0);
extern "C" void func_020e358c(Struct_020e358c* arg0);
extern "C" void func_020e3814(Struct_020e3814* arg0);
extern "C" int func_0209c3ac(char* arg0);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);
extern "C" void func_0209c678(Struct_02109bf4_4* arg0, int arg1);
extern "C" void func_020bbd9c(void);
extern "C" int func_0209c6bc(void* arg0);
extern "C" void func_0209c20c(Struct_02109bf4_3* arg0);
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
extern "C" Struct_ov017_021c37a4_5* func_020421a0(void);

extern Struct_02109bf4_11 data_02109bf4;

// USA: func_ov017_021c37a4
extern "C" ARM void func_ov017_021c37a4(void) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021c37a4_10* var1 = (Struct_ov017_021c37a4_10*)var0;
    Struct_ov017_021c37a4_6* var2 = (Struct_ov017_021c37a4_6*)func_0202ae18();
    GameResources* var3 = GetGameResources();
    void* var4 = func_0202ae24();
    void* var5 = func_020e2ff8();
    void* var6 = func_020e3580();
    void* var7 = func_020e3808();
    void* var8 = func_020d6c00();
    int var9 = func_0202c540(var2);
    int var10 = func_0202ba00((int*)var2);
    int var11 = var2->unknown_100d_;
#if defined(jpn)
    char var12[0xb];
#else
    char var12[0x30];
#endif
    unsigned char var13[0x1a];
    Struct_ov017_021c37a4_2 var14;
    Struct_ov017_021c37a4_2 var15;

    if ((var10 == 5 && var11 > 1) || var10 == 6) {
        func_020ac4f8(1);
    }

#if !defined(jpn)
    __clear(var12, 0x30);
#endif
    if (var9) {
#if defined(jpn)
        Struct_ov017_021c37a4_8* var16 = (Struct_ov017_021c37a4_8*)var0->GetPartyMemberByIndex(0);
        memset(var12, 0, sizeof(var12));
        char* var17 = var16->unknown_134_;
#else
        char* var17 = ((Struct_ov017_021c37a4_8*)var0->GetPartyMemberByIndex(0))->unknown_134_;
#endif
        memcpy(var12, var17, strlen(var17));
        func_02012084((unsigned char*)var0);
        func_02011af0(var0);
        func_02046a8c(var3->unknown_ptr_array_36fc[0], var3->unknown_ptr_array_3afc[0x14]);
    }

    SetFlags00(var3, 2);
    func_020d84e0();
    func_0202b0f4(var2);
    func_0205e22c(var4);
#if !defined(jpn)
    var2->unknown_1029_ &= ~0x10;
#endif

    for (int var18 = 0; var18 < 4; var18++) {
        if (var18 == func_020100a8(var0)) {
            GameObject* var19 = var0->GetPartyMemberByIndex(var18);
            if (var9 && var19 && func_02039d7c((char*)var19)) {
                func_02039d84((Struct_02039d84*)var19);
            }
        } else {
            GameObject* var20 = func_0200ff58(var0, var18);
            if (var20 && func_020546a8(var20) == func_020100a8(var0)) {
                continue;
            }
            func_ov017_02190264(var3, var18);
        }
    }

    var14.unknown_0_ = func_020100a8(var0);
    var14.unknown_1_ = 0;
    if (var14.unknown_0_ != var14.unknown_1_) {
        func_ov017_021c32b0(&var14, 1);
    }

    for (int var21 = 3; var21 >= 0; var21--) {
        GameObject* var22 = var0->GetGameObjectByIndex(var21);
        if (var22 && (var22->obj3D_.unknown_0_ & 0x1000)) {
            int var23 = -1;
            for (int var24 = 3; var21 < var24; var24--) {
                if (var0->GetGameObjectByIndex(var24) == NULL) {
                    var23 = var24;
                    break;
                }
            }
            if (var23 != -1) {
                var15.unknown_0_ = var21;
                var15.unknown_1_ = var23;
                if (var15.unknown_0_ != var15.unknown_1_) {
                    func_ov017_021c32b0(&var15, 1);
                }
            }
        }
    }

    func_0202c288(var2);
    func_020100a0(var0, 0);
    if (var9) {
        func_020dcd40();
        func_020dc7e8(6, -1);
        func_020dc7e8(7, -1);
        func_ov017_02191234(var3);
        func_ov017_02191108(var3, 1, 1, 1, 1);
    }

    for (int var25 = 0; var25 < 4; var25++) {
        GameObject* var26 = func_0200ff58(var0, var25);
        if (var26) {
            func_020546a0(var26, func_020100a8(var0));
            func_02039858((unsigned char*)var26, func_020100a8(var0));
            func_02039d24((unsigned char*)var26);
        }
    }

    void* var27 = func_020100f8((char*)var0);
    if (var27) {
        func_020a2770(var27, 0);
    }
    func_ov017_02191108(var3, 1, 0, 1, 1);
    func_ov017_02191234(var3);
    var1->unknown_5ccc_ |= 2;

    Struct_ov017_021c37a4* var28 = (Struct_ov017_021c37a4*)func_02010828(var0);
    if (var9) {
        void* var29 = func_0205ec34();
        memset(var13, 0, 0x1a);
        unsigned char* var30 = var13;
        unsigned char var31 = 0;
        for (int var32 = 0; var32 < 0xcc; var32++) {
            if (func_0206e2dc((Struct_0205faf4_13*)var29, var32)) {
                *var30 |= 1 << var31;
            }
            var31++;
            if (var31 == 8) {
                var30++;
                var31 = 0;
            }
        }
        func_020abd20(0);
        var28->unknown_2c94_ = var1->unknown_7e74_;

        var31 = 0;
        var30 = var13;
        bool var33 = false;
        for (int var34 = 0; var34 < 0xcc; var34++) {
            if (*var30 & (1 << var31)) {
                if (!func_0206e2dc((Struct_0205faf4_13*)var29, var34)) {
                    var33 = true;
                }
                func_0206e2a0((Struct_0206e2a0*)var29, var34);
            }
            var31++;
            if (var31 == 8) {
                var30++;
                var31 = 0;
            }
        }
        if (var33) {
            void* var35;
            void* var36 = var3->unknown_ptr_array_3afc[0x31];
            var35 = var3->unknown_ptr_array_36fc[0];
            func_020d9ae8((Struct_02061c04_7*)var36, 0);
            func_020d9dc4((char*)var36, var12);
            func_020469b4((Struct_0201bdac_2*)var35, (Struct_0201bdac*)var36);
        }
    }

    func_02086d88((unsigned char*)var28, 0x5612);
    func_ov017_0218d500(var3);
    if (var9) {
        func_020116c8(var0);
    }

    Struct_ov017_021c37a4_8* var37 = (Struct_ov017_021c37a4_8*)var0->GetPartyMemberByIndex(0);
    if (var37 && (var37->unknown_130_->unknown_0_ & 1)) {
        func_02048150(var37, 0, 1);
        var37->unknown_130_->unknown_4_ = 1;
        var37->unknown_18c_ &= ~1;
    }

    Struct_ov017_021c37a4* var38 = (Struct_ov017_021c37a4*)func_02010828(var0);
    for (int var39 = 0; var39 < var38->unknown_f7c_; var39++) {
        unsigned char var40 = var38->unknown_f78_[var39];
        if (func_0200ff1c(var0, var40)) {
            func_ov017_02191aac(var3, 0, var40, 2);
        }
    }

    Struct_ov017_021c37a4_9* var41 = var1->unknown_74c0_;
    for (int var42 = 0; var42 < 3; var42++, var41++) {
        VectorizedMemset(var41, 0, 6);
        var41->unknown_6_ = -1;
        var41->unknown_7_ = 0;
        var41->unknown_8_ = 0;
        var41->unknown_9_ = -1;
    }

    func_02093a14(func_020936f8());
    Struct_ov017_021c37a4_4* var43 = func_02012fe4();
    Struct_ov017_021c37a4_3* var44 = var43->inline_ov017_021c37a4();
    var44->unknown_64_ = 0;
    var3->unknown_42e2_ = 0;
    func_ov017_02195748((unsigned char*)var3);
    func_020a2718((char*)var27);
    func_020e3004((Struct_020e3004*)var5);
    func_020e358c((Struct_020e358c*)var6);
    func_020e3814((Struct_020e3814*)var7);
    var43->unknown_2820_ = 1;

    if (func_0209c3ac((char*)&data_02109bf4) != 0x7f) {
        func_0209c2e0(&data_02109bf4, 0x7f, 0);
        func_0209c678((Struct_02109bf4_4*)&data_02109bf4, 0);
        func_020bbd9c();
    }
    data_02109bf4.unknown_c8_ &= ~4;
    if (!func_0209c6bc(&data_02109bf4)) {
        func_0209c20c((Struct_02109bf4_3*)&data_02109bf4);
    }
    func_020466f4((Struct_02038598_4*)var8, 0x800);
    func_020421a0()->unknown_1962_ = 0;
}
