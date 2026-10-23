#if defined(jpn)
enum { Enum_ov017_02197a64_108 = 0x8c };
#else
enum { Enum_ov017_02197a64_108 = 0x6c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Graphics/Vector.h"
#include "Input/Input.h"

struct Struct_020968d0;

struct Struct_ov017_02197a64_2 {
    unsigned char unknown_0_[0x8];
    Vector3fix unknown_8_;
    unsigned char unknown_14_[0x20 - 0x14];
    short unknown_20_;
    unsigned char unknown_22_[0x2e - 0x22];
    unsigned short unknown_2e_0_ : 4;
    unsigned short unknown_2e_4_ : 12;
    unsigned char unknown_30_[0x70 - 0x30];
    struct Struct_ov017_02197a64_2* unknown_70_;
};

struct Struct_ov017_02197a64_3 {
    unsigned char unknown_0_[0x44];
    Vector3fix unknown_44_;
    unsigned char unknown_50_[0x54 - 0x50];
    int unknown_54_;
    unsigned char unknown_58_[0xbe - 0x58];
    unsigned char unknown_be_;
};

struct Struct_ov017_02197a64_4 {
#if defined(jpn)
    unsigned char unknown_0_[0x4188];
#else
    unsigned char unknown1_0_[0x4438];
#endif
    Vector3fix unknown_4438_;
};

struct Struct_ov017_02197a64_5 {
#if defined(jpn)
    unsigned char unknown_0_[0x40cc];
#else
    unsigned char unknown1_0_[0x42ec];
#endif
    short unknown_42ec_;
};

struct Struct_ov017_02197a64 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_;
    unsigned char unknown_5_[3];
    struct Struct_ov017_02197a64_2* unknown_8_[2];
    short unknown_10_;
    short unknown_12_;
};

extern "C" void* func_02012fe4(void);
extern "C" void* func_0201e838(unsigned char* arg0, unsigned int arg1);
extern "C" Struct_020968d0* func_ov017_0218d268(void* arg0);
extern "C" void func_ov017_0219a674(unsigned char* arg0);
extern "C" int func_02094b9c(void* arg0, void* arg1);
extern "C" int func_ov017_0218da48(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4);
extern "C" int func_020968d0(Struct_020968d0* arg0, int* arg1);
extern "C" void __clear(void* arg0, int arg1);
struct Struct_ov009_0218aa28;
extern "C" short func_ov017_021a4754(Vector3fix*, int, Vector3fix*);
extern "C" void func_ov017_0219b33c(Struct_ov017_02197a64_5* arg0, Struct_ov017_02197a64* arg1);
extern "C" void func_ov017_02198f84(Struct_ov017_02197a64_5* arg0);

#define FACING_LIMIT ((int)(0.8f * 4096.0f))

// USA: func_ov017_02197a64
extern "C" ARM void func_ov017_02197a64(Struct_ov017_02197a64_5* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_02197a64_4* var1 = (Struct_ov017_02197a64_4*)GetGameResources();
    void* var2 = func_02012fe4();
    Struct_ov017_02197a64_3* var3 = (Struct_ov017_02197a64_3*)var0->GetUnknownGameObject();
    Vector3fix var4 = var3->unknown_44_;
    Struct_ov017_02197a64_2* var5 = (Struct_ov017_02197a64_2*)func_0201e838((unsigned char*)var2 + Enum_ov017_02197a64_108, 2);
    Struct_020968d0* var6 = func_ov017_0218d268(var1);
    int var7 = 0;
    Struct_ov017_02197a64 var8;
    func_ov017_0219a674((unsigned char*)&var8);
    int var9 = 0;
    int var10 = 0;

    while (var5 != NULL && var8.unknown_4_ < 2) {
        if (!(var5->unknown_2e_4_ & 1) && !(var5->unknown_2e_4_ & 4) && func_02094b9c(var5, &var4)) {
            if (!var10) {
                var10 = func_ov017_0218da48(arg0, var5->unknown_20_, FACING_LIMIT, FACING_LIMIT >> 3, 0);
            }
            Vector3fix var11;
            int var12 = fix32cos(var5->unknown_20_);
            var11.x = fix32sin(var5->unknown_20_);
            var11.y = 0;
            var11.z = var12;
            Vector3fix_Normalize(&var11, &var11);
            Vector3fix var13;
            var12 = fix32cos(var3->unknown_54_);
            var13.x = fix32sin(var3->unknown_54_);
            var13.y = 0;
            var13.z = var12;
            Vector3fix_Normalize(&var13, &var13);
            Vector3fix var14 = var1->unknown_4438_;
            int var15 = Vector3fix_InnerProduct(&var11, &var13);
            int var16 = Vector3fix_InnerProduct(&var11, &var14);
            if ((var14.x != 0 || var14.z != 0) &&
                (func_020968d0(var6, NULL) != 0 || g_keyManager.TestKeysHeld(0xf0) != 0)) {
                var15 = var16;
            }
            if (var5->unknown_2e_4_ & 0x10) {
                Vector3fix var17;
                Vector3fix_Subtract(&var4, &var5->unknown_8_, &var17);
                var17.y = 0;
                Vector3fix_Normalize(&var17, &var17);
                if (Vector3fix_InnerProduct(&var11, &var17) > 0) {
                    if (var15 >= 0) {
                        var5 = var5->unknown_70_;
                        continue;
                    }
                } else {
                    if (var15 <= 0) {
                        var5 = var5->unknown_70_;
                        continue;
                    }
                }
            } else {
                if (var15 > 0) {
                    var5 = var5->unknown_70_;
                    continue;
                }
            }
            var8.unknown_8_[var8.unknown_4_++] = var5;
            if (arg0->unknown_42ec_ <= 2) {
                if (var3->unknown_be_ == 1 &&
                    (var16 < 0x170 - FACING_LIMIT || var16 > FACING_LIMIT - 0x170 ||
                     var15 < 0x170 - FACING_LIMIT || var15 > FACING_LIMIT - 0x170)) {
                    if (!var9) {
                        var9 = 1;
                        arg0->unknown_42ec_++;
                    }
                } else {
                    arg0->unknown_42ec_ = 0;
                }
            } else if (arg0->unknown_42ec_ > 2) {
                if (!var9) var7 = 1;
            }
        }
        var5 = var5->unknown_70_;
    }

    if (var8.unknown_4_ != 0) {
        Vector3fix var18;
        __clear(&var18, sizeof(var18));
        for (int var19 = 0; var19 < var8.unknown_4_; var19++) {
            Vector3fix_Add(&var18, &var8.unknown_8_[var19]->unknown_8_, &var18);
        }
        Vector3fixDivideScalar(&var18, var8.unknown_4_ << 12, &var18);
        var8.unknown_10_ = func_ov017_021a4754(&var3->unknown_44_, (short)var3->unknown_54_, &var18);
        var8.unknown_0_ = 4;
        func_ov017_0219b33c(arg0, &var8);
    }
    if (var7) {
        func_ov017_02198f84(arg0);
    }
}
