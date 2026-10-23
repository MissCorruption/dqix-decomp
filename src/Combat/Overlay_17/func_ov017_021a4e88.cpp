#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

typedef Vector3fix Type_ov017_021a4e88;

struct Struct_ov017_021a4e88 {
    Type_ov017_021a4e88 unknown_0_;
    int unknown_c_;
};

struct Struct_ov017_021a4e88_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    Struct_ov017_021a4e88_2* unknown_14_;
};

struct Struct_ov017_021a4e88_3 {
    char unknown_0_[0xb];
    unsigned char unknown_b_;
    char unknown_c_[0x40 - 0xc];
    Struct_ov017_021a4e88_2* unknown_40_;
    char unknown_44_[0x5c - 0x44];
    Struct_ov017_021a4e88* unknown_5c_;
};

struct Struct_ov017_021a4e88_4 {
    unsigned int unknown_0_;
};

struct Struct_ov017_021a4e88_5 {
    char unknown_0_[0x44];
    Type_ov017_021a4e88 unknown_44_;
    Type_ov017_021a4e88 unknown_50_;
};

struct Struct_ov017_021a4e88_6 {
#if defined(jpn)
    char unknown_0_[0x3e60];
#else
    char unknown1_0_[0x4080];
#endif
    int unknown_4080_;
};

extern "C" void* func_0203cf4c(void);
extern "C" void __clear(void* arg0, int arg1);
struct Struct_0203dce4_2;
extern "C" Struct_ov017_021a4e88_4* func_0203dce4(Struct_0203dce4_2*, int);
extern "C" void func_02040648(unsigned int*);
extern "C" void func_02040658(unsigned int*);
extern "C" void func_02040bcc(char*);
struct Struct_0203de84;
struct Struct_0203de84_2;
extern "C" void func_020406f8(Struct_0203de84* arg0, Struct_0203de84_2* arg1);
struct Struct_0203e0a0;
extern "C" Struct_ov017_021a4e88_3* func_02040538(Struct_0203e0a0*);
extern "C" Struct_ov017_021a4e88_4* func_0203df78(void* arg0, int arg1);
extern "C" int func_020535c8(signed char*);
struct Struct_ov009_0218aa28;
extern "C" short func_ov017_021a4700(Struct_ov009_0218aa28*, int, Struct_ov009_0218aa28*);
extern "C" unsigned char* func_02040528(int*);
int fix32abs(int x);

static inline short inline_ov017_021a4e88(Type_ov017_021a4e88* arg0, int arg1, Struct_ov017_021a4e88_4* arg2) {
    Type_ov017_021a4e88 var0;
    func_020406f8((Struct_0203de84*)&var0, (Struct_0203de84_2*)arg2);
    return func_ov017_021a4700((Struct_ov009_0218aa28*)arg0, arg1, (Struct_ov009_0218aa28*)&var0);
}

// USA: func_ov017_021a4e88
extern "C" ARM int func_ov017_021a4e88(int arg0, unsigned short* arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0203cf4c();
    Struct_ov017_021a4e88_6* var2 = (Struct_ov017_021a4e88_6*)GetGameResources();
    Struct_ov017_021a4e88_5* var3 = (Struct_ov017_021a4e88_5*)var0->GetUnknownGameObject();
    if (var3 == NULL) {
        return -1;
    }
    Type_ov017_021a4e88 var4 = var3->unknown_44_;
    Type_ov017_021a4e88 var5 = var3->unknown_50_;
    int var6 = -1;
    int var7 = 0x3244;
    int var8 = 0x1c00;
    unsigned short var9[0x20];
    __clear(var9, sizeof(var9));
    int var10 = -1;
    short var11 = 0x3244;
    for (int var12 = 0; var12 < 0x20; var12++) {
        Struct_ov017_021a4e88_4* var13 = func_0203dce4((Struct_0203dce4_2*)var1, var12);
        if (var13 == NULL) {
            continue;
        }
        func_02040648((unsigned int*)var13);
        int var14;
        if (var13->unknown_0_ & 0x40000) {
            var14 = 1;
        } else {
            var14 = 0;
        }
        var13->unknown_0_ &= ~0x40000;
        Type_ov017_021a4e88 var15 = ((Type_ov017_021a4e88 (*)(Struct_ov017_021a4e88_4*))func_020406f8)(var13);
        int var16 = 0;
        int var17 = 0x1800;
        Struct_ov017_021a4e88_3* var18 = func_02040538((Struct_0203e0a0*)var13);
        if (var18 != NULL) {
            if (var18->unknown_5c_ != NULL) {
                Vector3fix_Add(&var15, &var18->unknown_5c_->unknown_0_, &var15);
                var17 = var18->unknown_5c_->unknown_c_ + 0x1000;
                var8 = var18->unknown_5c_->unknown_c_ + 0x1400;
            }
            for (Struct_ov017_021a4e88_2* var19 = var18->unknown_40_; var19 != NULL; var19 = var19->unknown_14_) {
                if (var4.x < var19->unknown_4_ && var4.z < var19->unknown_8_ && var4.x > var19->unknown_c_ && var4.z > var19->unknown_10_) {
                    var9[var12] = var19->unknown_0_;
                    var16 = 1;
                    break;
                }
            }
        }
        if (var16 == 0) {
            if (var17 < fix32abs(var4.x - var15.x)) {
                continue;
            }
            if (var17 < fix32abs(var4.z - var15.z)) {
                continue;
            }
        }
        if (var14) {
            var13->unknown_0_ |= 0x40000;
        }
        func_02040658((unsigned int*)var13);
        func_02040bcc((char*)var13);
        if (var18->unknown_b_ != 0) {
            Struct_ov017_021a4e88_4* var20 = func_0203df78(var1, var18->unknown_b_);
            if (var20 != NULL) {
                func_02040658((unsigned int*)var20);
                func_02040bcc((char*)var20);
                var20->unknown_0_ |= 0x20000;
            }
        }
        if ((var13->unknown_0_ & 0x200) || var2->unknown_4080_ != 0) {
            continue;
        }
        if (func_020535c8((signed char*)var3)) {
            continue;
        }
        int var21 = (short)fix32abs(inline_ov017_021a4e88(&var4, (short)var5.y, var13));
        if (var21 > var11) {
            continue;
        }
        if (var16) {
            var6 = var12;
            var10 = var12;
            var11 = var21;
            continue;
        }
        unsigned char* var22 = func_02040528((int*)var13);
        if (arg0 == 0 || var22[2] == 1) {
            continue;
        }
        if (Vector3fix_Distance(&var4, &var15) < var8 && var21 < 0x3244 && var21 < var7) {
            var7 = var21;
            var6 = var12;
            var10 = var12;
            var11 = var21;
        }
    }
    if (var10 >= 0) {
        *arg1 = var9[var10];
    }
    return var6;
}
