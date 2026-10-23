#include <globaldefs.h>
#include "Combat/BufferedScriptResult.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct Struct_01ff91ac_22;

struct Struct_01ff91ac_23 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};

struct Struct_ov017_021b7284_9 {
    unsigned char unknown_0_[0x8];
    SafeAllocator unknown_8_;
    unsigned char unknown_1c_[0x1c - 0x8 - sizeof(SafeAllocator)];
    Struct_01ff91ac_23 unknown1_1c_;
    unsigned char unknown_20_;
    unsigned char unknown_21_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    unsigned char unknown_26_[2];
    int unknown_28_;
    Struct_02074060 unknown_2c_;
    unsigned char unknown_40_[2];
    unsigned char unknown_42_;
    unsigned char unknown_43_;
    short unknown_44_;
    unsigned char unknown_46_[2];
    int unknown_48_;
    int unknown_4c_;
    unsigned char unknown_50_;
    unsigned char unknown_51_;
    unsigned char unknown_52_[0x6ac - 0x52];
    void* unknown_6ac_;
    Struct_01ff91ac_22* unknown_6b0_;
    unsigned short unknown_6b4_;
    unsigned short unknown_6b6_;
};

union Struct_ov017_021b7284 {
    struct {
        unsigned short unknown_0_[3];
        unsigned short unknown_6_;
        unsigned char unknown_8_[3];
    };
    unsigned short unknown1_0_[6];
};

struct Struct_ov017_021b7284_2 {
    short unknown_0_[3];
    short unknown_6_[3];
};

struct Struct_ov017_021b7284_3 {
    Struct_01ff91ac_23* unknown_0_;
    unsigned short unknown_4_[3];
    unsigned short unknown_a_;
    unsigned char unknown_c_[3];
};

struct Struct_ov000_021605d0 {
    Struct_01ff91ac_22* unknown_0_;
    Struct_01ff91ac_23* unknown_4_;
    SafeAllocator* unknown_8_;
};

struct Struct_ov017_021b7284_4 {
#if defined(jpn)
    unsigned char unknown_0_[0x125];
#else
    unsigned char unknown1_0_[0x105];
#endif
    unsigned char unknown_105_;
};

struct Struct_0209afd4_5;
struct Struct_0209bdc8;
struct Struct_0204bd7c;
struct Struct_02099a68;
struct Struct_0205859c;

struct Struct_ov017_021b7284_5 {
    unsigned short unknown_0_;
};

struct Struct_ov017_021b7284_6 {
#if defined(jpn)
    unsigned char unknown_0_[0x5c];
    unsigned char unknown_60_[0x120 - 0x5c];
#else
    unsigned char unknown1_0_[0x60];
    unsigned char unknown_60_[0x124 - 0x60];
#endif
    unsigned char unknown_124_[4];
};

struct Struct_ov017_021b7284_7 {
    unsigned char unknown_0_[2];
    short unknown_2_;
    unsigned char unknown_4_[0x168 - 0x4];
    unsigned short unknown_168_;
};

struct Struct_02018300_3 {
    unsigned char unknown_0_[0xb2];
    unsigned short unknown_b2_;
};

struct Struct_02053f7c_3;

struct Struct_ov017_021b7284_8 {
    unsigned char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_0202c1a4 {
    int unknown_0_;
    unsigned char unknown_4_[0x100d - 0x4];
    unsigned char unknown_100d_;
};

struct Struct_0207d7f4 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    signed char unknown_4_;
    signed char unknown_5_;
    unsigned char unknown_6_[2];
    signed char unknown_8_[4];
};

extern "C" Struct_ov017_021b7284_4* func_02012fe4(void);
extern "C" Struct_ov017_021b7284_6* func_02027cb0(void);
extern "C" Struct_ov017_021b7284_7* func_ov017_021a278c(void* arg0, int arg1);
extern "C" int func_ov017_021b8a34(Struct_0209afd4_5* arg0, int arg1, int arg2);
extern "C" int func_ov017_021b8abc(int arg0, Struct_ov017_021b7284* arg1);
extern "C" void func_ov017_021b8b34(Struct_ov017_021b7284_2* arg0);
extern "C" void func_0209b448(Struct_0209afd4_5* arg0, int arg1, Struct_ov017_021b7284_2* arg2, Struct_ov017_021b7284_6* arg3);
extern "C" Struct_0204bd7c* func_02033fa0(void* arg0);
extern "C" unsigned short func_0204bd7c(Struct_0204bd7c* arg0);
extern "C" Struct_02099a68* func_02011584(void* arg0);
extern "C" int func_02099a68(Struct_02099a68* arg0, unsigned short arg1);
extern "C" Struct_ov017_021b7284_5* func_0209bdc8(Struct_0209bdc8* arg0, int arg1, unsigned int arg2);
extern "C" void func_0209afd4(Struct_0209afd4_5* arg0, short arg1, short arg2, short arg3, Struct_ov017_021b7284_2* arg4, Struct_ov017_021b7284_6* arg5);
extern "C" void func_ov000_0215d414(Struct_01ff91ac_22* arg0, Struct_ov017_021b7284_3* arg1);
extern "C" void func_ov000_02160140(void* arg0);
extern "C" void func_ov017_02195540(unsigned char* arg0);
extern "C" void func_ov000_021605d0(unsigned char* arg0, Struct_ov000_021605d0* arg1);
extern "C" Struct_0205859c* func_02057924(void);
extern "C" void func_0205859c(Struct_0205859c* arg0);
extern "C" Struct_0202c1a4* func_0202ae18(void);
struct Struct_0200ffc0;
extern "C" void* func_0200ffc0(Struct_0200ffc0* arg0);
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" void func_02053f7c(Struct_02053f7c_3* arg0, unsigned short arg1, int arg2);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov017_021b848c(Struct_ov017_021b7284_9* arg0, signed char* arg1, signed char arg2, int arg3, unsigned short arg4, signed char arg5, int arg6, int arg7);
extern "C" Struct_0207d7f4* func_0207d78c(void);
extern "C" int func_0207d978(Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" int func_0207da30(unsigned char* arg0, int arg1, int arg2);
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" void func_0207d7f4(Struct_0207d7f4* arg0, unsigned short arg1, int arg2, int arg3, signed char arg4, unsigned short arg5, unsigned char arg6);
extern "C" Struct_0207d7f4* func_0207d9bc(Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" void func_ov017_021ca2a0(int arg0, int arg1);

struct Struct_ov017_021b7284_10 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
};

extern "C" void func_ov017_021c5284(Struct_ov017_021b7284_10* arg0);
extern "C" void func_ov017_021cff8c(int arg0, int arg1);

// USA: func_ov017_021b7284
// JPN: func_ov017_021b7834
extern "C" ARM void func_ov017_021b7284(Struct_ov017_021b7284_9* arg0) {
    int var0;
    int var1;
    int var2;
    GameState* var3 = GameState::GetInstance();
    Struct_ov017_021b7284_4* var4 = func_02012fe4();
    Struct_ov017_021b7284_3 var5;
    Struct_ov000_021605d0 var6;
    Struct_ov017_021b7284_10 var7;
    Struct_ov017_021b7284 var8;
    Struct_ov017_021b7284_2 var9;
    Struct_ov017_021b7284_2 var10;
    Struct_ov017_021b7284 var11;
    signed char var12[4];
    var5.unknown_0_ = &arg0->unknown1_1c_;
    int var13 = arg0->unknown_28_;
    var2 = arg0->unknown_44_;
    unsigned char var14 = arg0->unknown_42_;
    unsigned short var15 = arg0->unknown_24_;
    GameState* var16 = GameState::GetInstance();
    GameResources* var17 = GetGameResources();
    memset(&var11, 0, sizeof(var11));

    if (var13 >= 0) {
        func_02074114(&arg0->unknown_2c_, var13);
        Struct_02074060* var18 = &arg0->unknown_2c_;
        for (var0 = 0; var0 < 3; var0++) {
            var11.unknown_0_[var0] = var18->unknown_2_[var0];
            var11.unknown_8_[var0] = var18->unknown_8_[var0];
        }
    } else {
        var1 = -1;
        if (var14 != 0) {
            Struct_ov017_021b7284_6* var19 = func_02027cb0();
            if (var19 == NULL) {
                goto done;
            }
            Struct_ov017_021b7284_7* var20 = func_ov017_021a278c(var17, var15);
            if (var20 != NULL) {
                var1 = func_ov017_021b8a34((Struct_0209afd4_5*)var19->unknown_124_, var2, var20->unknown_2_);
            }
            if (func_ov017_021b8abc(var1, &var11) != 0) {
                goto done;
            }
            func_ov017_021b8b34(&var10);
            func_ov017_021b8b34(&var10);
            func_0209b448((Struct_0209afd4_5*)var19->unknown_124_, (short)var2, &var10, var19);
            for (int var21 = 0; var21 < 3; var21++) {
                var11.unknown_0_[var21] = var10.unknown_0_[var21];
                var11.unknown_8_[var21] = var10.unknown_6_[var21];
            }
        } else {
            Struct_ov017_021b7284_7* var22;
            LightingManager* var23 = LightingManager::GetInstance();
            Struct_ov017_021b7284_6* var24 = func_02027cb0();
            var22 = func_ov017_021a278c(var17, var15);
            void* var25 = var16->GetUnknownGameObject();
            if (var24 == NULL || var22 == NULL) {
                goto done;
            }
            int var26 = var22->unknown_2_;
            unsigned short var27 = func_0204bd7c(func_02033fa0(var25));
            int var28 = func_02099a68(func_02011584(var16), var27);
            Struct_ov017_021b7284_5* var29 = func_0209bdc8((Struct_0209bdc8*)var24->unknown_60_, var23->timeOfDayIndex_, var28);
            unsigned short var30;
            if (var29 != NULL) {
                var30 = var29->unknown_0_;
            } else {
                var30 = var22->unknown_168_;
            }
            var1 = func_ov017_021b8a34((Struct_0209afd4_5*)var24->unknown_124_, var22->unknown_168_, var26);
            if (func_ov017_021b8abc(var1, &var11) != 0) {
                goto done;
            }
            func_ov017_021b8b34(&var9);
            func_ov017_021b8b34(&var9);
            func_0209afd4((Struct_0209afd4_5*)var24->unknown_124_, (short)var26, (short)var30, (short)var22->unknown_168_, &var9, var24);
            for (int var31 = 0; var31 < 3; var31++) {
                var11.unknown_0_[var31] = var9.unknown_0_[var31];
                var11.unknown_8_[var31] = var9.unknown_6_[var31];
                var11.unknown_6_ = var26;
            }
        }
    }
done:
    var8 = var11;
    var5.unknown_4_[0] = var8.unknown_0_[0];
    var5.unknown_4_[1] = var8.unknown_0_[1];
    var5.unknown_4_[2] = var8.unknown_0_[2];
    var5.unknown_a_ = var8.unknown_6_;
    var5.unknown_c_[0] = var8.unknown_8_[0];
    var5.unknown_c_[1] = var8.unknown_8_[1];
    var5.unknown_c_[2] = var8.unknown_8_[2];
    func_ov000_0215d414(arg0->unknown_6b0_, &var5);
#if defined(jpn)
    arg0->unknown_6ac_ = arg0->unknown_8_.Allocate(0x79fc);
#else
    arg0->unknown_6ac_ = arg0->unknown_8_.Allocate(0x780c);
#endif
    func_ov000_02160140(arg0->unknown_6ac_);
    func_ov017_02195540((unsigned char*)GetGameResources());
    var6.unknown_0_ = arg0->unknown_6b0_;
    var6.unknown_8_ = &arg0->unknown_8_;
    var6.unknown_4_ = &arg0->unknown1_1c_;
    func_ov000_021605d0((unsigned char*)arg0->unknown_6ac_, &var6);
    var4->unknown_105_ |= 1;
    func_0205859c(func_02057924());
    Struct_0202c1a4* var32 = func_0202ae18();

    if (arg0->unknown_20_ != 0) {
        Struct_02018300_3* var33 = (Struct_02018300_3*)var3->GetUnknownGameObject();
        void* var34 = func_0200ffc0((Struct_0200ffc0*)var3);
        Struct_ov017_021b7284_8* var35 = (Struct_ov017_021b7284_8*)func_02010828(var3);
        func_020397cc(var33, 1);
        var33->unknown_b2_ = 0;
        Struct_0204bd7c* var36;
        if (arg0->unknown_42_ != 0 && var34 != NULL) {
            var36 = func_02033fa0(var34);
        } else {
            var36 = func_02033fa0(var33);
        }
        for (int var37 = 0; var37 < var35->unknown_f7c_; var37++) {
            func_02053f7c((Struct_02053f7c_3*)var3->GetPartyMemberByIndex(var35->unknown_f78_[var37]), arg0->unknown_24_, 1);
        }
        if (func_0202b7d8(&var32->unknown_0_) == 0) {
            __clear(var12, sizeof(var12));
            for (int var38 = 0; var38 < var35->unknown_f7c_; var38++) {
                var12[var35->unknown_f78_[var38]] = 1;
            }
            int var39 = func_020100a8(var3);
            func_ov017_021b848c(arg0, var12, var39, 0, func_0204bd7c(var36), arg0->unknown_51_, 1, arg0->unknown_28_);
        } else {
            Struct_0207d7f4* var40 = func_0207d78c();
            int var41 = func_0207d978(var40, arg0->unknown_24_) != 0 ? 1 : 0;
            if (func_0207da30((unsigned char*)var40, arg0->unknown_24_, func_020100a8(var3))) {
                var41 = 0;
            }
            if (func_0202c1a4(var32) == 0) {
                int var42 = func_020100a8(var3);
                int var43 = func_020100a8(var3);
                func_0207d7f4(var40, arg0->unknown_24_, var42, 1, var43, func_0204bd7c(var36), arg0->unknown_51_);
                if (func_0207d978(var40, arg0->unknown_24_)) {
                    Struct_0207d7f4* var44 = func_0207d9bc(var40, arg0->unknown_24_);
                    if (var44 != NULL) {
                        func_ov017_021b848c(arg0, var44->unknown_8_, var44->unknown_4_, var41, var44->unknown_2_, var44->unknown_5_, var41 == 0, arg0->unknown_28_);
                    }
                }
            }
            int var45 = var32->unknown_100d_;
            if (var45 > 1) {
                if (func_0202c1a4(var32) == 0 && var41 != 0) {
                    func_ov017_021ca2a0(0, arg0->unknown_24_);
                    arg0->unknown_4c_ = 1;
                    arg0->unknown_6b4_ = 2;
                } else {
                    var7.unknown_4_ = arg0->unknown_22_;
                    var7.unknown_0_ = arg0->unknown_24_;
                    var7.unknown_2_ = func_0204bd7c(var36);
                    var7.unknown_5_ = arg0->unknown_42_;
                    var7.unknown_6_ = arg0->unknown_44_;
                    var7.unknown_8_ = arg0->unknown_51_;
                    var7.unknown_9_ = arg0->unknown_48_ != 0;
                    var7.unknown_a_ = arg0->unknown_28_;
                    var7.unknown_c_ = arg0->unknown_21_;
                    func_ov017_021c5284(&var7);
                    if (arg0->unknown_48_ != 0) {
                        arg0->unknown_4c_ = 1;
                        arg0->unknown_6b4_ = 2;
                    }
                }
            }
        }
    }

    if (func_0202b7d8(&var32->unknown_0_)) {
        Struct_ov017_021b7284_8* var46 = (Struct_ov017_021b7284_8*)func_02010828(var3);
        for (int var47 = 0; var47 < var46->unknown_f7c_; var47++) {
            func_ov017_021cff8c(var46->unknown_f78_[var47], 0);
        }
    }
    arg0->unknown_6b6_ |= 0x100;
}
