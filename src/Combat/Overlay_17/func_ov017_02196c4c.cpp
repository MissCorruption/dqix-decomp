#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Graphics/LightingManager.h"
#include "Util/Random.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0202ae18(void);
extern "C" unsigned char* func_02012fe4(void);
struct Struct_0200ffc0;
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);
extern "C" unsigned char* func_0205ec34(void);
extern "C" int func_02046b08(void** arg0);
struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);
extern "C" int func_02053cdc(int* arg0);
extern "C" int func_02039760(void* arg0);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
int NextRandomBetween(struct Random* rng, int lo, int hi);
extern "C" void func_ov017_021b6f18(void* arg0);
extern "C" void func_ov017_02196c08(unsigned char* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" unsigned short func_ov017_021a1a20(void);
extern "C" void* func_02033fa0(void* arg0);
struct Struct_0204be3c;
extern "C" unsigned short func_0204be3c(struct Struct_0204be3c* arg0);
extern "C" int func_ov017_021970a0(int arg0);
extern "C" void func_ov017_021b6e70(void* arg0, unsigned short arg1);
extern "C" void func_ov017_021b7104(void* arg0, void* arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_02196c4c {
#if defined(jpn)
    unsigned char unknown_0_[0x34e8];
#else
    unsigned char unknown1_0_[0x36f8];
#endif
    unsigned short* unknown_36f8_;
    void* unknown_36fc_;
    unsigned char unknown_3700_[0x3718 - 0x3700];
    void* unknown_3718_;
};

struct Struct_ov017_02196c4c_2 {
    unsigned char unknown_0_[3];
    unsigned char unknown_3_;
};

struct Struct_ov017_02196c4c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    unsigned short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    int unknown_14_;
};

// USA: func_ov017_02196c4c
extern "C" ARM int func_ov017_02196c4c(Struct_ov017_02196c4c* arg0) {
#if defined(jpn)
 enum {Enum_ov017_02196c4c_396=0x180, Enum_ov017_02196c4c_10132=0x27d4};
#else
 enum {Enum_ov017_02196c4c_396=0x18c, Enum_ov017_02196c4c_10132=0x2794};
#endif
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    unsigned char* var1 = func_02012fe4();
    unsigned short* var2 = arg0->unknown_36f8_;
    GameObject* var3 = var0->GetUnknownGameObject();
    void* var4 = func_0200ffc0((struct Struct_0200ffc0*)var0);
    LightingManager* var5;
    Struct_ov017_02196c4c_2* var6 = (Struct_ov017_02196c4c_2*)GetGameResources()->unknown_ptr_array_371c[6];
    unsigned char* var7 = func_0205ec34();
    var5 = LightingManager::GetInstance();

    if (func_02046b08((void**)arg0->unknown_36fc_) == 0) {
        return func_02046b24((struct Struct_02015438**)arg0->unknown_36fc_) == 0x45 ? 0 : 2;
    }
    if (var2 == NULL) {
        return 2;
    }
    if (func_02053cdc((int*)var3)) {
        return 2;
    }
    if (*(unsigned int*)((unsigned char*)var3 + Enum_ov017_02196c4c_396) & 1) {
        return 2;
    }
    if (TestFlags04((GameResources*)arg0, 0x10)) {
        return 2;
    }
    if (var6->unknown_3_ != 0) {
        return 2;
    }
    if (func_02039760(var3) != 0) {
        return 0;
    }
    if (*var2 != 10000) {
        return 0;
    }
    if (!func_0206dfb0((int)var7, var7 + 0x8c, 0x2b)) {
        return 0;
    }

    int var8 = 0;
    if (*(int*)(var1 + Enum_ov017_02196c4c_10132) <= 0) {
        var8 = 1;
        *(int*)(var1 + Enum_ov017_02196c4c_10132) = NextRandomBetween(GetBTRandom(), 0x1e, 0x64);
    }
    if (var8 == 0) {
        return 0;
    }

    func_ov017_021b6f18(arg0->unknown_3718_);
    Struct_ov017_02196c4c_3 var9;
    func_ov017_02196c08((unsigned char*)&var9);
    var9.unknown_0_ = 1;
    var9.unknown_1_ = func_020100a8(var0);
    var9.unknown_4_ = func_ov017_021a1a20();
    var9.unknown_2_ = 0xffff;
    var9.unknown_e_ = 1;
    var9.unknown_10_ = func_0204be3c((struct Struct_0204be3c*)func_02033fa0(var4));
    var9.unknown_f_ = func_ov017_021970a0(0);
    func_ov017_021b6e70(&var9, var9.unknown_2_);
    var9.unknown_12_ = var5->timeOfDayIndex_;
    func_ov017_021b7104(arg0->unknown_3718_, &var9);
    func_020469b4((struct Struct_0201bdac_2*)arg0->unknown_36fc_, (struct Struct_0201bdac*)arg0->unknown_3718_);
    return 1;
}
