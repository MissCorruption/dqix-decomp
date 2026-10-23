#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Combat/EntryGetterTypes.h"

struct Struct_02017a94 { char unknown_0_[6]; short unknown_6_; };
struct Struct_0203dce4_2;

struct Struct_02015438;
struct GameResources;
struct Struct_0203cec4;
struct Struct_0203fc5c;
struct Struct_0203de84_2;
struct Struct_0203de84 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_0203d028_15;
struct Struct_020409b0;
struct Struct_0203e2c4_2;
struct Struct_020aeb34 { char unknown_0_[0x10]; int unknown_10_; int unknown_14_; int unknown_18_; short unknown_1c_; };
struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };

extern "C" void* func_02012fe4(void);
extern "C" int rand(void);
extern "C" long long func_020c3260(int arg0);
extern "C" long long func_020c32f8(int arg0);
extern "C" float func_0200c700(long long);
extern "C" void Vector3fix_Add(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);
extern "C" struct Struct_0203dce4_2* func_0203cf4c();
extern "C" int func_02046b24(struct Struct_02015438**);
extern "C" struct Struct_02017a94* func_0201b600(Struct_02017a94*, int, unsigned short);
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2*, int);
extern "C" void func_02040648(unsigned int*);
extern "C" int func_02046b08(void**);
int IsMainBrightnessTransitionActive(struct GameResources*);
int GetMainBrightnessTransitionState(struct GameResources*);
extern "C" void func_02040774(struct Struct_0203d028_15*, int, int, int);
extern "C" void func_02040b2c(struct Struct_0203e2c4_2*, int);
extern "C" void func_020406f8(struct Struct_0203de84*, struct Struct_0203de84_2*);
extern "C" void func_0203cec4(struct Struct_0203cec4*, int);
extern "C" void func_0203fc5c(struct Struct_0203fc5c*, float);
extern "C" void func_020409b0(struct Struct_020409b0*, int);

// USA: func_020aeb34
extern "C" ARM void func_020aeb34(void) {
    struct Struct_0203dce4_2* var0;
    struct Struct_0203dce4* var1[4];
    GameResources* var2;
    struct Struct_02017a94* var3;
    int var4;
    struct Struct_02015438** var5;

    var3 = (struct Struct_02017a94*)func_02012fe4();
    var0 = func_0203cf4c();
    var2 = GetGameResources();
    var5 = (Struct_02015438**)var2->unknown_ptr_array_36fc[0];
    func_02046b24(var5);
    var3 = func_0201b600(var3, 0, 0x2a);

    if (var3 == NULL) return;

    for (var4 = 0; var4 < 4; var4++) {
        var1[var4] = func_0203dce4(var0, var2->unknown_444a_[var4]);
        if (var1[var4] == NULL) return;
        func_02040648((unsigned int*)var1[var4]);
    }

    if (func_02046b08((void**)var5) == 0 && IsMainBrightnessTransitionActive(var2) == 0 &&
        (GetMainBrightnessTransitionState(var2) == 2 ||
         GetMainBrightnessTransitionState(var2) == 3)) {
        if (var3->unknown_6_ != 0) return;
        for (int var6 = 0; var6 < 4; var6++) {
            Struct_020aeb34* var7 = (Struct_020aeb34*)func_02040538((Struct_0203e0a0*)var1[var6]);
            func_02040774((struct Struct_0203d028_15*)var1[var6], var7->unknown_10_, var7->unknown_14_, var7->unknown_18_);
            func_02040b2c((struct Struct_0203e2c4_2*)var1[var6], var7->unknown_1c_);
        }
        return;
    }

    var2->unknown_4454_ += 2 * (rand() % 13 - 6);
    if (var2->unknown_4454_ > 0x2d) var2->unknown_4454_ = 0x2d;
    if (var2->unknown_4454_ < 0x20) var2->unknown_4454_ = 0x20;

    int var8 = 88006;
    if (var3->unknown_6_ <= var2->unknown_4454_) {
        var3->unknown_6_ += 0x6487;
    }
    var3->unknown_6_ -= var2->unknown_4454_;

    int var9 = var3->unknown_6_;

    for (int var10 = 0; var10 < 4; var10++) {
        int var11;
        struct Struct_ov009_0218aa28 var12;
        struct Struct_ov009_0218aa28 var13;
        struct Struct_ov009_0218aa28 var14;
        struct Struct_0203de84 var15;

        var9 += 0x1921;
        if (var9 >= 0x6487) var9 -= 0x6487;
        var11 = var9 - 0xcc;
        if (var11 <= 0) var11 += 0x6487;

        var12.unknown_0_ = (int)(4096.0f * (func_0200c700(func_020c3260(var11)) / 4294967296.0f)) * 2;
        var12.unknown_4_ = 0;
        var12.unknown_8_ = (int)(4096.0f * (func_0200c700(func_020c32f8(var11)) / 4294967296.0f)) * 2;

        var13.unknown_0_ = var8;
        struct Struct_0203dce4* var16 = var1[var10];
        func_020406f8(&var15, (struct Struct_0203de84_2*)var16);
        var13.unknown_8_ = -0x970;
        var13.unknown_4_ = var15.unknown_4_;

        Vector3fix_Add(&var13, &var12, &var14);

        if ((var16->unknown_14_) != NULL) func_0203cec4((struct Struct_0203cec4*)(var16->unknown_14_), 1);
        if ((var16->unknown_14_) != NULL) func_0203fc5c((struct Struct_0203fc5c*)(var16->unknown_14_), 0.8f);
        func_020409b0((struct Struct_020409b0*)var16, (int)&var14);
        func_02040774((struct Struct_0203d028_15*)var16, var14.unknown_0_, var14.unknown_4_, var14.unknown_8_);
    }
}
